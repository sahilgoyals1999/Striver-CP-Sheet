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
	string s;
	cin>>s;
	int n = s.length();
	for(int i=0; i<n; i++) {
	    char newNo = '9' - s[i] + '0';
	    if(i == 0 && newNo == '0') continue;
	    if(newNo < s[i]) {
	        s[i] = newNo;
	    }
	}
	cout<<s;
	return 0;
}














