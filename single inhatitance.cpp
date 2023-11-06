#include<iostream>
using namespace std;
class info{
	int id;
public:
	void setid();
	int getid();
};
class student:public info{
public:
	void print();
};
void info::setid(){
	cin>>id;
}
int info::getid(){
	return id;
}
void student::print(){
	cout<<getid();
}
int main(){
	student s;
	s.setid();
	s.print();
}