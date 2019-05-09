#include <iostream>
using namespace std;

int main()
{
        int N=0;
	int sum=0;
        cout<<"input an integer N: ";
        cin>>N;
	cout<<N/10;

//say N=524
//check if N>0
//divide by 10
//store remainder in sum
//subtract remainder from N (N is now 52.0 and sum is now 4)

        while(N>0){
                sum=sum+(N%10);
                N=(N-(N%10))/10;
                cout<<"sum is "<<sum<<endl;
                cout<<"N is "<<N<<endl;
        }
}
