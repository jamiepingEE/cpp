//1.2 Write a program to find the factorial of a number

#include <iostream>
using namespace std;

int main(){
        int N=0;
        cout<<"enter positive number: ";  
        cin>>N;
        int factorial=1;
        for(int i=1;i<=N;i++){
                factorial=factorial*i;//we can also use fac=*i
		//cout<<factorial<<endl;
	}
                cout<<"factorial is: "<<factorial<<endl;
        
}

