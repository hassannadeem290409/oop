#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum,avg,mul,smallest,largest;
	cout<<"enter a numbers";
	cin>>a;
	cout<<"enter a numbers";
	cin>>b;
	cout<<"enter a numbers";
	cin>>c;
	sum=a+b+c;
	avg=sum/3;
	mul=a*b*c;
	cout<<"Input three different integers :"<<a<<","<<b<<","<<c<<endl;
	cout<<"Sum is "<<sum<<endl;
	cout<<"Average is "<<avg<<endl;
	cout<<"Product is "<<mul<<endl;
	//Largerst
	if(a>b){
		if(a>c){
			cout<<a<<" is larger"<<endl;
		}
		else{
			cout<<c<<" is larger"<<endl;
		}
	}
	else if(b>a){
		if(b>c){
		cout<<b<<" is larger"<<endl;
		}
		else{
			cout<<c<<" is larger"<<endl;
		}
	}
	
	//Smallest
	if(a<b){
		if(a<c){
			cout<<a<<" is smallest";
		}
		else{
			cout<<c<<" is smallest";
		}
	}
	else if(b<a){
		if(b<c){
		cout<<b<<" is smallest";
		}
		else{
			cout<<c<<" is smallest";
		}
	}
}
