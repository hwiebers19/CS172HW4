//
//  main.cpp
//  HW4-CS172
//
//  Created by Heidi Wiebers on 10/19/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include <iostream>
using namespace std;

// EX04_01 EXERCIZE 11.1
int main() {
    int size=0;
    cout << "Enter the size of the array: ";
    cin >> size;
    
  
    double array[size];
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
    
    
    
    return 0;
}
