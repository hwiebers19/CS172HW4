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


Course:: Course (const string& courseName, int capacity)
{
    numberOfStudents = 0;
    this-> courseName = courseName;
    this-> capacity = capacity;
    students = new string[capacity];
}
 
Course::~Course()
{
     delete [] students;
}
 
string Course::getCourseName() const
{
    return courseName;
}
 
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
    }
}

void Course:: dropStudent(const string& name)
{
    string *ptr = students;
    for(ptr =students; ptr < students+capacity; ptr++)
    {
        if(*ptr == name)
        {
            *ptr = "";
        }
    }
    numberOfStudents--;
}

string* Course::getStudents() const
{
    return students;
}
 
int Course::getNumberOfStudents() const
{
    return numberOfStudents;
}

int Course:: Clear()
{
    numberOfStudents=0;
    return 0;
}



