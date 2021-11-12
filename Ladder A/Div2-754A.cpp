/*A. A.M. Deviation
3
3 4 5
2 2 6
1 6 5
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int a,b,c;
	while(t--){
		cin>>a;
		cin>>b;
		cin>>c;
		//int mean=0;
		int m=a+c-2*b;
		int n=b+c-2*a;
		int p=a+b-2*c;
		if(m%3==0 || n%3==0 || p%3==0){
			//b should be decreased
			cout<<0<<"\n";
		}
		else{
			cout<<1<<"\n";	
		}
	}
	return 0;
}
