#include<bits/stdc++.h>
#include <string>
using namespace std;
class rectangle{
	int hight;
	int width;
public:
	void set(int x,int y){
		hight=x;
		width=y;
	}
	int area(){
		return hight*width;
	}
	friend class cost;
};
class cost{
	int costreat;
public:
	void setvalue(int x){
		costreat=x;
	}
	int totalcost(rectangle x){
		return costreat*x.area();
	}
};
int main(){
	rectangle r;
	r.set(3,4);
	cout<<r.area()<<endl;
	cost c;
	c.setvalue(10);
	cout<<c.totalcost(r);
}