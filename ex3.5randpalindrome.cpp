//3.5 Write a function that takes in integer N and generates N random digits(between 0 and 9, endpoints not inclusive) using computer time as seed. Function concatenates N random numbers and checks if it's a palindrome with the reverse number.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath> //need pow
using namespace std;

int reverse(int a){
	static int temp=0;
	if(a<10){
		return temp*10+a;
	}
	else{
		temp=temp*10+a%10;
		return reverse(a/10);
	}
}

int seedn(int b){
	int num=0;
	int d=0;
	srand(time(NULL));
	for(int i=0;i<b;i++){
		d=(rand()%8)+1;
		num=num+d*pow(10,i);
		}
	if(num==reverse(num)){
		cout<<num<<" is a palindrome\n";
	}
	else{
		cout<<num<<" is not a palindrome\n";
	}
}


int main(){
	int length=0;
	cout<<"enter length of number: ";
	cin>>length;
	seedn(length);
}
