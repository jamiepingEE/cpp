//2.2 write a program to calculate the binomial distribution of a side of a coin
#include <iostream>
using namespace std;

int main(){
	int N=0; //coin flips; test 2
	float p=0; //test 0.5
	cout<<"input number of coin flips: ";
	cin>>N;
	cout<<"input p: ";
	cin>>p;
	int numer=1;
	if(N==0){
		numer=1;
	}
	else{
		for(int i=N;i>0;i--){
			numer*=i;
		}
	}
	
	int denomfac=1;
	int denomfac2=1;
	float P=0;
	float pow1=1;
	float pow2=1;
	int exp=0;
	for(int k=0;k<=N;k++){
		exp=N-k;
		if(exp==0){
			pow2=1;
		}
		else{//also fix pow2
			pow2=1; //reset for independant loop
			for(int j=0;j<exp;j++){
				pow2*=(1-p);
			}
		}
		if(k==0){
			denomfac=1;
			pow1=1;
		}
		else{
			denomfac*=k;
			pow1*=p;
		}
		if(exp==0){
			denomfac2=1;
		}
		else{
			denomfac2=1; //independant loop counting up
			for(int l=1;l<=exp;l++){
			denomfac2*=l;
			}
		}
			
		
		
		P=numer*pow1*pow2/(denomfac*denomfac2);
	
	cout<<"values:"<<N<<" "<<p<<" "<<denomfac<<" "<<denomfac2<<" "<<pow1<<" "<<pow2<<" "<<numer<<endl;
	cout<<"P is: "<<P<<endl;
	}
}
