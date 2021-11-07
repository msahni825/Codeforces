/*A. Little Elephant and Rozdil
7
7 4 47 100 4 9 12

2
7 4

20
3 3 6 9 8 2 4 1 7 3 2 9 7 7 9 7 2 6 2 7
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int min=INT_MAX;
	int min_idx=-1;
	bool flag=false;
	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
			min_idx=i;
			flag=false;
		}
		else if(arr[i]==min){
			flag=true;
		//	break;
		}
	}
	if(flag){
		cout<<"Still Rozdil"<<"\n";
	}
	else{
		cout<<min_idx+1<<"\n";
	}
	return 0;
}
