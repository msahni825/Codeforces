/*A. AB Balance
4
b
aabbbabaa
abbb
abbaab
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	string result="";
	while(t--){
		string s;
		cin>>s;
		if(s[0]!=s[s.size()-1]){
			s[0]=s[s.size()-1];
		}
//		int i=0;
//		int ab_count=0;
//		int ba_count=0;
//		int aa_count=0;
//		int bb_count=0;
//		int n=input.size();
//		for(int i=1;i<n;i++){
//			if(input[i-1]=='a' && input[i]=='b'){
//				ab_count++;
//			}
//			else if(input[i-1]=='b' && input[i]=='a'){
//				ba_count++;
//			}
//			else if(input[i]=='b' && input[i-1]=='b'){
//				bb_count++;
//			}
//			else if(input[i-1]=='a' && input[i]=='a'){
//				aa_count++;
//			}
//		}		
//		if(ab_count==ba_count){
//			result=input;
//		}
//		else{
//			if(ab_count>ba_count){
//				for(int i=0;i<n;i++){
//					if(input[i]=='a'){
//						input[i]='b';
//					}
//				}				
//			}
//			else if(ba_count>ab_count){
//				for(int i=0;i<n;i++){
//					if(input[i]=='b'){
//						input[i]='a';
//					}
//				}
//			}
//		} 
//		result=input;
		cout<<s<<"\n";
	}
	return 0;
}
