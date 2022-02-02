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
	vector<int> v(3);
	for(int i=0; i<3; i++) {
	    cin>>v[i];
	}
	sort(v.begin(), v.end());
	cout<<(v[1] - v[0]) + (v[2] - v[1]);
	return 0;
}














