/* https://www.borntodev.com/devlab/task/452 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    getline(cin,x);
    int N;
    for(int i=0; i<x.size(); i++) {
        if(x[i] >= '0' && x[i] <= '9') {
            N = N * 10 + x[i] - '0';
        }
    }
    int arr[N]; 
    for(int i=0; i<N; i++) {
        cin>>arr[i];
    }
    for(int i=1; i<=N; i++) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int j=0; j<i; j++) {
            pq.push(arr[j]);
        } 
        cout<<"ROW "<<i<<" : [";
        while(!pq.empty()) {
            cout<<pq.top();
            if(pq.size()!=1) cout<<", ";
            pq.pop();
        }
        cout<<"]\n";
    }
}
