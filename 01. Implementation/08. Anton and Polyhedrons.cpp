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
	int t, ans = 0;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    if(s == "Tetrahedron") {
	        ans += 4;
	    }
	    else if(s == "Cube") {
	        ans += 6;
	    }
	    else if(s == "Octahedron") {
	        ans += 8;
	    }
	    else if(s == "Dodecahedron") {
	        ans += 12;
	    }
	    else if(s == "Icosahedron") {
	        ans += 20;
	    }
	}
	cout<<ans;
	return 0;
}














