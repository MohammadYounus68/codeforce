#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class students{
public:
	string name;
	int roll_no;
	int phone_number;
	void print(string s,int n,int x){
		cout<<s;
		cout<<endl;
		cout<<n<<endl;
		cout<<x;
		cout<<endl;
	}

};

int main(){
	students s1,s2;
	s1.name="john";
	s1.roll_no=2;
	s1.phone_number=1234;
	s1.print(s1.name,s1.roll_no,s1.phone_number);
	s2.name="sam";
	s2.roll_no=3;
	s2.phone_number=345;
	s2.print(s2.name,s2.roll_no,s2.phone_number);
	return 0;	
}