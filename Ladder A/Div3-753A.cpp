/*A. Linear Keyboard
5
abcdefghijklmnopqrstuvwxyz
hello
abcdefghijklmnopqrstuvwxyz
i
abcdefghijklmnopqrstuvwxyz
codeforces
qwertyuiopasdfghjklzxcvbnm
qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq
qwertyuiopasdfghjklzxcvbnm
abacaba

13
0
68
0
74
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string input;
		string dict;
		cin>>dict;
		cin>>input;
		int ans=0;
		int prev=0;
		int curr=0;
		for(int i=1;i<input.size();i++){
			prev=dict.find(input[i-1]);
			curr=dict.find(input[i]);
//			cout<<"prev: "<<prev<<"\n";
//			cout<<"curr: "<<curr<<"\n";
			ans+=abs(prev-curr);
		}
		cout<<ans<<"\n";
	}
	return 0;
}
