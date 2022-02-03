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
	int n, mx_p = 0, mn_p = 0, mx = INT_MIN, mn = INT_MAX;
	cin>>n;
	for(int i=0; i<n; i++) {
	    int x;
	    cin>>x;
	    if(x > mx) {
	        mx = x;
	        mx_p = i;
	    }
	    if(x <= mn) {
	        mn = x;
	        mn_p = i;
	    }
	}
	if(mx_p == mn_p) {
	    cout<<"0";
	}
	else if(mx_p < mn_p) {
	    cout<<mx_p + n - 1 - mn_p;
	}
	else {
	    cout<<mx_p + n - 1 - mn_p - 1;
	}
	return 0;
}














