/*B. Xenia and Ringroad
4 3
3 2 3	|	6

4 3
2 3 3	|	2
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll; 

int main(){
	int n;
	int m;
	cin>>n;
	cin>>m;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	
	int prev=arr[0]-1;
	ll steps=arr[0]-1;
	
	for(int i=1;i<m;i++){
		if(arr[i]<arr[i-1]){
			steps+=((n-arr[i-1])+arr[i]);
		//	cout<<"steps: "<<steps<<"\n";
		}
		else{
			steps+=(arr[i]-arr[i-1]);
		//	cout<<"steps: "<<steps<<"\n";
		}
	}
	cout<<steps<<"\n";
	return 0;
}
