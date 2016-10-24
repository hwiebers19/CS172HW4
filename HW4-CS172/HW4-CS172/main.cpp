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
#include "Rectangle2D.hpp"
#include "Course.hpp"

int main() {
// EX04_01 Exercise 11.1

    // initialize size
    int size=0;
    // have user enter the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;
    
    double* array= new double[size];
    double sum =0;
    
    //have the user imput the values in the array
    for (int i=0; i < size; i++)
    {
        cout << "Enter numbers for the array: ";
        cin >> array[i];
        sum += array[i];
    }
    
    //calculate the average and output it
    double average = sum/size;
    
    int count =0;
    for (int i =0; i < size; i++)
    {
        if (array[i] > average)
            count++;
    }
    cout << "The average is: "<<average<<endl;
    // output the values greater than the average
    cout << "Number of elements above the average is: "<<count <<endl;
    delete [] array;
    
//EX04_02 Exercise 11.3
    
    //have the user enter the size of the array
    cout << "Enter the size of the array: ";
    int SIZE;
    cin >> SIZE;
    // double the array and output the new size
    int* list = new int[SIZE];
    int doubleSize = SIZE * 2;
    list = doubleCapacity(list, SIZE);
    cout << "The double capacity is: " <<doubleSize <<endl;
    delete [] list;
    
//EX04_03 Exercise 11.5
    //the values for the array are hardcoded in, the code will find the smallest element and output it
    int Array[]={1,2,4,5,10,100,2,-22};
    int smallest = smallestElement(Array,8);
    cout << "The smallest element is "<< smallest <<endl;
   
    
//EX04_04 Exercise 11.9
    //the points of the rectangles are entered for each ractangle
    Rectangle2D r1(2,2,5.5,4.9);
    Rectangle2D r2(4,5, 10.5, 3.2);
    Rectangle2D r3(3,5,2.3,5.4);
    
    //this will output the area and perimeter of the first rectangle
    cout << "The area of the first rectangle is " << r1.getArea() << endl;
    cout << "The perimeter of the first rectangle is " << r1.getPerimeter() << endl;
    //this checks if the point (3,3) is in the first rectangle and outputs if it is or not
    if(r1.contains(3, 3) == true)
    {
        cout << "The point (3, 3) is in the first rectangle"<<endl;
    }
    else
    {
        cout << "The point (3, 3) is not in the first rectangle"<<endl;
    }
    //this checks if the 1st rectangle contains the second and outputs if it is or not
    if(r1.contains(r2) == true)
    {
        cout << "The 1st rectangle contains the 2nd rectangle"<<endl;
    }
    else
    {
        cout << "The 1st rectangle doesn't contains the 2nd rectangle"<<endl;
    }
    //this checks if the 3rd rectangle overlaps with the 1st and outputs if it is or not
    if(r1.overlaps(r3) == true)
    {
        cout << "The 3rd rectangle overlaps with the 1st rectangle"<<endl;
    }
    else
    {
        cout << "The 3rd rectangle doesn't overlap with the 1st rectangle"<<endl;
    }
    
    
    
//EX04_05 Exercise 11.13
    //this creates the course CS172
    Course c1("CS172",5);
    
    //this addes Peter, Brian, and Anne to the CS172 course
    c1.addStudent("Peter");
    c1.addStudent("Brian");
    c1.addStudent("Anne");
    
    //this outputs the students in the CS172 course
    cout << "Number of students in course 1: "<<c1.getNumberOfStudents()<<endl;
    string *students =c1.getStudents();
    
    for(int i=0; i <c1.getNumberOfStudents();i++)
    {
        cout << students[i]<<", ";
    }
    
    //this drops Peter from the CS172 course
    c1.dropStudent("Peter");
    cout << " "<<endl;
    
    //this outputs the people in the course after Peter is dropped
    cout << "Number of students in course 1: "<<c1.getNumberOfStudents()<<endl;
    students =c1.getStudents();
    
    for(int i=0; i <c1.getNumberOfStudents();i++)
    {
        cout << students[i]<<", ";
    }
    
    cout <<" "<<endl;
    
    return 0;
}
