#include <iostream>
#include <string>

using namespace std;

class Teacher {
	
	private:
	
	string name;
	int age;
	string course;
	string email;
	
	public:
	
	Teacher (){
		
	age;
	name;
	course;
	email;
}

	void setAge(int x) {
		
		age=x;}
		
	void setName(string y) {
		
		name =y;}
		
	void setCourse(string z){
		
		course=z;}
	
	void setEmail (string c){
		
		email =c;}
		
	int getAge(){
		return age;}
		
	string setName() {
		
		return name;}
		
	string setEmail() {
		
		return email;}
		
	string setCourse(){
		
		return course;}
		
	void ShowProfile(){
		
		cout << " Teacher Name: " << name << " Age: " << age<< " Email: " << email << " Course: "  << course<< endl;
	}
};
		
	
