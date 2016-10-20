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
    int* SmallestElement();
    cout << "The smallest element is "<< SmallestElement()<<endl;
    
//EX04_04 Exercise 11.9
    /*Rectangle2D r1,r2, r3;
    r1(2,2,5.5,4.9);
    r2(4,5,10.5,3.2);
    r3(3,5,2.3,5.4);
    
    r1.getArea();
    r1.getPerimeter();
    
    r1.contains(3,3);
    r1.overlaps(r3);
    
  */
    
    
    
//EX04_05 Exercise 11.13
    
    
    
    return 0;
}
