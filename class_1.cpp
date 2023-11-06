#include<iostream>
using namespace std;
class rectangle{
public:
	int hight;
	int width;

};
int main(){
	rectangle r;
	r.hight=5;
	r.width=4;
	cout<<"Area:"<<endl<<r.hight*r.width;
	return 0;
}