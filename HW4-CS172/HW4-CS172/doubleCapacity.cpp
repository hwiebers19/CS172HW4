//
//  doubleCapacity.cpp
//  HW4-CS172
//
//  Created by Heidi Wiebers on 10/19/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//
#include <iostream>
using namespace std;

#include "doubleCapacity.hpp"

//EX04_02 Exercise 11.3

int* doubleCapacity(const int* list, int SIZE)
{
    // use the imputed array size and doubles it
    int newsize = SIZE *2;
    int *p = new int[newsize];
    for (int i = 0; i < SIZE; i++)
    {
        p[i] = list[i];
    }
    delete[] list;
    return p;
}
