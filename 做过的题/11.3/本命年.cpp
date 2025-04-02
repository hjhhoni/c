#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        switch ((n-1000)%12)
        {
        case 0:cout<<"Rat"<<endl;break;
        case 1:cout<<"Ox"<<endl;break;
        case 2:cout<<"Tiger"<<endl;break;
        case 3:cout<<"Rabbit"<<endl;break;
        case 4:cout<<"Dragon"<<endl;break;
        case 5:cout<<"Snake"<<endl;break;
        case 6:cout<<"Horse"<<endl;break;
        case 7:cout<<"Sheep"<<endl;break;
        case 8:cout<<"Monkey"<<endl;break;
        case 9:cout<<"Rooster"<<endl;break;
        case 10:cout<<"Dog"<<endl;break;
        case 11:cout<<"Pig"<<endl;break;
        
        default:
            break;
        }
    }
    
    return 0;
}