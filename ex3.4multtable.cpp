#include <iostream>
#include <iomanip>
using namespace std;

int multtable(int a){
	cout<<setw(4)<<" ";
	for(int i=1;i<=a;i++){
		cout<<setw(6)<<i;
	}
	cout<<"\n----";
	for(int i=0;i<a;i++){
		cout<<"------";
	}
	cout<<endl;
	for(int i=1;i<=a;i++){
		cout<<setw(3)<<i<<"|";
		for(int j=1;j<=a;j++){
			cout<<setw(3)<<" ";
			if(i==j){
				cout<<setw(3)<<"*";
			}
			else{
				cout<<setw(3)<<i*j;
			}
		}
		cout<<endl;
	}
}

int main(){
	int n=0;
	cout<<"enter value of n:";
	cin>>n;
	multtable(n);
}
