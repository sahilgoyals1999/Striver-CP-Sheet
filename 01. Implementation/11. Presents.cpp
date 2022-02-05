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
	int n;
	cin>>n;
	vector<pair<int, int>> A(n);
	for(int i=0; i<n; i++) {
	    A[i].ss = i + 1;
	    cin>>A[i].ff;
	}
	sort(A.begin(), A.end());
	for(int i=0; i<n; i++) {
	    cout<<A[i].ss<<" ";
	}
	return 0;
}














