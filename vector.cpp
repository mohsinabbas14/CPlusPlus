# include <iostream>

#include <vector>

#include <string>

using namespace std;



int main() {
	

	
	vector<string> shoppingList;
	
	shoppingList.push_back("eggs") ;
	shoppingList.push_back("milk");
	shoppingList.push_back("sugar");
	shoppingList.push_back("choclate");
	shoppingList.push_back("flour");
	shoppingList.pop_back();
	shoppingList.push_back("coffee");
  cout<<shoppingList.at(4)<<endl;

for (int i=0; i< shoppingList.size();i++) 
	cout <<shoppingList.at(i)<< endl;
}
