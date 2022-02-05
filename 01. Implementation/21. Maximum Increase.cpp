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
	int n, ans = 1, cnt = 1;
	cin>>n;
	vector<int> A(n);
	for(int i=0; i<n; i++) {
	    cin>>A[i];
	}
	for(int i=1; i<n; i++) {
	    if(A[i] > A[i - 1]) {
	        cnt++;
	    }
	    else {
	        cnt = 1;
	    }
	    ans = max(ans, cnt);
	}
	cout<<ans;
	return 0;
}














