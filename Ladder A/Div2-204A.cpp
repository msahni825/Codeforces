/*A. Jeff and Digits
4
5 0 5 0

11
5 5 5 5 5 5 5 5 0 5 5
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
	int count0=0;
	int count5=0;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			count0++;
		}
		else{
			count5++;
		}
	}
	//# of 5's that can be used 
	count5=floor(count5/9)*9;
	if(count0==0){	//# cant be made multiple of 10
		cout<<-1<<"\n";
	}
	else if(count5==0){//the only # divisible by 90 is zero
		cout<<0<<"\n";
	}
	else{ 
		for(int i=0;i<count5;i++){
			cout<<5;
		}
		for(int j=0;j<count0;j++)
		{
			cout<<0;
		}
	}
	//fix first(5) and last pos(0); remaining pos:2^(n-2)
	//divisible by 9(Digits sum divisble by 9) and 10(last digit: 0)
	return 0;
}
