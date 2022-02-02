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
	int n, m;
	cin>>n>>m;
	bool flag = false;
	for(int i=0; i<n; i++) {
	    if(i%2 == 0) {
	        for(int j=0; j<m; j++) {
	            cout<<"#";
    	    }
	    }
	    else {
    	    for(int j=0; j<m; j++) {
	            if(j == 0 && flag) {
	                cout<<"#";
	            }
	            else if(j == m - 1 && !flag) {
	                cout<<"#";
	            }
	            else {
	                cout<<".";
	            }
    	    }
    	    flag = !flag;
	    }
	    cout<<"\n";
	}
	return 0;
}














