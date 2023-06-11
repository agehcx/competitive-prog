/* https://www.borntodev.com/devlab/task/875 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string word,guess;
	getline(cin, word);
	getline(cin, guess);
	const int sz = word.size();
	char ans[sz];
	memset(ans,'.',sizeof(ans));
	queue<char> q;
	bool win = true;
	int cnt = 0;
	for(int i=0; i<guess.size(); i+=2) {
		bool found = false;
		if(cnt == sz) break;
		for(int j=0; j<sz; j++) {
			if(toupper(guess[i]) == word[j]) {
				cnt++;
				found = true;
				ans[j] = word[j];
			}
		}
		if(!found) q.push(guess[i]);
	}
	for(int i=0; i<sz; i++) {
		if(ans[i]=='.') win = false;
		cout<<ans[i]<<' ';
	}
	cout<<'\n';
	const int qsz = q.size();
	if(!qsz) cout<<"guessed: none";
	else {
		cout<<"guessed: ";
		while(!q.empty()) {
			cout<<q.front()<<' ';
			q.pop();
		}
	}
	cout<<'\n';
	if(!win && qsz <= 5) return 0;
	else if(win) cout<<"John win";
	else cout<<"John lose";
}
