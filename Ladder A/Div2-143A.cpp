/*A. Team
3
1 1 0
1 1 1
1 0 0

2
1 0 0
0 1 1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a,b,c;
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>a;
		cin>>b;
		cin>>c;
		if(a+b+c>1){
			ans++;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
