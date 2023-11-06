#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 + 9;
char Ar[N][N];
int R, C, CNT = 0, MXN = 0;

const int dix[] = {0,-1,0,1};
const int diy[] = {1,0,-1,0};

bool isValid(int Dx, int Dy, char Ch) {
	return ( Dx >= 0 && Dx < R && Dy >= 0 && Dy < C && Ar[Dx][Dy] == Ch );
}

void FloodFill(int x, int y) {
	if(!isValid(x,y,'.')) return;
	Ar[x][y] = '*';
	for(int i=0; i<4; i++) {
		int nx = x + dix[i], ny = y + diy[i];
		if(Ar[nx][ny]=='.') FloodFill(nx,ny);
	}
}

void countEdge(int x, int y) {
	if(!isValid(x,y,'X')) return;
	Ar[x][y] = '!';
	for(int i=0; i<4; i++) {
		int nx = x + dix[i], ny = y + diy[i];
		if(Ar[nx][ny] == '*') CNT++;
		if(isValid(nx,ny,'X')) countEdge(nx,ny); 
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>R>>C;
	for(int i=0; i<R; i++) {
		for(int j=0; j<C; j++) {
			cin>>Ar[i][j];
		}
	}
	FloodFill(0,0);
	for(int i=0; i<C; i++) {
		for(int j=0; j<R; j++) {
			if(Ar[i][j] == 'X') {
				CNT = 0;
				countEdge(i,j);
				MXN = max(MXN,CNT);
			}
		}
	}
	cout<<MXN;
}
