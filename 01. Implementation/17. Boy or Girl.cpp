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
	map<char, int> mp;
	int n = s.length();
	for(int i=0; i<n; i++) {
	    mp[s[i]]++;
	}
	if(mp.size()%2 == 1) {
	    cout<<"IGNORE HIM!";
	}
	else {
	    cout<<"CHAT WITH HER!";
	}
	return 0;
}














