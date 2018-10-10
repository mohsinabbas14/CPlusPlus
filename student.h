#include <iostream>
#include <string>
#include <iostream>

using namespace std;

class Student{
	
	private:
		int age;
		double gpa;
		string studentID;
		string email;
	
	public: 
	
		Student (int a, double b, string c, string d){
			
			age= a ;
			gpa=b;
			studentID = c;
			email=d;}
			
		Student (int a){
			age=a;}
				
		Student (int a, string c){
					
			age =a;
			studentID =c;}
				
			
		void setAge(int x){
				
			age = x;}
				
		void setGPA (double y){
				
			gpa = y;}
				
		void setstudentid (string z){
				
			studentID=z;}
			
		void setEmail(string em){
			email =em;}
				
		int getAge(){
			return age;}
				
		double getGPA (){
				
			return gpa;}
				
		string getstudentid(){
				
			return studentID;}
		
		string getEmail(){
			return email;
			
		}
				
		void ShowProfile(){
		  cout << age << " " << gpa << " " << studentID << " "  << email << endl;}
			};
				
			
					
				
		
			
			
			
			
