/*A. Panoramix's Prediction
3 5		-	YES
7 11	-	YES
7 9		-	NO
*/
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n<=3){
		return true;
	}
	if(n%2==0 || n%3==0){
		return false;
	}
	for(int i=5;i*i<=n;i++){
		if(n%i==0 || n%(i+2)==0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	int m;
	cin>>n;
	cin>>m;
	bool found=false;
	int p=n;
	while(!found){
		p++;
		if(isPrime(p)){
			found=true;
		}
	}
	//cout<<p<<"\n";
	if(p==m){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
	}
	return 0;
}
