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
	int n = s.length(), ones = 0, twos = 0, threes = 0;
	for(int i=0; i<n; i+=2) {
	    if(s[i] == '1') {
	        ones++;
	    }
	    else if(s[i] == '2') {
	        twos++;
	    }
	    else {
	        threes++;
	    }
	}
	for(int i=0; i<n; i+=2) {
	    if(ones > 0) {
	        s[i] = '1';
	        ones--;
	    }
	    else if(twos > 0) {
	        s[i] = '2';
	        twos--;
	    }
	    else {
	        s[i] = '3';
	        threes--;
	    }
	}
	cout<<s;
	return 0;
}














