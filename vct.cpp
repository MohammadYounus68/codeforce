#include<bits/stdc++.h>
using namespace std;
class rectangle{
	int hight;
	int width;
public:
	void set(int hight,int width){
		this-> hight=hight;
		this->width=width;
	}
	int area(){
		return hight*width;
	}
	rectangle(){
		cin>>hight;
		cin>>width;
	}
};
void print(rectangle a){
	cout<<a.area();
}
int main()
{
	rectangle r;
	// r[0].set(3,4);
	//cout<<r.area();
	print(r);
    
    return 0;
}