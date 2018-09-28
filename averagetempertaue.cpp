//Average temperature Exercise

#include <iostream>

using namespace std;

int main() {
	
	float sum =0;
	float Avg;
	int n=1;
	int T;
	
	cout <<"Enter Temperature Values";
	
	while (n<=7) {
		
		cin>>T;
		sum += T;
		n++;
	}
	Avg += sum/7;
	cout<< "Aveage Temperature of 7 days is: " << Avg << endl;
}
