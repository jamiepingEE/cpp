#include <iostream>
#include <typeinfo>
#include <fstream>
#include <bitset>
using namespace std;

//directives: create an a function that takes in any type and spits out all data
template<class pseudo1> class tempclas{
bitset<pseudobittype> bunchabits;
}

public:
tempclas<pseudobittype>//takes in tempclass
};
template<class pseudotype> void myfunc

template<class type1> void myfunc(type1 arg[], int size){

	if(typeid(type1)==typeid(char)){

		for(int j=0;j<size;j++){
		cout<<arg[j];
		}

	}

	else{
		for(int i=0;i<size;i++){
		cout<<arg[i]<<endl;
		}
	}
	cout<<endl;
}

template<class type1> void printer(type1 arg[], ofstream& file, int size){

int length=size;

for(int i=0; i<length; i++){

file.put(arg[i]);
}
cout<<"(in printer func)size of length is "<<length<<endl;
}

template<int bittype> class bitclass{
bitset<bittype> bitcontainer;//container object in this class
public:
bitclass<bittype> matchbits(bitclass<bittype> arg);
void modify(int index);
void shownegver();
};

template<int bittype> bitclass<bittype>//this is like saying class bitclass::method() but class here is generic type template data bitclass<bittype>
bitclass<bittype>::matchbits(bitclass<bittype> arg){

	for(int i=0; i<bitcontainer.size(); i++){
		if(arg.bitcontainer.test(i)){
		bitcontainer.set(i);
		}
	}
cout<<"first object is now set to: "<<bitcontainer.to_string()<<endl;

}//takes in a bitclass<bittype> and matches bits with arg

template<int bittype> 
void bitclass<bittype>::modify(int index){
cout<<"before: "<<bitcontainer.to_string()<<endl;
bitcontainer.set(index);
cout<<"this set is now: "<<bitcontainer.to_string()<<endl;
}

template<int bittype> void bitclass<bittype>::shownegver(){
bitset<8> tempcontainer;
tempcontainer=~bitcontainer;
cout<<"all negged"<<tempcontainer.to_string()<<endl;
cout<<bitcontainer.to_string()<<endl;
}

class myclass{

public:
int a;

short b;
void f(unsigned int azz, short tiz);


};

void myclass::f(unsigned int azz, short tiz){
unsigned int kuk=azz;
short kk=tiz;
}

class base{
int* d;

public:
base();
~base();
void g();
};

base::base(){
d= new int;
*d=1;
cout<<"first1 ptr address "<<d<<endl;
}
base::~base(){
cout<<"del first1 ptr address "<<d<<endl;
delete d;
}
void base::g(){
cout<<*d<<endl;
}

class derived : public base{
int* d;
public:
derived();
~derived();
void g();

};

derived::derived(){
d= new int;
*d=2;
cout<<"first2 ptr address "<<d<<endl;
}

derived::~derived(){
cout<<"del first2 ptr address "<<d<<endl;
delete d;
}

void derived::g(){
cout<<*d<<endl;
base::g();
}


class A{
int avar;
public:
friend void p(A obj);
friend ostream& operator*(A& obj1, int u);
void k(int ar);

};

void p(A obj){
	cout<<"*touch*: "<<obj.avar<<endl;
}

void A::k(int ar){
avar=ar;
}

ostream& operator*(A& obj1, int u){
obj1.avar=obj1.avar*u;
}

int main(){

int bunch[3]={1,2,3};
char of[4]={'a','n','u','s'};
double shit[2]={12.4,124.422};

myfunc(bunch,3);
myfunc(of,4);
myfunc(shit,2);
cout<<"size of 'of' is "<<sizeof(of)<<endl;

//now put stuff into a file
ofstream outfile("outlern.txt");

printer(of, outfile, sizeof(of));//put contents of into outfile
outfile.close();

bitclass<8> bunchofbits1, bunchofbits2;
bunchofbits2.modify(4);
//function to add 2 bits
bunchofbits1.matchbits(bunchofbits2);//match with bunchofbits2

bunchofbits1.shownegver();
bunchofbits2.shownegver();





myclass ob1;
myclass ob2;

int myclass::*ptr;
ptr=&myclass::a;
ob1.*ptr=2;
ob2.*ptr=3;
short myclass::*ptr2;
ptr2=&myclass::b;
ob2.*ptr2=6;
ob1.*ptr2=5;
void (myclass::*funcptr) (unsigned int, short);
funcptr=&myclass::f;

base* ptrbase;
ptrbase=new derived;

ptrbase->g();
delete ptrbase;


cout<<endl;
A obj1;
obj1.k(5);
obj1*2;
p(obj1);

int ass;

try{
	cin>>ass;
	if(ass<0){
		throw ass;//this continue is ok as long as it's in try
		cout<<"jk program's fucked anyway"<<endl;
	}
}
//catch needs to be immediately after try
catch(int ass){
	cout<<"son what"<<endl;
}

return 0;
}//end main
