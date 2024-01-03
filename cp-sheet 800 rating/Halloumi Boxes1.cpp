#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(is_sorted(arr,arr+n) || k>1){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}


// approach just check if there is an array which is already sorted or k>1  means if sorted ya k bda ho isse then you have to return yes else no thats the logic //
