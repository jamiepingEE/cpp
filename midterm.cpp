#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

// figure out which library must be
// #included for file i/o


using namespace std;

// STUDENT NAME: Jamie Ping
// STUDENT ID: 27563132



unsigned int file_size(ifstream& arg)
{


arg.seekg(0,ios::end);
unsigned int length=arg.tellg();
arg.seekg(0,ios::beg);
return length;
// this function determines the size (in bytes)
// of the file which is passed by reference as
// an argument to the function.

// you write the complete code for the function.


}


void compare(ifstream& arg1 , ifstream& arg2, ofstream& arg3, unsigned int size)
{

// this function receives three arguments by reference which refer
// to the two input files and the one output file. The function is
// to compare the  two input files on a byte-by-byte basis and for any
// characters in the second file (arg2) which are different from the
// characters in the first file (arg1), the function is to write the
// character in the second file (arg2) into the third file (arg3).
// The last argument specifies the size of the two input files 
// which are assumed to be the same.

 char arg1_byte; // used to hold a byte from the first input file
 char arg2_byte; // used to hold a byte from the second input file
arg1.clear();
arg2.clear();
arg3.clear();
int length=arg1.tellg();
for (unsigned int i=0; i<size; i++){
		arg1.seekg(i);

arg1.get(arg1_byte);
		arg2.seekg(i);

arg2.get(arg2_byte);

	if( !( arg1_byte==arg2_byte ) ){
arg2.seekg(i);
			arg2.get(arg2_byte);

			arg3.put(arg2_byte);



//move put to next in file 3

		
	}

// you write the rest of the code for this function.
}

} // function


void show_message(ifstream& arg)
{
// this function simply displays all of the bytes
// in the passed argument to the screen with no
// spaces in between followed by a endl.

 char byte;
while(arg.get(byte) ){//if not then try arg.get(byte)
cout<<byte;

}
// you write the rest of the code for this function

cout<<endl;
}

  
// edit the following main() function by
// filling in the blanks as appropriate
// you are free to make any changes you wish
// to function main().
// but other than filling in the blanks, no
// major changes are required. 

int main()
{

// open the file "mick.txt" as a binary file for input
// and associate it with the object mickfile of class ifstream

ifstream mickfile("mick.txt",ios::binary|ios::in) ;

// open the file "keith.txt" as a binary file for input
// and associate it with the object keithfile of class ifstream

ifstream keithfile("keith.txt",ios::binary|ios::in) ;  ;

// open the file  "message.txt" as a binary file for output
// and associate it with the object secretfile of class ofstream

ofstream secretfile("message.txt",ios::binary|ios::out) ;


unsigned int mick_size ;
unsigned int keith_size;

// determine the size in bytes of both files  
// by calling function file_size()

mick_size =  file_size(mickfile);

keith_size = file_size(keithfile);

// print out the size in bytes of each file

cout << "mick.txt is " << mick_size << " bytes"  << endl;
cout << "keith.txt is " << keith_size << " bytes " << endl;

//if out of time get rid of this too
if ( mick_size == keith_size)
{
 compare(mickfile, keithfile, secretfile, mick_size);

}
else
{
 cout << "The files are not the same size." << endl;
}


// close all three files

mickfile.close();

keithfile.close();;

secretfile.close();;



// open the binary  file "message.txt" for input
// and associate it with the object
// messagefile of class ifstream

ifstream messagefile("message.txt", ios::binary | ios::in) ;


// display the contents of messagefile on the screen
// by passing it to function show_message()

show_message(messagefile)  ;



// close messagefile

messagefile.close();




return 0;
}



