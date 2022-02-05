#include <bits/stdc++.h>
typedef long long ll;
#define inf (long long)(LLONG_MAX)
#define mod (int)(1e9+7)
#define ff  first
#define ss  second
#define pb  push_back
#define FIO ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main() {
	FIO
	string s;
	cin>>s;
	int ans = 0;
	vector<string> A(5);
	for(int i=0; i<5; i++) {
	    cin>>A[i];
	}
	for(int i=0; i<5; i++) {
	    if(A[i][0] == s[0] || A[i][1] == s[1]) {
	        ans = 1;
	        break;
	    }
	}
	if(ans == 1) {
	    cout<<"YES";
	}
	else {
	    cout<<"NO";
	}
	return 0;
}














