#include <stdio.h>
//最大最小和平均
int main(){
    int input_count,max=1,min=99,avg;

    scanf("%d", &input_count);

    for (int i = 0; i < input_count; ++i) {
        int value;
        scanf("%d", &value);
        if(value>max){
            max = value;
        }
        if (value<min)
        {
            min = value;
        }

        avg+=value;
        
    }
    printf("%d\n",max);
    printf("%d\n",min);
    printf("%d",avg/input_count);
}