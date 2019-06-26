//4.2b write a program to print words but omit text delimiters
#include <iostream>
#include <string>
using namespace std;

void tokenizer(const char* string){
	const char* strptr=string;

	while(*strptr!='\0'){
		if(*strptr==' '){//only skip space for now, can always && other text delimiters later
			++strptr;
			cout<<endl;
		}
		else{
			cout<<*strptr;
			++strptr;
		}
	}
}

int main(){
	char stringin[100];
	cin.getline(stringin,100,'\n');
	tokenizer(stringin);
	cout<<endl;
}
