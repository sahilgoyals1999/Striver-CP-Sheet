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
	string s;
	cin>>s;
	if(s[0] >= 97 && s[0] <= 122) {
	    s[0] -= 32; 
	}
	cout<<s;
	return 0;
}














