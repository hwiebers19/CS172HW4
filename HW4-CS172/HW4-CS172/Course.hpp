//
//  Course.hpp
//  HW4-CS172
//
//  Created by Heidi Wiebers on 10/19/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef Course_hpp
#define Course_hpp

#include <stdio.h>
using namespace std;

//course class with the private and public constructors promised
class Course
{
private:
    int capacity;
    string courseName;
    string* students;
    int numberOfStudents;
    
public:
    Course (const string& courseName, int capacity);
    ~Course();
    string getCourseName()const;
    void addStudent(const string& name);
    void dropStudent(const string& name);
    string* getStudents()const;
    int getNumberOfStudents()const;
    int Clear();
    
    

    
};

#endif /* Course_hpp */
