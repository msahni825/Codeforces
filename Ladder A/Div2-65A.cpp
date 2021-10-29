/*A. Way Too Long Words*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	string input;
	string result="";
	string str="";
	int t;
	cin>>t;
	while(t--){
		cin>>input;
		int len=0;
		int sz=input.size();
		
		if(sz<=10){
			result=input;
		//	cout<<input<<"\n";
		}
		else{
			int updated_sz=sz-2;
			std::stringstream ss;
		    ss << updated_sz;
			result=result+input[0]+ss.str();
			result=result+input[sz-1];
		}
		cout<<result<<"\n";
		result="";
	}
	return 0;
}
