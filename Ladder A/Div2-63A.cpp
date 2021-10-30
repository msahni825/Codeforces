/*A: Young Physicist*/
#include<bits/stdc++.h>
using namespace std;

/*
0 2 -2
1 -1 3
-3 0 0
*/

int main(){
	int n;
	int arr[101][101];
	int sum=0;
	//cout<<"enter n: "<<"\n";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	int col=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<n;j++){
			sum+=arr[j][i];	
		//	cout<<"j: "<<j<<"i: "<<i<<" "<<arr[j][i]<<"\n";
		}
		if(sum==0){
			col++;
		}
	//	cout<<sum<<"\n";
		sum=0;
	}
	if(col==3){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
