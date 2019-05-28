//3.3 write a recursive function, hailstone, based on Collatz conjecture
#include <iostream>
using namespace std;

int hailstone(int a){
	cout<<a<<endl;
	static int steps=1;
	if(a==1){
		cout<<"number of steps is: ";
		return steps;
	}
	else if(a%2==0){
		steps++;
		return hailstone(a/2);
	}
	else if(a%2!=0){
		steps++;
		return hailstone(a*3+1);
	}
}

int main(){
	cout<<hailstone(10);
}
