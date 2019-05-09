#include <iostream>
using namespace std;
int someVar=3;
int* somePointer=&someVar;
int** anotherPointer=&somePointer;

int main(){
	cout<<"someVar: "<<someVar<<endl;
	cout<<"&someVar: "<<&someVar<<endl;
	cout<<"somePointer: "<<somePointer<<endl;
	cout<<"&somePointer: "<<&somePointer<<endl;
	//the following will not work
	//cout<<"*someVar: "<<*someVar<<endl;
	cout<<"*somePointer: "<<*somePointer<<endl;
	cout<<"*anotherPointer: "<<*anotherPointer<<endl;
	cout<<"**anotherPointer: "<<**anotherPointer<<endl;

	*somePointer=4;

	cout<<"AFTER *somePointer=4\nsomeVar: "<<someVar<<endl;
	cout<<"&someVar: "<<&someVar<<endl;
	cout<<"somePointer: "<<somePointer<<endl;
	cout<<"&somePointer: "<<&somePointer<<endl;
	//the following will not work
	//cout<<"*someVar: "<<*someVar<<endl;
	cout<<"*somePointer: "<<*somePointer<<endl;
	cout<<"*anotherPointer: "<<*anotherPointer<<endl;
	cout<<"**anotherPointer: "<<**anotherPointer<<endl;

	**anotherPointer=5;
	cout<<"AFTER **anotherPointer=5\n someVar: "<<someVar<<endl;
	cout<<"&someVar: "<<&someVar<<endl;
	cout<<"somePointer: "<<somePointer<<endl;
	cout<<"&somePointer: "<<&somePointer<<endl;
	//the following will not work
	//cout<<"*someVar: "<<*someVar<<endl;
	cout<<"*somePointer: "<<*somePointer<<endl;
	cout<<"*anotherPointer: "<<*anotherPointer<<endl;
	cout<<"**anotherPointer: "<<**anotherPointer<<endl;


}
