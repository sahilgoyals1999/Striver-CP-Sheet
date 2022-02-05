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
	int n, k;
	cin>>n>>k;
	while(k--) {
	    int r = n%10;
	    if(r != 0) {
	         n--;
	    }
	    else {
	        n /= 10;
	    }
	}
	cout<<n;
	return 0;
}














