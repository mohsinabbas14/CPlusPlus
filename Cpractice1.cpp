#include <iosteram>
using namespace std;

// declaring and defining sum function

int sum(int a, int b){
	
	return (a+b);}
	
// declaring and defining multiplication function

int multiplication(int a, int b) {
	
	return (a*b);
}

int main () {
	
	int a;
	int b;
	
	cout << "Enter first Varaible : " ;
	
	cin >> a;
	
	cout << "Enter Second Variable: ";
	
	cin >> b;
	
	// calling sum function and printing result
	
	
	cout << "sum of "<< a << " and " << b << " is: " <<  sum(a,b) << endl;
	
	//calling multiplication function and printing result
	
	cout << "product of "<< a << " and " << b << " is: " <<  multiplication(a,b) << endl;
}

