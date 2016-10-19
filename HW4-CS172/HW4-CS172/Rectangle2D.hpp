//
//  Rectangle2D.hpp
//  HW4-CS172
//
//  Created by Heidi Wiebers on 10/19/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef Rectangle2D_hpp
#define Rectangle2D_hpp

#include <stdio.h>

class Rectangle2D
{
public:
    static double x;
    static double y;
    
    static int getx;
    static int gety;
    
    static int setx;
    static int sety;
    
    static double width;
    static double height;
    
    static double getwidth;
    static double getheight;
    
    Rectangle2D();
    
    int getArea()const;
    int getPerimeter()const;
    
    void contains(double x, double y)const;
    void contains(const Rectangle2D &r)const;
    void overlaps(const Rectangle2D &r)const;
    
};


#endif /* Rectangle2D_hpp */
