#include<iostream>
using namespace std;
int main(){
	const float pi=3.14159;
	int r,dia,cir,area;
	cout<<"enter the radius of the circle";
	cin>>r;
	dia=r*2;
	cir=2*pi*r;
	area=4*pi*r*r;
	cout<<"radius "<<r<<"\nDiameter "<<dia<<"\nCircumference "<<cir<<"\nArea "<<area;
}
