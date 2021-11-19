/*A. Translation
abacaba
abacaba
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,t;
	cin>>s;
	cin>>t;
	bool flag=false;
//	if(s==t){
//		flag=true;
//	}
	reverse(s.begin(),s.end());
	if(s!=t){
		flag=true;
	}
	if(flag){
		cout<<"NO"<<"\n";
	}
	else{
		cout<<"YES"<<"\n";
	}
	return 0;
}
