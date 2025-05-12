#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
typedef long long ll;
const int N = 1e5+7;

typedef struct{
	char data;  // 节点数据 
	double weight;  // 节点的权重 
	int parent,lchild,rchild;  // 父节点和孩子节点的下标（一维数组存储树） 
}HTNode;

typedef struct{
	char cd[N];  // 字符对应的哈夫曼编码（区间为[start,n0]，闭区间） 
	int start;  // 编码存储起点 
}HCode;

// 构建哈夫曼树 
void CreateHT(vector<HTNode>&ht,int n0){
	int i,k,lnode,rnode;  // i是索引index，k是用于第二层循环的索引，lnode是左孩子索引，rnode是右孩子索引 
	double min1,min2;   // min1，min2用于第二层循环中找到第一、第二小的权值的节点 
	for(i=0;i<2*n0-1;i++) {  // 先将叶子节点索引关系置空，标志为-1 
		ht[i].parent=-1;
		ht[i].lchild=-1;
		ht[i].rchild=-1;
	}
	for(i=n0;i<=2*n0-2;i++){  // 遍历非叶子节点的索引，用叶子节点和贪心策略生成新的节点，数量为n0-1个 
		min1 = min2 = 32767;   // 初始化一个很大的值 
		lnode = rnode = -1;    // 生成的非叶子节点左右孩子关系置空 
		for(k=0;k<=i-1;k++){	// k的范围取决于现存的所有叶子节点和非叶子节点的个数之和 
			if(ht[k].parent==-1){  // 若该节点未被拿去合并成新的非叶子节点，就与min1和min2对比，更新min1和min2及rnode，lnode找到最小权值的两个节点 
				if(ht[k].weight<min1){
					min2 = min1;rnode = lnode;
					min1 = ht[k].weight;lnode = k;
				}else if(ht[k].weight<min2){
					min2 = ht[k].weight;rnode=k;
				}
			}
		}
		ht[i].weight = ht[lnode].weight+ht[rnode].weight;  // 找完了最小的两个无父节点的节点之后拿来生成新的根节点，权值为二者之和 
		ht[i].lchild=lnode;ht[i].rchild = rnode;	// 更新刚创造的根节点的孩子节点索引关系 
		ht[lnode].parent = i;ht[rnode].parent = i;  // 标记该使用的节点已有父节点 
	}
}

//生成哈夫曼编码 
void CreateHCode(vector<HTNode> &ht,vector<HCode> &hcd,int n0){
	int i,f,c;  // i是叶子节点的索引，f是当前节点的父节点的索引，c是当前节点的索引 
	HCode hc;	// 一个叶子节点需要一个存储编码的容器，容器有效范围是[0,n0]，实际范围是[start,n0] 
	for(i=0;i<n0;i++){
		hc.start = n0;c=i; // 从容器的末尾开始存储便于编码的正向输出，然后c记录当前的节点的索引 
		f = ht[i].parent;	// f记录当前节点的父节点的索引，当父节点索引为-1即到达根，成功完善该叶子节点的字符的哈夫曼编码 
		while(f!=-1){
			if(ht[f].lchild==c) hc.cd[hc.start--]='0';  // 若当前节点是左节点 
			else hc.cd[hc.start--]='1';					// 若当前节点是右节点 
			c=f;f=ht[f].parent; 						// 当前节点变成其父节点，向上搜索直到根节点 
		}
		hc.start++;  //补偿多余的减少 
		hcd[i] = hc; //记录其哈夫曼编码，方便对应下标检索 
	}
}

void WPL(vector<HTNode> ht,int n0){
	double ans = 0;
	for(int i=0;i<n0;i++){  // 遍历叶子节点 
		double e_p = ht[i].weight; // each_path_weight 每条由根节点到叶子节点的带权路径
		double L = 0;
		int c = i; // 记录当前节点 
		int f = ht[i].parent; // 用f记录父节点索引
		while(f!=-1){
			L++;
			c = f;f = ht[f].parent; // 更新当前节点 
		} 
		ans+=e_p*L; 
		 
	}
	cout<<"该哈夫曼树的WPL："<<ans;
} 


 int main(){
 	int n0;
	cout<<"请输入叶子节点数：";
	cin>>n0;cout<<endl<<endl; 
    vector<HTNode> ht(n0*2-1);	//创建双亲存储法的一维数组 
    
    cout<<"请输入叶子节点数据：";for(int i=0;i<n0;i++)cin>>ht[i].data;cout<<endl<<endl;   // 存入节点信息 
    cout<<"请输入叶子节点权值：";for(int i=0;i<n0;i++)cin>>ht[i].weight;cout<<endl<<endl; 
    CreateHT(ht,n0);		  // 构建哈夫曼树Huffman Tree 

    vector<HCode> hcd(n0);   // 创建存储哈夫曼编码的容器 
    CreateHCode(ht,hcd,n0);
    for(int i=0;i<n0;i++) {  // 输出叶子节点数据的对应哈夫曼编码 
    	cout<<"数据"<<ht[i].data<<"的哈夫曼编码为："; 
        for(int j=hcd[i].start;j<=n0;j++){
            cout<<hcd[i].cd[j];
        }
        cout << endl<<endl;
    }
    WPL(ht,n0);  			// 算出哈夫曼树的WPL 
}
