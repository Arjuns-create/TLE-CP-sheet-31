#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		
		ll arr[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		ll prev=0;
		ll ans=0;
		
		for(ll i=0;i<n;i++){
			// cout << arr[i] << " " << prev << endl;
			ans=max(ans,arr[i]-prev);
			prev=arr[i];
		}
		ans=max(ans,2*(k-prev));
		// cout << k << " " << prev << endl;
		cout << ans << endl;
	}
}