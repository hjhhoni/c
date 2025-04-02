    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    const int N = 1e9+7;

    void solve(){
        int n;cin>>n;int mark = 0;
        for(int i=0;i<=n;i++){
            int a;cin>>a;
            int v = n-i;
            if(v!=1){
                if(i!=n){  //不是最后一项
                    if(a==0) continue;
                    else{
                        if(mark==1){  //有第一项
                            if(a>0){
                                if(a==1) cout<<"+x^"<<v;
                                else cout<<"+"<<a<<"x^"<<v;
                            }else{
                                if(a==-1) cout<<"-x^"<<v;
                                else cout<<a<<"x^"<<v;
                            }
                        }else{ //没有第一项
                            if(a>0){
                                if(a==1) cout<<"x^"<<v;
                                else cout<<a<<"x^"<<v;
                            }else{
                                if(a==-1) cout<<"-x^"<<v;
                                else cout<<a<<"x^"<<v;
                            }
                            mark = 1;
                        }
                    }
                }else{
                    if(a==0) continue;
                    else{
                        if(a>0){
                            cout<<"+"<<a;
                        }else{
                            cout<<a;
                        }
                    }
                }
            }else{
                if(i!=n){  //不是最后一项
                    if(a==0) continue;
                    else{
                        if(mark==1){  //有第一项
                            if(a>0){
                                if(a==1) cout<<"+x";
                                else cout<<"+"<<a<<"x";
                            }else{
                                if(a==-1) cout<<"-x";
                                else cout<<a<<"x";
                            }
                        }else{ //没有第一项
                            if(a>0){
                                if(a==1) cout<<"x";
                                else cout<<a<<"x";
                            }else{
                                if(a==-1) cout<<"-x";
                                else cout<<a<<"x";
                            }
                            mark = 1;
                        }
                    }
                }else{
                    if(a==0) continue;
                    else{
                        if(a>0){
                            cout<<"+"<<a;
                        }else{
                            cout<<a;
                        }
                    }
                }
            }
        }
    }

    int main() {
        ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        int t=1;//cin>>t;
        while(t--) solve();
        return 0;
    }