/*B. Sale
6 6
756 -611 251 -66 572 -818

ans: 1495
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int m;
	cin>>n;
	cin>>m;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxsum=0;
	int j=0;
	sort(arr,arr+n);
	//sort(arr.begin(),arr.end());
	while(m--){
		if(arr[j]<0){
			maxsum+=arr[j];
		}
		j++;
	}
	cout<<abs(maxsum);
	return 0;
}
