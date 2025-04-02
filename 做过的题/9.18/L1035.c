#include<stdio.h>
int main()
{
  int i, n, score;
  int a = 0, b = 0, c = 0, d = 0, e = 0;
  scanf("%d",&n);
  for(i = 0; i < n; i++)
  {
    scanf("%d",&score);
    if(score >= 90)
    {a++;}
    else if(score < 90 && score >= 80)
    {b++;}
    else if(score < 80 && score >= 70)
    {c++;}
    else if(score < 70 && score >= 60)
    {d++;}
    else
    {e++;}
  }
  printf("%d %d %d %d %d\n",a,b,c,d,e);
  return 0;
}