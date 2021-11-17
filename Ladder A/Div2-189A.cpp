/*A. Magic Numbers
-> 114114
-> 1111
-> 441231
1, 14, 144 */

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	vector<int> res;
	bool flag=false;
	int val=0;
	int c=0;
	
	while(n){
		val=n%10;
		n=n/10;
		res.push_back(val);
	}
	reverse(res.begin(),res.end());
	if(res[0]==4){
		flag=true;
	}
	else{
		for(int i=0;i<res.size();i++){
			if(res[i]==4 && res[i+1]==4 && res[i+2]==4){
				flag=true;
			}
		}
		for(int i=0;i<res.size();i++){
			if(res[i]!=1 && res[i]!=4){
				flag=true;
			}
		}	
	}
	if(flag){
		cout<<"NO"<<"\n";
	}
	else{
		cout<<"YES"<<"\n";
	}
	return 0;
}
