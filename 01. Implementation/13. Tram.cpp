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
	int n, sum = 0, mx = INT_MIN;
	cin>>n;
	while(n--) {
	    int a, b;
	    cin>>a>>b;
	    sum -= a;
	    sum += b;
	    mx = max(mx, sum);
	}
	cout<<mx;
	return 0;
}














