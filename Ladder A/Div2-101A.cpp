/*A. Amusing Joke

SANTACLAUS
DEDMOROZ
SANTAMOROZDEDCLAUS

PAPAINOEL
JOULUPUKKI
JOULNAPAOILELUPUKKI

BABBONATALE
FATHERCHRISTMAS
BABCHRISTMASBONATALLEFATHER

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	string guest_name;
	string residence_host;
	string door_found;
	
	cin>>guest_name;
	cin>>residence_host;
	cin>>door_found;
	
	string n="";
	n=residence_host+guest_name;
	
	sort(n.begin(),n.end());
	//sort(residence_host.begin(),residence_host.end());
	sort(door_found.begin(),door_found.end());
	
	if(n==door_found){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
	}
	return 0;
}
