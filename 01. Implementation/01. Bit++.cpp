#include <bits/stdc++.h>
typedef long long ll;
#define inf (long long)(LLONG_MAX)
#define mod (int)(1e9+7)
#define ff  first
#define ss  second
#define FIO ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main() {
	FIO
	int t, sum = 0;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    if(s[0] == '+' || s[2] == '+') {
	        sum++;
	    }
	    else {
	        sum--;
	    }
	}
	cout<<sum;
	return 0;
}














