//placing gaurds
#ifndef STUDNET_H
#define STUDENT_H
#include <iostream>//Standard Input/output streams libary
#include <string> // string type header
	using namespace std;
//class Defination
class Student
{
	//Access specifiers
	private:
		//Data members
		float average;
  		char grade;
  		//member function prototype
  		void calcaverage();
  		char calcgrade();
  		void message();
  	//Access Specifiers	
  	public:
  		//Constrctor
  		Student(){  }
  		//Data Member
  		string name, result;
  		int id;
  		short int t1, t2, t3;
  		//Member function prototype
  		void setdata();
  		void print() ;
  		//Destructors
  		~Student(){  }
};
// Gaurds
#endif
