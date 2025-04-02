#include <stdio.h>
#include <math.h>
void move(char x,char y){
    printf("Move %c to %c\n",x,y);
}
void hanoi(int n,char one,char two,char three){
    if(n==1) move(one,three);
    else
    {
        hanoi(n-1,one,three,two);
        move(one,three);
        hanoi(n-1,two,one,three);
    }
    
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d\n",(int)pow(2,n)-1);
    hanoi(n,'A','B','C');
}