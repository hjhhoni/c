#include <stdio.h>

int k,n,yc,xc,yz,xz;
char arr[105][105];
int head=0,tail=0;
void bfs(int(*book)[2]){
    int step=0;
    book[0][0]=yc-1;
    book[0][1]=xc-1;
    arr[yc-1][xc-1]='#';
    int y,x;
    while (1)
    {
        int tou=head,wei=tail;
        for(int i=tou;i<=wei;i++){
            y=book[i][0];
            x=book[i][1];
            if (y-1>=0&&arr[y-1][x]!='#') //上
            {
                arr[y-1][x]='#';
                tail++;
                book[tail][0]=y-1;
                book[tail][1]=x;
            }
            if (y+1<n&&arr[y+1][x]!='#') //下
            {
                arr[y+1][x]='#';
                tail++;
                book[tail][0]=y+1;
                book[tail][1]=x;
            }
            if (x+1<n&&arr[y][x+1]!='#')  //右
            {
                arr[y][x+1]='#';
                tail++;
                book[tail][0]=y;
                book[tail][1]=x+1;
            }    
            if (x-1>=0&&arr[y][x-1]!='#') //左
            {
                arr[y][x-1]='#';
                tail++;
                book[tail][0]=y;
                book[tail][1]=x-1;
            } 
            if(tail==wei&&arr[yz-1][xz-1]=='#'){
                printf("%d\n",step);
                return;
            }else if (tail==wei&&arr[yz-1][xz-1]!='#')
            {
                printf("NO\n");
                return;
            }
            
        }
        head=wei+1;
        step++;
    }
    

}
int main(){
    scanf("%d",&k);
    for(int ikun=1;ikun<=k;ikun++){
        int book[1000000][2]={0};
        scanf("%d",&n);
        
        for(int i=0;i<n;i++){
            scanf("%s",arr[i]);
        }
        scanf("%d %d %d %d",&yc,&xc,&yz,&xz);
        if (arr[yc-1][xc-1]=='#'||arr[yz-1][xz-1]=='#')
        {
            printf("NO\n");
            continue;
        }
        if (n==1)
        {
            printf("0\n");
            continue;
        }
        
        bfs(book);
    }
}