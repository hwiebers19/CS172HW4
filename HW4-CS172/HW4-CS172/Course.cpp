//
//  Course.cpp
//  HW4-CS172
//
//  Created by Heidi Wiebers on 10/19/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
#include "Course.hpp"

//argument constructor which initalizes number of students and uses pointers
Course:: Course (const string& courseName, int capacity)
{
    numberOfStudents = 0;
    this-> courseName = courseName;
    this-> capacity = capacity;
    students = new string[capacity];
}
// deletes the students array
Course::~Course()
{
     delete [] students;
}
//returns the course name
string Course::getCourseName() const
{
    return courseName;
}
// adds a student to the course and checks if the array(course) is set to capacity
void Course:: addStudent(const string& name)
{
    if(numberOfStudents != capacity)
    {
        students[numberOfStudents] = name;
        numberOfStudents++;
    }
    if(numberOfStudents == capacity)
    {
        string *newList = new string[2*capacity];
        for(int i=0; i < 2*capacity; i++)
        {
            newList[i] = students[i];
        }
        capacity = 2*capacity;
        delete [] students;
        students=newList;
        
    }
}

//checks if a students in the course and then drops the student from the course
void Course:: dropStudent(const string& name)
{
    for(int i=0; i < numberOfStudents; i++)
    {
        if(students[i]==name)
        {
            for(int j=i+1; j<numberOfStudents; j++)
            {
                students[j-1]=students[j];
            }
            students[numberOfStudents-1]= "";
            numberOfStudents--;
        }
    }
    
}
//gets the students
string* Course::getStudents() const
{
    return students;
}
//gets the number if students
int Course::getNumberOfStudents() const
{
    return numberOfStudents;
}
//initalizes number of students
int Course:: Clear()
{
    numberOfStudents=0;
    return 0;
}



