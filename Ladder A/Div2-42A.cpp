/*A. Football*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	map<string, int> mp;
	map<string, int>:: iterator itr;
	//pair<string,int> freq;
	vector<string> vec;
	string s;
	string res="";
	
	int j=0;
	
	while(n--){
		cin>>s;
		vec.push_back(s);	
	}
	for(int i=0;i<vec.size();i++){
		mp[vec[i]]++;
	}
	for(itr=mp.begin();itr!=mp.end();itr++){
		int mx=itr->second;
		if(mx>j){
			j=mx;
			res=itr->first;
		}
	}
	cout<<res<<"\n";
	return 0;
}
