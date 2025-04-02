#include <stdio.h>

int k,n;
int arr[100005]={0},book[100005]={0};
int head=0,tail=0;
void bfs(){
    int step=1;
    book[0]=n;
    arr[n]=1;
    while (1)
    {
        int tou=head,wei=tail;
        for(int i=tou;i<=wei;i++){
            
            if (book[i]-1>=0&&arr[book[i]-1]==0)
            {
                arr[book[i]-1]=step;tail++;
                book[tail]=book[i]-1;
            }
            
            if (book[i]+1<=k&&arr[book[i]+1]==0)
            {
                arr[book[i]+1]=step;tail++;
                book[tail]=book[i]+1;
                                
            }
            if (book[i]*2<=k+3&&arr[book[i]*2]==0)
            {
                arr[book[i]*2]=step;tail++;
                book[tail]=book[i]*2;
                                
            } 
            if(book[i]-1==k||book[i]*2==k||book[i]+1==k){
                printf("%d",step);
                return;
            }
        }
        head=wei+1;
        step++;
    }
    

}
int main(){
    scanf("%d %d",&n,&k);
    if(k==n) {printf("0");return 0;}
    bfs();
}