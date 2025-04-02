#include<stdio.h>
char s[100005];
int n;
int mx=0;
long long int b[100005];
long long int hash[2][100005];//一个正哈希，一个反哈希
long long int base=233;
long long int mod=1e9+7;
int check(int length)
{
    for(int i=1;i<=n-length+1;i++)
    //枚举左端点
    {
        long long int zz=((hash[0][i+length-1]-hash[0][i-1]*b[length]%mod)%mod+mod)%mod;
        //正串的哈希值
        long long int fz=((hash[1][i]-hash[1][i+length]*b[length]%mod)%mod+mod)%mod;
        //反串的哈希值
        if(zz==fz)//比较正反串是否相等
            return 1;
    }
    //到最后都没有找到相等的位置
    return 0;
}
int main()
{
    scanf("%d",&n);
    scanf("%s",s+1);
    for(int i=1;i<=n;i++)
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
            s[i]='b';
    //初始化
    b[0]=1;
    for(int i=1;i<=n;i++)
        b[i]=(b[i-1]*base)%mod;
    for(int i=1;i<=n;i++)
        hash[0][i]=(hash[0][i-1]*base+s[i]-'a')%mod;
    for(int i=n;i>=1;i--)
        hash[1][i]=(hash[1][i+1]*base+s[i]-'a')%mod;
    
    
    //二分回文串长度，枚举字符串起点，看是否有符合的字符串
    //需注意，回文串长度为奇数跟回文串长度为偶数的情况要分开二分
    //如aba,长度为2时不是回文，但长度为3时是回文
    int l=0,r=n;
    if(r%2==1)//先二分偶数长度
        r--;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(mid%2==1)
            mid++;
        //确保长度为偶数
        if(check(mid))
            l=mid;
        else
            r=mid-2;
    }
    mx=l;
    l=1,r=n;
    if(r%2==0)
        r--;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(mid%2==0)
            mid++;
        if(check(mid))
            l=mid;
        else
            r=mid-2;
    }
    if(l>mx)
        mx=l;
    printf("%d",mx);
    return 0;
}