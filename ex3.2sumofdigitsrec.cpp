//3.2 rewrite sumofdigits and call modulo from 3.1
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
int sumofdigits(int c){
	static int sum=0; //kinda need static to keep sums within this function's scope
	if(c<10){//base case
		return c+sum;
	}
	else{
		sum=sum+modulo(c,10);
		return sumofdigits((c-modulo(c,10))/10);
	}
}
//recall sum of digits is:
//input
//if smaller than 10, this is the sum
//else:
//store remainder in sum
//subtract remainder from input
//divide input by 10

int main(){
	//cout<<modulo(13,5); //modulo works
	cout<<"sum of digits of 524 is: "<<sumofdigits(524);
}
