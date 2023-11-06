#include<bits/stdc++.h>
#include <stdlib.h>
#include <utility>
using namespace std;
class rectangle{
	int hight;
	int width;
public:
	void set(int x,int y);
	int print();
	friend class cost;
};
void rectangle::set(int x,int y){
	hight=x;
	width=y;
}
int rectangle::print(){
	return hight*width;
}
rectangle scan(){
	int x,y;
	cin>>x>>y;
	rectangle ob;
	ob.set(x,y);
	return ob;
}
void getprint(rectangle obj){
	obj.print();
	cout<<obj.print();
}

class cost{
	int costrate;
public:
	void setcost(int x){
		costrate=x;
	}
	void costprint(rectangle x);
};
cost scan2(){
	int n;
	cin>>n;
	cost t;
	t.setcost(n);
	return t;
}
void cost::costprint(rectangle x){
	cout<<costrate*x.print();
}

int main(){
	rectangle r;
	r=scan();
	getprint(r);

	cost c;
	c=scan2();
	c.costprint(r);


	return 0;
}