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

//creates the Rectangle2D class with the private and public constructors promised
class Rectangle2D
{
private:
    double x;
    double y;
    
    double width;
    double height;
    
public:
    
    int getx()const;
    int gety()const;
    
    void setx(int x);
    void sety(int y);
    
    
    double getwidth()const;
    double getheight()const;
    
    void setwidth(double width);
    void setheight(double height);
    
    Rectangle2D();
    Rectangle2D(int x, int y, int width, int height);
    
    int getArea()const;
    int getPerimeter()const;
    
    bool contains(double x, double y)const;
    bool contains(const Rectangle2D &r)const;
    bool overlaps(const Rectangle2D &r)const;
    
};


#endif /* Rectangle2D_hpp */
