//
//  Rectangle2D.cpp
//  HW4-CS172
//
//  Created by Heidi Wiebers on 10/19/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include "Rectangle2D.hpp"

Rectangle2D::Rectangle2D()
{
    
}

int Rectangle2D::getx()
{
   return x;
}
int Rectangle2D::gety()
{
    return y;
}
void Rectangle2D::setx(int x)
{
    this->x=x;
}
void Rectangle2D::sety(int y)
{
    this->y= y;
}

double Rectangle2D::getwidth()
{
    return width;
}
double Rectangle2D::getheight()
{
    return height;
}
void Rectangle2D::setwidth(double width)
{
    this->width=width;
}
void Rectangle2D::setheight(double height)
{
    this->height= height;
}
int  Rectangle2D::getArea()const
{
  
    return width*height;
}
int Rectangle2D::getPerimeter()const
{
    return width*2 + height*2;
}

bool Rectangle2D::contains(double x, double y)const
{
    return x >= this->x && x <= this->x + this->width && y >= this->y && y <= this->height;
    return false;
}
bool Rectangle2D::contains(const Rectangle2D &r)const
{
    //not sure how to do this yet. he said use this function, i dont know which one and he said worth more points. I dont understand he had to go
    //return x >= this->x && x <= this->x + this->width && y >= this->y && y <= this->height;
    return false;
}
bool Rectangle2D::overlaps(const Rectangle2D &r)const
{
    //not sure how to do this yet. he said use this function, i dont know which one and he said worth more points. I dont understand he had to go
    //return x >= this->x && x <= this->x + this->width && y >= this->y && y <= this->height;
    return false;
}





