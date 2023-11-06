#include<iostream>
using namespace std;
/*
public private protected;
private member access to object;
private member sob function e defult vabe access korta pare
*/
class rectangle{
private:
	int hight;
	int width;
public:
	
	void scan(){
		cin>>hight>>width; 
	}
	int area();
	
};
	/*void rectangle::set(int x,int y){
	hight=x;
	width=y;
}*/
int rectangle::area(){
	return hight*width;
}
int main(){
	rectangle r;
	r.scan();         
	cout<<"Area is:";
	cout<<r.area();
	return 0;
}