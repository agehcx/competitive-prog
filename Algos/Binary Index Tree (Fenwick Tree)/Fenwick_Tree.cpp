#include <bits/stdc++.h>
using namespace std;

const int mxN = 1e5 + 9;
int fw[mxN], N;

struct fenwick {
    void upd(int idx, int val) {
        while (idx <= N) {
            fw[idx] += val;
            idx += idx & -idx;
        }
    }
    int qry(int idx) {
        int res = 0;
        while (idx > 0) {
            res += fw[idx];
            idx -= idx & -idx;
        }
        return res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int typ; cin>>typ;
    fenwick f; cin>>N;
    for(int i=1, x; i<=N; i++) {
        cin>>x;
        f.upd(i,x);
    }
    int L, R; cin>>L>>R;
    cout<<"Before update <=> "<<(f.qry(R)-f.qry(L-1))<<'\n';
    if(typ==0) return 0;
	int numsUpdate; cin>>numsUpdate;
	for(int i=0, pos, val; i<numsUpdate; i++) {
		cin>>pos>>val;
		f.upd(pos,val);
	}
	cin>>L>>R;
    cout<<"Updated <=> "<<(f.qry(R)-f.qry(L-1));
    return 0;
}


/*
0 5
1 2 3 4 5
2 4

Change from {1,2,3,4,5} to {5,3,3,4,5}

1 2 3 4 5
5 3 3 7 5
4 1 0 3 0

1 5
1 2 3 4 5
2 4
5
1 4
2 1
3 0
4 3
5 0
2 4

*/
