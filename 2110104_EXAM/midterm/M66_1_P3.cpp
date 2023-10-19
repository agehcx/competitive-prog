#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    double weight = 0;
    double totalscore = 0;
    string gradescore = "FDCBA";
    for(int i = 0; i < N; i++) {
        string grade;
        cin >> grade;
        int ww;
        cin >> ww;
        double sc = gradescore.find(grade[0]);
        if(grade.size() > 1) sc += 0.5;
        totalscore += sc * ww;
        weight += ww;
    }
    double gpa = totalscore/weight;
    cout << round(gpa*100) / 100;
}