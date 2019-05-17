//2.3 write a guessing game that adds two randomly generated dice rolls from a user input seed. 
//First wrong odd guess gets a higher/lower than hint. odd gets 2 tries, even gets 3 tries.
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	int seed=0;
	int dice1=0,dice2=0;
	cout<<"enter seed: ";
	cin>>seed;
	srand(seed);
	dice1=1+(rand()%6);
	dice2=1+(rand()%6);
	int sum=dice1+dice2;
	int guess=0;
	int tries=-1;
	int set=0;
	if(sum%2==0){
		tries=3;
		set=tries;
		do{
			if(tries==set){
				cout<<"sum is even, now guess. Enter first guess: ";
				cin>>guess;
			}
			else{
				cout<<"try again. ";
				cin>>guess;
			}
			if(guess==sum){
				cout<<"Congratulations, ";
				break;
			}
			else{
				cout<<"Incorrect. ";
			}
			tries--;
		}while(tries!=0);
	}
	else{
		tries=2;
		set=tries;
		do{
			if(tries==set){
				cout<<"sum is odd, now guess. Enter first guess: ";
				cin>>guess;
				if(guess>sum&&tries){
					cout<<"Incorrect. Hint: Sum is less than "<<guess<<endl;
				}
				if(guess<sum&&tries){
					cout<<"Incorrect. Hint: Sum is greater than "<<guess<<endl;
				}
			}
			else{
				cout<<"Try again. ";
				cin>>guess;
			}
			if(guess==sum){
				cout<<"Congratulations, ";
				break;
			}
			else if(tries!=set){
				cout<<"Incorrect. ";
			}
			tries--;
		}while(tries!=0);
	}
	cout<<"sum is "<<dice1<<"+"<<dice2<<"="<<sum; //if program ends
}
