#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void printshoopinglist(vector<string> list){
	for(size_t i=0; i < list.size() ; i++)
	cout << list.at(i) << " , " ;}
	

int main () {
	
	vector<string> list;
	
	list.push_back("eggs");
	list.push_back("milk");
	list.push_back("sugar");
	list.push_back("chocolate");
	list.push_back("floor");
	cout<< "Intial Shooping list : ";
	printshoopinglist(list);
	
	list.pop_back();
	cout<< "\n Second  Shooping list : ";
	printshoopinglist(list);
	
	list.push_back("coffee");
	cout<< "\n Shooping list : ";
	printshoopinglist(list);
	
	replace (list.begin(), list.end(), string("chocolate"), string("strawberry"));
	
	cout<< "F\ninal list : ";
	printshoopinglist(list);
	cout<< "\nNumber of items on list:" << list.size()<<endl;
		
}
