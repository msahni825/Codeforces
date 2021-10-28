/*A. Boy or Girl
wjmzbmr

xiaodao

sevenkplus
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	string user_name;
	cin>>user_name;
	set<char> check;
	for(int i=0;i<user_name.size();i++){
		check.insert(user_name[i]);
	}
//	cout<<check.size()<<"\n";
	if(check.size()%2==0){
		cout<<"CHAT WITH HER!";
	}
	else{
		cout<<"IGNORE HIM!";
	}
	return 0;
}
