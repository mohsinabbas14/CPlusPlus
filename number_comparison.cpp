//  Program for comparing the numbers which are bigger

#include <iostream>

using namespace std;

int main() {
	
	//Asking for the input to first variable
	int X, Y,Larger;
	cout <<"Enter Value of First Variable X:"<<endl;
	cin>>X;
	cout<<"Enter the value for Second Variable Y:"<< endl;
	cin>>Y;
	
	Larger = X;
	if (Y > X){
		Larger = Y;}
	cout<< "The large number is:" << Larger<< endl;
	
}
	
	
