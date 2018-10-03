// Creating vector

#include <iostream>

#include <vector>
#include <string>
using namespace std;

void printshoppinglist(vector<string>);

int  main () {
	
	vector<string> vec;
	
	vec.push_back("eggs");
	vec.push_back("milk");
	vec.push_back("sugar");
	vec.push_back("chocolate");
	vec.push_back("floor");
	cout  <<"Inital shopping List: ";
printshoppinglist(vec);
vec.pop_back();
   cout << endl<<"updated shopping ist: ";
printshoppinglist(vec);
vec.push_back("coffee");
cout << endl<<"Fianl shopping list";
printshoppinglist(vec);

cout<< endl<<"Total items in shopping list: ";
cout<<vec.size()<<endl;

}

void printshoppinglist(vector<string>L_vec){
	
	for (int i=0; i<L_vec.size();i++)
	cout<<L_vec.at(i) << ",";}
	
