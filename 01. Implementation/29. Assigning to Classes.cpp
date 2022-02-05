#include <bits/stdc++.h>
typedef long long ll;
#define inf (long long)(LLONG_MAX)
#define mod (int)(1e9+7)
#define ff  first
#define ss  second
#define pb  push_back
#define FIO ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

/*

3
0 1 2 3 4 5
1 2 3 4 5 6

*/

int main() {
	FIO
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    vector<int> A(2*n);
	    for(int i=0; i<2*n; i++) {
	        cin>>A[i];
	    }
	    sort(A.begin(), A.end());
	    cout<<A[n] - A[n - 1]<<"\n";
	}
	return 0;
}














