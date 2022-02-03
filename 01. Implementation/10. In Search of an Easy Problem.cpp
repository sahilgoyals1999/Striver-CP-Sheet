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
	int n, sum = 0;
	cin>>n;
	for(int i=0; i<n; i++) {
	    int x;
	    cin>>x;
	    sum += x;
	}
	if(sum == 0) {
	    cout<<"EASY";
	}
	else {
	    cout<<"HARD";
	}
	return 0;
}














