#include "Student.h"
#include <iostream>
#include<cstring>

// Assign studentId and name
void Student::assignDetails(int sId , char sName) 
{
  studentId = sId;
  strcpy(name , sName);
}

// Display StudentId and Name
void Student::display() 
{
  cout<<"Student ID : "<< studentId <<endl;
  cout<<"Student name : "<< name << endl;
}
