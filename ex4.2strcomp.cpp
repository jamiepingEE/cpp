//4.2 write a program to compare the length of 2 user input strings
#include <iostream>
#include <string> //want to use cin.getline(var2ptr,len,delimit)
using namespace std;

int strcomp(const char* s1, const char* s2){
	int flag=0;
	while(flag!=2){
		s1++;
		s2++;//until one of the EOS conditions reached
		if(*s1=='\0' && *s2=='\0'){
			flag=0;
			break;
		}
		else if(*s1=='\0'){
			flag=1;
			break;
		}
		else if(*s2=='\0'){
			flag=-1;
			break;
		}
	}
	return flag;
}

int main(){
	char string1[10], string2[10];
	cin.getline(string1,10,'\n');
	cin.getline(string2,10,'\n');
	int test=strcomp(string1,string2);
	if(test==0){
		cout<<"equal\n";
	}
	else if(test==1){
		cout<<"s1<s2";
	}
	else if(test==-1){
		cout<<"s1>s2";
	}
}
