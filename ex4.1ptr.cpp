#include <iostream>
using namespace std;

int main(){
	long int value1,value2;
	value1=200000;
	long int *longPtr;
	longPtr=&value1;
	cout<<"*longPtr: "<<*longPtr<<endl;
	value2=*longPtr;
	cout<<"value2: "<<value2<<endl;
	cout<<"&value1: "<<&value1<<endl;
	cout<<"longPtr: "<<longPtr<<endl;
	if(&value1==longPtr){
		cout<<"&value1 and longPtr are the same\n";
	}
	else{
		cout<<"&value1 is not the same as longPtr\n";
	}
}
