/* this code is checking datatypes using getline in a mentioned .txt file. It will check correct or incorrect 
datatypes user will enter
integer
boolean
string
float
double
first create the file then run this code*/


#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string dtp, mytext;
	bool correct = false;
	ifstream MyReadFile("datatype.txt");
	cout<<" entre datatype:  ";
	cin>>dtp;
  while (getline (MyReadFile, mytext))
    {
        if(mytext == dtp){
            correct=true;
            break;
        }
    }
    if(correct == true){
        cout<<"Correct dataType"<<endl;
    }
    else{
        cout<<"Incorrect dataType"<<endl;
    }
    
    return 0;
    
}
