#include "student.h"// header file to access student.h
#include <iomanip>//Standard Input/output streams libary
#include <string>// string type header
//setdata() Function Defination
//This function is used to get input from the user.
//The input consist of Name, id number and test scores.
//It's return type is null, all the input from this function is stored in data member of class Student.
void Student :: setdata ()
{
	//Local Definations/ Declarlations
	Student S;
	//Input Section to get name, id number and test scores.
	//Get's the student name
	cout<<"Enter the Student name: ";
	getline(cin,name);
	//Get's the id number of student
	cout<<"Enter the ID number: ";
	cin>> id;
	//Get test score 1
	cout<<"Enter test score 1: ";
	cin>> t1;
	//Get test score 2
	cout<<"Enter test score 2: ";
	cin>> t2;
	//Get test score 3
	cout<<"Enter test score 3: ";
	cin>> t3;
	
}
//calcaverage() Function Defination
//This function is used to calculate average from three test scores.
//The input consist value passed from setdata() of test scores.
//It's return type is null.
void Student :: calcaverage()
{
	//Calculate the average from three test score
	average = (float(t1+t2+t3))/3;
}
//calcgrade() Function Defination
//This function is used to give you final grade based on the average.
//The input consist value passed from calcaverage() of average.
//It's return type is char.
char Student :: calcgrade()
{
	//if condition to find out grade based on the average
	if (average >= 90)
		grade = 'A';
		else if ((average >=80)&&(average <90))
			grade = 'B';
			else if ((average >=70)&&(average <80))
				grade = 'C';
				else if ((average >=60)&&(average <70))
					grade = 'D';
					else if (average < 60)
						grade = 'F';
						
	return grade;			
}
//message() Function Defination
//This function is used to give you message based on your grade.
//The input consist value passed from calcgrade() of grade.
//It's return type is void.
void Student :: message()
{
	//if condition for message based on grade.
	//if grade = A,B,C message should be passed
	if ((grade == 'A')||(grade == 'B')||(grade == 'C'))
		result = "You passed";
		// if grade = D,F message should be failed
		else if ((grade == 'D')||(grade == 'F'))
			result = "You Failed";		
}
//Print() function Defination
//This function is the output section of the program
//It output's the Name, Id, Test scores, average, grade and result.                .
//Name, ID, test scores, average, grade and result are passed value from Class Student.
//it's return type is null.
void Student :: print() 
{
	//function calls within print()
	calcaverage ();
	calcgrade ();
	message();	
	//output heading for the program
	//setprecision(2) prints answers in 2 decimal spaces.
	cout << fixed << showpoint << setprecision(2);
	cout<<endl<<endl;
	cout<<"****************************************"<<endl;
	cout<<"Student Name: "<<setw(26)<<name<<endl;
	cout<<"ID number: "<<setw(29)<<id<<endl;
	cout<<"Test: \n";
	cout<<setw(10)<<"1- "<<t1<<endl;
	cout<<setw(10)<<"2- "<<t2<<endl;
	cout<<setw(10)<<"3- "<<t3<<endl;
	cout<<"Average: "<<setw(31)<<average<<endl;
	cout<<"Grade: "<< setw(20)<< grade<<" "<<setw(12) <<result<< endl;
	cout<<"****************************************"<<endl;
	
	
}




