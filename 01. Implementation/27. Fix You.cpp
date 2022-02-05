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
	int t;
	cin>>t;
	while(t--) {
	    int n, m, ans = 0;
	    cin>>n>>m;
	    char a[n][m];
	    for(int i=0; i<n; i++) {
	        for(int j=0; j<m; j++) {
	            cin>>a[i][j];
	        }
	    }
	    for(int i=0; i<n-1; i++) {
	        if(a[i][m - 1] == 'R') {
	            ans++;
	        }
	    }
	    for(int j=0; j<m-1; j++) {
	        if(a[n - 1][j] == 'D') {
	            ans++;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}














