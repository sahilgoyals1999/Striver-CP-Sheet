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
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	cout<<(min({(k*l)/nl, c*d, p/np}))/n;
	return 0;
}














