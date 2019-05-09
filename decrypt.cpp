#include <iostream>
#include <fstream> // fstream library defines stream classes ifstream
                   // ofstream and fstream

#include <iomanip>  // needed for the setprecision manipulator
#include <cstdlib>
using namespace std;

//this code has io::binary | ios::out
/*
int main()
{

ifstream infile("input.txt"); 

ofstream outfile("output.txt",  ios::binary | ios::out);

double  number;

outfile << setprecision(16);

while ( infile >> number )
  outfile.write((char *) &number, sizeof(double)); 

return 0;
}
*/

#include <iostream>
#include <fstream> // fstream library defines stream classes ifstream
                   // ofstream and fstream

#include <iomanip>  // needed for the setprecision manipulator

using namespace std;



int main()
{

ifstream infile("output.txt"); // associate the file myinput.dat with infile
                                     // object of class ifstream



double  number;



cout  << setprecision(16);

// read in a double from the input file into variable number

infile.read((char *) &number, sizeof(double));

// infile.eof() will return true if reached the end of the file
// otherwise it will return false
// so check it at end of file, and if not , then output the number
// and read the next number and check again if at end of file

while ( !infile.eof() ) // check to see that not end of file of infile
 {
  cout << number << endl;   // print out the number to the monitor
  infile.read((char *) &number, sizeof(double)); // read in number from file
 }


return 0;
}
