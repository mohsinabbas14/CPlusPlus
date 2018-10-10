#include <iostream>
#include <string>
#include "student.h"
#include "teacher.h"

using namespace std;

int main () {
	
	Student st(29, 5, "ma0381ab-s", "mohsin.abbas1472@yahoo.com");
	Teacher teach;
	teach.setAge(40);
	teach.setName("Florido");
	teach.setCourse("MNXB-01");
	teach.setEmail ("florido@hep.lu.se"	);
	st.ShowProfile();
	teach.ShowProfile();
	}
