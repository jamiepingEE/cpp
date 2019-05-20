#include <iostream>
using namespace std;

int modulo(const int a,const int b){
	if(a<b){//base case
		return a;
	}
	else{
		return modulo(a-b,b);
	}
}

//int modulo(int&,int);

int main(){
	cout<<modulo(13,5);
}
