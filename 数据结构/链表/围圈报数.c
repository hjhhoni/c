#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Man)
struct Man
{
    int num;
    struct Man * next;
    struct Man * front;
};

int main(){
    int n,m;
    struct Man *p1,*p2,*pc;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        if (i==1)
        {
            p1=p2=pc=(struct Man*)malloc(LEN);
            p1->num=1;
        }else
        {
            p2=(struct Man*)malloc(LEN);
            p2->num=i;   //记录第几个
            p2->front=p1;  //链接前面
            p1->next=p2;   //前面与之链接
            p1=p2;   //作为下一个的前面
            if (i==n)
            {
                pc->front=p1;  //首尾闭合
                p1->next=pc;  
            } 
        } 
    }

    for(int i=1;i<=m;i++){
        if (i==m)
        {
            if (pc->next==pc->front)
            {
     
                printf("%d %d",pc->num,pc->next->num);
                break;
            }
            i=0;
            printf("%d ",pc->num);
            pc->front->next=pc->next; //删除该节点
            pc->next->front=pc->front;
            pc=pc->next;
            
        }else
        {
            pc=pc->next; //下一个
        }
    }
    // for(;;){
    //     printf("%d ",pc->num);
    //     pc=pc->next;
    // }
}