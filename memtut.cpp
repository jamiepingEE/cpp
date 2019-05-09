#include <iostream>
#include <string>

using namespace std;



int main()
{
	int b[5];
	int* bPtr;

	bPtr=b;//is the same as bPtr=&b[0];
	//proof
	for(int i=0;i<5;i++){
		b[i]=i+1;//what will be the next value when address, pointers, and array and all base cases are incremented
	cout<<"b["<<i+1<<"]"<<endl;
	cout<<"current value of i: "<<i<<endl;
	cout<<"b: "<<b<<endl;
	cout<<"*b: "<<*b<<endl;//what's contained in first element of array
	cout<<"&b: "<<&b<<endl;
	cout<<"&*b: "<<&*b<<endl;
	cout<<"*&b: "<<*&b<<endl;//everything from here and above refers to first element of array
	cout<<"&*(b+i): "<<&*(b+i)<<endl;
	//cout<<"*&(b+i): "<<*&(b+i)<<endl; //can't do this either
	cout<<"&b+i: "<<&b+i<<endl;//this is asking address of b plus 1x(whatever datatype b is declared to-so this is irrelevant (so, on this system, it adds 32)
	//cout<<"&(b+i): "<<&(b+i)<<endl; //can't do this because this is like asking address of next which isn't assigned yet
	cout<<"*(b+i): "<<*(b+i)<<endl;
	cout<<"*&b+i: "<<*&b+i<<endl;
	cout<<"*b+i: "<<*b+i<<endl;
	cout<<"b+i: "<<b+i<<endl;
	cout<<"b[i]: "<<b[i]<<endl; //content of array at b[i] or at index
	cout<<"&b[i]: "<<&b[i]<<endl;
	//cout<<"*b[i]: "<<*b[i]<<endl;//can't dereference array element use b[i] instead
	cout<<"bPtr: "<<bPtr<<endl;//just points to first element of array
	cout<<"bPtr+i: "<<(bPtr+i)<<endl;//address+i*data type since bPtr contains address
	cout<<"*(bPtr+i): "<<*(bPtr+i)<<endl;//dereferences/gets content of (address+i*data type)
	cout<<"*bPtr+i: "<<*bPtr+i<<endl<<endl;//
	}
	return 0;
}
