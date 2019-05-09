#include <iostream>
using namespace std;

int main(){
	int N=0;
	cout<<"enter a positive number: ";
	cin>>N;
	int sum=0;
	for(int i=0;i<=N;i++){
		sum=sum+i;
	}
	cout<<"sum of N is: "<<sum<<endl;
}
