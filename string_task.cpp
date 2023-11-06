#include<bits/stdc++.h>
#include <cwctype>
using namespace std;
int main(){

	string a,b;
	int i;
	cin>>a;
	for(i=0;i<a.length();i++){
			if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y'){
				
				b+=towupper(a[i]) ;
			  }
		
			else{
				b+='#';
			}	
	}	
	
	cout<<b;

	return 0;
}