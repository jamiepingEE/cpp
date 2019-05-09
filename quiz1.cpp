//Jamie Ping 27563132 COEN244 quiz1.cpp
#include <iostream>
using namespace std;

class c_inside
{
int rad;
public:
c_inside();
c_inside(int arg);
void set_rad(int arg);
int get_rad();
};

class c_outside
{
int rad;
c_inside inner_circle;//variable circle in circle
public:
c_outside();
c_outside(int arg);
c_outside(int arg1, int arg2);
void set_rad(int arg1, int arg2);
int get_rad();
int get_inner_rad();
c_outside operator+(c_outside arg);
};


//functions (inside)

c_inside::c_inside(){//called at initialization
	cout<<"Inside circle default constructor"<<endl;
	rad=1;
}

c_inside::c_inside(int arg){//takes in int
	cout<<"Inside circle default construtor"<<endl;
	rad=arg;
}

void c_inside::set_rad(int arg){
	rad=arg;
}

int c_inside::get_rad(){
	return rad;
}

//additional functions (outside)

c_outside::c_outside(){
	cout<<"Outside circle default constructor"<<endl;
	rad=2;
}
c_outside::c_outside(int arg){
	cout<<"Outside circle overloaded constructor"<<endl;
	rad=arg;
}
c_outside::c_outside(int arg1, int arg2){
	cout<<"Outside circle overloaded constructor has set inner rad to: "<<arg1<<endl;
	inner_circle.set_rad(arg1);
	rad=arg2;
}

void c_outside::set_rad(int arg1, int arg2){
	inner_circle.set_rad(arg1);
	rad=arg2;
}

int c_outside::get_rad(){
	return rad;
}

int c_outside::get_inner_rad(){
	return inner_circle.get_rad();
}

ostream& operator<<(ostream& stream, c_outside arg){
	stream <<"Inner rad = "<<arg.get_inner_rad()<<" Outer rad = "<< arg.get_rad()<<endl;
	return stream;
}

c_outside c_outside::operator+(c_outside arg){
	c_outside output;
	int temp1;
	int temp2;
	temp1=get_inner_rad()+arg.get_inner_rad();
	temp2=rad+arg.rad;
	output.set_rad(temp1,temp2);
	return output;
}




//main program


int main()
{
c_outside mick, keith(4, 8);//mick is smaller r, keith is outer r
c_outside ron;//larger circle

cout<<mick.get_inner_rad()<< " " << mick.get_rad() <<endl;
cout<< keith.get_inner_rad() << " " << keith.get_rad()<<endl;
ron=mick+keith;
cout<<ron.get_inner_rad()<<" " <<ron.get_rad()<<endl;
cout<<mick<<keith<<ron<<endl; // should break lines each time

return 0;
}
