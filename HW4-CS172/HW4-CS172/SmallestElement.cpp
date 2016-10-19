//
//  SmallestElement.cpp
//  HW4-CS172
//
//  Created by Heidi Wiebers on 10/19/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include "SmallestElement.hpp"
#include <iostream>
using namespace std;

int* SmallestElement()
{
    //int element=0;
    int Array[]= {1, 2, 3, 4, 5, 10, 100, 2, -22};
    
    
    int smallest = Array[0] ;
    for (int i=1;  i < sizeof(Array)/sizeof(Array[0]);  ++i )
    {
        if ( Array[i] < smallest )
        {
            smallest = Array[i] ;
        }
    }
    cout << smallest << '\n' ;
    return 0;
    
}