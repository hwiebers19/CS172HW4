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
private:
    static double x;
    static double y;
    
    static double width;
    static double height;
    
public:
    
    int getx();
    int gety();
    
    void setx(int y);
    void sety(int y);
    
    
    double getwidth();
    double getheight();
    
    void setwidth(double width);
    void setheight(double height);
    
    Rectangle2D();
    
    int getArea()const;
    int getPerimeter()const;
    
    bool contains(double x, double y)const;
    bool contains(const Rectangle2D &r)const;
    bool overlaps(const Rectangle2D &r)const;
    
};


#endif /* Rectangle2D_hpp */
