#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>// for setprecision
#include <vector>
#include <algorithm>
using namespace std;
//vector template for string data type of "stuff"

/*
int main()
{

ifstream infile("myinput.dat");//.don't use ios::in|ios::ate unless you're looking for filesize with infile.tellg(); otherwise the below algorithm will not work
string words;

char c;


while(infile.get(c)){
cout<<c;
words=words+c;//string is array element1+element2 without using vectors
}


reverse(words.begin(),words.end());//keep this

cout<<"reversed of above text is: "<<endl<<words;
}


*/

//another ver probably how it should be done:

int main () {
vector<char> words;
ifstream infile("myinput.dat");
//92 comes from infile.tellg();
//int size=infile.tellg();
//cout<<infile.tellg();
char c;
//this loop fills words up using c
while(infile.get(c)){
cout<<c;
words.push_back(c);//vector string is filling up end to beginning
}
//assign stuff inside just like how we read out infile
reverse(words.begin(),words.end());
for(int i=0; i<92;i++){
cout<<words[i];
}
}


















