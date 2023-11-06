#include <iostream>
using namespace std;
class student{
protected:
	int roll;
public: 
	int mark;
	void set(){
		cin>>roll>>mark;
	}
	void print(){
		cout<<roll<<" "<<mark;
	}
};
class result:protected student{
public:
	void all(){
		// cin>>roll>>mark;
		set();
		print();
	}
};
int main(){
	result ob;
	ob.all();
	return 0;
}