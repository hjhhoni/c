#include<iostream>
#include <vector>
using namespace std;

bool isInStore(int n, vector<int> Store){
    for (int i = 0; i < Store.size(); i++) {
        if (Store[i] == n) {
            return true;
        }
    }
    return false;
}

int SearchTimes(int n,int m, vector<int> Passage, vector<int> Store) {
    int Times = 0;
    for (int i = 0; i < n; i++) {
        if (!isInStore(Passage[i],Store)) {
            Store.push_back(Passage[i]);
            Times++;
            if (Store.size() > m) {
                Store.erase(Store.begin());
            }
        }
    }
    return Times;
}

int main()
{
    vector <int> Passage,Store;
    int M,N,num=0,count=0;
    cin >> M >> N;

    for (int i = 0; i < N; i++) {
        int shuru = 0;
        cin >> shuru;
        Passage.push_back(shuru);
    }
    for (int i = 0; i < M; i++) {
        Store.push_back(-1);
    }

    count = SearchTimes(N, M, Passage, Store);
    cout << count;

    return 0;
}
