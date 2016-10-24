//
//  Rectangle2D.cpp
//  HW4-CS172
//
//  Created by Heidi Wiebers on 10/19/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include "Rectangle2D.hpp"
//argument constructor which uses pointers in it
Rectangle2D::Rectangle2D(int x, int y, int width, int height)
{
    this->x=x;
    this->y=y;
    this->width=width;
    this->height=height;
}
//initalizes x, y, width, and height
Rectangle2D::Rectangle2D()
{
    x=0;
    y=0;
    width=1;
    height=1;
}
//gets the x value
int Rectangle2D::getx()const
{
   return x;
}
//gets the y value
int Rectangle2D::gety()const
{
    return y;
}
//sets the x value using a pointer
void Rectangle2D::setx(int x)
{
    this->x=x;
}
//sets the y value using a pointer
void Rectangle2D::sety(int y)
{
    this->y=y;
}
//gets the width
double Rectangle2D::getwidth()const
{
    return width;
}
//gets the height
double Rectangle2D::getheight()const
{
    return height;
}
//sets the width with a pointer
void Rectangle2D::setwidth(double width)
{
    this->width=width;
}
//sets the height with a pointer
void Rectangle2D::setheight(double height)
{
    this->height= height;
}
//gets the area of the rectangle
int  Rectangle2D::getArea()const
{
  
    return width*height;
}
//gets the perimeter of the rectangle
int Rectangle2D::getPerimeter()const
{
    return width*2 + height*2;
}
//checks if the rectangle contains the point listed
bool Rectangle2D::contains(double x, double y)const
{
    return x >= this->x && x <= this->x + this->width && y >= this->y && y <= this->y + this->height;
    return false;
}
//checks if the rectangle constains the other rectangle listed
bool Rectangle2D::contains(const Rectangle2D &r)const
{
    return contains(r.getx(), r.gety()) &&
           contains(r.getx()+ r.getwidth(), r.gety()) &&
           contains(r.getx(), r.gety() + r.getheight()) &&
           contains(r.getx()+ r.getwidth(), r.gety()+r.getheight());
    
}
//checks if the rectangle overlaps with the other rectangle listed
bool Rectangle2D::overlaps(const Rectangle2D &r)const
{
    return r.contains(r.getx(), r.gety()) ||
           r.contains(r.getx()+r.getwidth(), r.gety()) ||
           r.contains(r.getx(), r.gety() + r.getheight()) ||
           r.contains(r.getx()+r.getwidth(), r.gety()+r.getheight())||
    
           r.contains(this->getx(), this->gety()) ||
           r.contains(this->getx()+this->getwidth(), this->gety()) ||
           r.contains(this->getx(), this->gety() + this->getheight()) ||
           r.contains(this->getx()+this->getwidth(), this->gety()+r.getheight());
    
}





