//
//  main.cpp
//  HW4-CS172
//
//  Created by Heidi Wiebers on 10/19/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include <iostream>
using namespace std;
#include "doubleCapacity.hpp"
#include "SmallestElement.hpp"
//#include "Rectangle2D.hpp"
#include "Course.hpp"

int main() {
    // EX04_01 Exercise 11.1

    int size=0;
    cout << "Enter the size of the array: ";
    cin >> size;
    
  
    double* array= new double[size];
    double sum =0;
    
    for (int i=0; i < size; i++)
    {
        cout << "Enter numbers for the array: ";
        cin >> array[i];
        sum += array[i];
    }
    
    double average = sum/size;
    
    int count =0;
    for (int i =0; i < size; i++)
    {
        if (array[i] > average)
            count++;
    }
    cout << "The average is: "<<average<<endl;
    cout << "Number of elements above the average is: "<<count <<endl;
    delete [] array;
    
//EX04_02 Exercise 11.3
    
    cout << "Enter the size of the array: ";
    int SIZE;
    cin >> SIZE;
    int* list = new int[SIZE];
    int doubleSize = SIZE * 2;
    list = doubleCapacity(list, SIZE);
    cout << "The double capacity is: " <<doubleSize <<endl;
    delete [] list;
    
//EX04_03 Exercise 11.5
    int Array[]={1,2,4,5,10,100,2,-22};
    int smallest = smallestElement(Array,8);
    cout << "The smallest element is "<< smallest <<endl;
    //int* SmallestElement();
   
    
//EX04_04 Exercise 11.9
    /*
    Rectangle2D r1,r2,r3;
    
    r1.contains(2,2,5.5,4.9);
    r2.Rectangle2D (4,5, 10.5, 3.2);
    r3 (3,5,2.3,5.4)
    
    cout << "The area of the first rectangle is " << r1.getArea() << endl;
    cout << "The perimeter of the first rectangle is " << r1.getPerimeter() << endl;
    if(r1.contains(3, 3) == true)
    {
        cout << "The point (3, 3) is in the first rectangle";
    }
    else
    {
        cout << "The point (3, 3) is not in the first rectangle";
    }
    if(r1.contains(r2) == true)
    {
        cout << "The 1st rectangle contains the 2nd rectangle";
    }
    else
    {
        cout << "The 1st rectangle doesn't contains the 2nd rectangle";
    }
    if(r1.overlaps(r3) == true)
    {
        cout << "The 3rd rectangle overlaps with the first rectangle";
    }
    else
    {
        cout << "The 3rd rectangle doesn't overlap with the first rectangle";
    }
    */
    
    
//EX04_05 Exercise 11.13
    Course c1("CS172",5);
    
    c1.addStudent("Peter");
    c1.addStudent("Brian");
    c1.addStudent("Anne");
    
    cout << "Number of students in course 1: "<<c1.getNumberOfStudents()<<endl;
    string *students =c1.getStudents();
    
    for(int i=0; i <c1.getNumberOfStudents();i++)
    {
        cout << students[i]<<" ";
    }
    c1.dropStudent("Peter");
    /*
    cout << " "<<endl;
    
    for(int i=0; i < c1.getNumberOfStudents(); i++)
    {
        cout << *(c1.getStudents()+i)<<endl;
    }
    */
    
    
    return 0;
}
