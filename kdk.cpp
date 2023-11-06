#include<iostream>
using namespace std;

class student{
public:
	int roll;
	string name;

};
class teacher:student{
public:
	int money;
	void set(string name,int roll,int money){
		cout<<name<<endl;
		cout<<roll<<endl;
		cout<<money;
	}
};
teacher scan(){
	string name;
	int roll,money;
	cin>>name>>roll>>money;
	teacher ob;
	ob.set(name,roll,money);
	return ob;
}
int main()
{	teacher t;
	t=scan();
	
	return 0;
}