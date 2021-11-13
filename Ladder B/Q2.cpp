/*B. Reverse Sort
3
7
0011111
5
10100
6
001000
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int all_ones=0;
		int all_zeros=0;
		for(int i=0;i<n;i++){
			if(arr[i]==1){
				all_ones++;
			}
		}
	//	cout<<"ones: "<<all_ones<<"\n";
		for(int i=n-1;i>=n-all_ones;i--){
			if(arr[i]==0){
				all_zeros++;
			}
		}
	//	cout<<"zeros: "<<all_zeros<<"\n";
		if(all_zeros==0){
			cout<<0<<"\n";
		}
		else{
			cout<<1<<"\n";
			cout<<2*all_zeros<<" ";
			for(int i=0;i<n;i++){
				if(arr[i]==1 && i<n-all_ones){
					cout<<i+1<<" ";
				}
				else if(arr[i]==0 && i>=n-all_zeros){
					cout<<i+1<<" ";
				}
			}
		}
	}
	return 0;
}

