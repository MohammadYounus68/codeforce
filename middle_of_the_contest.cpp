#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class triangle{
public:
	int area;
	int hight;
	int width;
	void scan(int area,int hight,int width){
		cin>>area;
		cin>>hight;
		cin>>width;
	}
	void print(int area,int hight,int width){
		cout<<"area:"<<area<<endl;
		cout<<"hight:"<<hight<<endl;
		cout<<"width"<<width<<endl;
		cout<<"Total area:"<<area*hight*width;

	}
	

};
int main(){
	triangle t;
	t.scan(t.area,t.hight,t.width);
	t.print(t.area,t.hight,t.width);
	


	return 0;
}