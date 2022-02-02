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
	int r, c;
	for(int i=0; i<5; i++) {
	    for(int j=0; j<5; j++) {
	        int x;
	        cin>>x;
	        if(x == 1) {
	            r = i;
	            c = j;
	        }
	    }
	}
	cout<<abs(r - 2) + abs(c - 2);
	return 0;
}














