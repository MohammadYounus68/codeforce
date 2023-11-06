#include<iostream>
using namespace std;
class info{
	int roll;
	int mark;
public:
	void setroll(){
		cin>>roll;
		cout<<roll<<endl;
	}
	void setmark(){
		cin>>mark;
		cout<<mark<<endl;
	}
};

class result:public info{
public:
	void print(){
		setmark();
	}
};
class student:public info{
public:
	void print(){
		setroll();
	}
};
int main(){
	student s;
	s.print();

	result r;
	r.print();

}