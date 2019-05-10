//1.5 write a program to return the total tax depending on 1 of 3 income brackets
//personal challenge: without boolean operators

#include <iostream>
using namespace std;

int main(){
	int income=0;
	int tax=0;
	cout<<"enter income: ";
	cin>>income;
	if(income-40000<=0){
		tax=income*0.15;
		cout<<"scheme 1";
	}
	else if(income-40001<20000){
		tax=6000+(income-40000)*0.2;
		cout<<"scheme 2";
	}
	else if(income>60000){
		tax=10000+0.3*(income-60000);
		cout<<"scheme 3";
	}
	cout<<"total tax: "<<tax;
}
