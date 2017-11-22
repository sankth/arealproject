#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
//fstream file("../data/myfile.txt", ios::in | ios::out);// | ios::app);
//fstream file("../data/myfile.txt", ios::in | ios::app);
fstream file("../data/myfile.txt", ios::in | ios::out | ios::app);
	int data;
        
	file >> data;
	cout<<data<<endl;
        //file.clear() ;
        //long pos = file.tellp();
	//cout<<pos;
	//file.seekp (pos+3);
	file << data +2<<endl;  // for this to work it needs ios::out in the fsrtream
        
	file.write ("This is an apple",16);
	long pos = file.tellp();
	
	file.seekp (pos-7);
	file.write (" sam",4);

	file.close();

return 0;
}  //end of Main function


