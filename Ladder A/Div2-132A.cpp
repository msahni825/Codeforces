/*A. Bicycle Chain*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;	//2
	cin>>n;
	int pedal[n];	//4,5
	for(int i=0;i<n;i++){
		cin>>pedal[i];
	}
	int m;	//3
	cin>>m;	
	int wheel[m];	//12,13,15
	for(int i=0;i<m;i++){
		cin>>wheel[i];
	}
	vector<int> vec;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(wheel[i]%pedal[j]==0){
				int div=wheel[i]/pedal[j];
				vec.push_back(div);
			}
		}
	}
	sort(vec.begin(),vec.end());
	int count=0;
	int max=vec[vec.size()-1];
	for(int i=vec.size()-1;i>=0;i--){
		if(vec[i]>=max){
			count++;
		}
	}
	cout<<count<<"\n";
	return 0;
}
