/* https://www.borntodev.com/devlab/task/850 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<pair<double,string>,vector<pair<double,string>>,greater<pair<double,string>>> pq;
    priority_queue<int,vector<int>,greater<int>> pq2;
    int x;
    cin >> x;
    double avg = 0;
    for(int i=1; i<=x; i++) {
        string id;
        double score;
        cin>>id>>score;
        pq.push({score,id});
        if(score>100) {
            cout<<"Error";
            return 0;
        }
        avg += score;
    }
    avg = avg / x;
    if(pq.top().first > 100 ) cout<<"Error";
    while(!pq.empty()) {
        if(pq.top().first >= avg ) {
            int id = stoi(pq.top().second);
            pq2.push(id);
        }
        pq.pop();
    } 
    while(!pq2.empty()) {
      cout<<pq2.top()<<'\n';
      pq2.pop();
    } 
}

