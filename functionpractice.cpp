#include <iostream>

using namespace std;

int num_comparison (int, int);

 int main() {
	int first,second;
	
	cout<<"Enter first number and second number:";
	cin >> first >> second ;
	
	int larger = num_comparison(first,second);
	
	cout<< larger<< endl;
	
}


	int num_comparison (int l_first, int l_second){
		
		int larger = l_second;
		
		if (l_first > l_second){
			larger = l_first;
		}
	
		return larger;
	
	}
	
		
		

