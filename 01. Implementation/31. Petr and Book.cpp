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
	int n, sum = 0, ans = -1, lastDay = -1;
	cin>>n;
	vector<int> A(7);
	for(int i=0; i<7; i++) {
	    cin>>A[i];
	    sum += A[i];
	    if(A[i] > 0) {
	        lastDay = i + 1;
	    }
	}
	n = n%sum;
	if(n == 0) {
	    ans = lastDay;
	}
	else {
    	for(int i=0; i<7; i++) {
    	    n -= A[i];
    	    if(n <= 0) {
    	        ans = i + 1;
    	        break;
    	    }
    	}
	}
	cout<<ans;
	return 0;
}














