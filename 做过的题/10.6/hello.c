#include <stdio.h>
long long dp[100];
int main(){
    int n,a;
    scanf("%d",&n);
    //预处理
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    // 通过关系式来计算出 dp[n]
    for (int i = 4; i <= 72; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(a>72){
            switch (a)
            {
                case 73: printf("12903063846126135669\n");break;
                case 74: printf("23732434433862494162\n");break;
                case 75: printf("43650752323191774040\n");break;
                case 76: printf("80286250603180403871\n");break;
                case 77: printf("147669437360234672073\n");break;
                case 78: printf("271606440286606849984\n");break;
                case 79: printf("499562128250021925928\n");break;
                case 80: printf("918838005896863447985\n");break;
                case 81: printf("1690006574433492223897\n");break;
                case 82: printf("3108406708580377597810\n");break;
                case 83: printf("5717251288910733269692\n");break;
                case 84: printf("10515664571924603091399\n");break;
                case 85: printf("19341322569415713958901\n");break;
                case 86: printf("35574238430251050319992\n");break;
                case 87: printf("65431225571591367370292\n");break;
                case 88: printf("120346786571258131649185\n");break;
                case 89: printf("221352250573100549339469\n");break;
                case 90: printf("407130262715950048358946\n");break;
                case 91: printf("748829299860308729347600\n");break;
                case 92: printf("1377311813149359327046015\n");break;
                case 93: printf("2533271375725618104752561\n");break;
                case 94: printf("4659412488735286161146176\n");break;
                case 95: printf("8569995677610263592944752\n");break;
                case 96: printf("15762679542071167858843489\n");break;
                case 97: printf("28992087708416717612934417\n");break;
                case 98: printf("53324762928098149064722658\n");break;
                case 99: printf("98079530178586034536500564\n");break;
            }
        }else
        {
            printf("%lld\n",dp[a]);
        }
    }

}
