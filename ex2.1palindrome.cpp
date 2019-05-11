//2.1 Write a program to detect 5-digit integer palindromes

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int N=0;
	cout<<"enter 5 digit integer: ";
	cin>>N;
	//cout<<N<<" is input integer\n";

	//detect number of digits
	int k=N;
	int digits=0;
	int power=1;
	while(k>0){
		k=k/10;
		power=power*10;
		digits++;
	}
	power=power/10;
	//cout<<"digits detected: "<<digits<<endl;

	//check first and last a and b
	//divide N by 10, store remainder in a
	//divide N by 10 4x and store in b
	//if a=b then 
	//divide N by 10 4x and subtract N by remainder and store remainder*10 4x in N
	//else not a palindrome break loop
	int a=0;
	int b=N;

	for(int i=digits-1;i>=digits/2;i--){
		a=N%10;
		b=N/power;

		//cout<<"this is a: "<<a<<"this is b: "<<b<<"this is N: "<<N<<endl;
		if(a==b){
			N=((N-N%10)%power)/10;
			//cout<<"N is now: "<<N<<endl;
			power=power/100;
		}
		else{
			cout<<"is not a palindrome\n";
			break;
		}
	}
	if(N==0){
		cout<<"is a palindrome\n";
	}
	cout<<"end of program"<<endl;
}
	
