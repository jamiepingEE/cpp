#include <iostream>

using namespace std;

int main(){//proper pointer initialization

int* myPointer=NULL;

//ask for memory to hold int then assign random value like 999999
myPointer=new int(9999999);

cout<<*myPointer<<endl;

*myPointer=0;//assign a different int

cout<<*myPointer<<endl;

delete myPointer;//give back 4bytes and destroy pointer

cout<<*myPointer<<endl;
}

