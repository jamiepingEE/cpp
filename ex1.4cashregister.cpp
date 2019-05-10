#include <iostream>
using namespace std;

int main(){
	int N=0;
	int M=0;
	int hun=0;
	int twen=0;
	int ten=0;
	int fiv=0;
	int loon=0;
	cout<<"input amount of bill: ";
	cin>>N;
	cout<<"input amount paid: ";
	cin>>M;
	N=M-N;
	cout<<N<<endl;
	//subtract paid by bill
	//place in N
	//
	//n1%n2 returns remainder
	//int rounds so this is good
	//check if >99
	//divide N by 100, take this integer quotient and store in hun
	//subtract 100*hun and place in N
	//check if >20
	//...:
	if(N>99){
		hun=N/100;
		N=N-hun*100;
	}
	if(N>19){
		twen=N/20;
		N=N-twen*20;
	}
	if(N>9){
		ten=N/10;
		N=N-ten*10;
	}
	if(N>4){
		fiv=N/5;
		N=N-fiv*5;
	}
	if(N>0){
		loon=N/1;
		N=N-loon;
	}
	cout<<"100$ bills: "<<hun<<endl;
	cout<<"20$ bills: "<<twen<<endl;
	cout<<"10$ bills: "<<ten<<endl;
	cout<<"5$ bills: "<<fiv<<endl;
	cout<<"1$ coins: "<<loon<<endl;
}


