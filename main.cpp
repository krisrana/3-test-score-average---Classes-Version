/*
     Name:      Krishna rana
     Course:    CIS 160 ME1
     Date:      10/10/2016
     Program:   Average of three scores
     Description:  This program calculates the total average of three test score.
	 			Getting parameters from class. whose parameters are located in different files and are linked
	 			to give an output reading data and storing data from different function.
*/
#include <iostream>//Standard Input/output streams libary
#include "student.h"// header file to access student.h
#include <string> // string type header
using namespace std;
//Main() Function Defination
//This function runs the whole program with step by step intruction written below.
//main() has calls and parameters of other function in the program.
int main()
{	
	//Local Definations/ Declarlations
	//Initialization of class Student.
	//creating object for class Student.
	Student s;
	//Function Calls
	s.setdata();
	s.print();
	return 0;
}
