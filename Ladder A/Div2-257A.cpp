/*A. Jzzhu and Children*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int input[n];
	vector<int> demo;
	int m;
	cin>>m;
	int c=0;
	int result=0;
	for(int i=1;i<n;i++){
		cin>>input[i];
		demo.push_back(i);
	}
	for(int i=0;i<n;i++){
		if(input[demo[i]-1]>m){
			demo.push_back(demo[i]);
			c++;
		}
	}
	if(c==0){
		result=n;
	}
	else{
		result=demo[demo.size()-1];
	}
	//cout<<"c: "<<c<<"\n";
	cout<<result<<"\n";
	return 0;
}
