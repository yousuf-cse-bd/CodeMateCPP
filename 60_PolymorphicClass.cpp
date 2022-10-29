/**
 * @file 60_PolymorphicClass.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Late/dynamic binding, funcion overrinding, virtual function polymorphic class
 * @version 0.1
 * @date 2022-10-29
 * @since SaturDay; 09:16 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Shape{
public:
    virtual void type(void){
        cout<<"This is just shape..!"<<endl;
    }
};

class Circle : public Shape{
public:
    void type(void){
        cout<<"This is a circle."<<endl;
    }
};

class SmallCircle : public Circle{
public:
    void type(void){
        cout<<"\tThis is a small circle."<<endl;
    }
};

class BigCircle : public Circle{
public:
    void type(void){
        cout<<"\tThis is a big circle."<<endl;
    }
};

class Rectangle : public Shape{
public:
    void type(void){
        cout<<"This is a rectangle."<<endl;
    }   
};

class SquareRectangle : public Rectangle{
public:
    void type(void){
        cout<<"\tThis is a square rectangle."<<endl;
    }    
};

class VirtualFunctionDefinitionShow: public Shape{
    /*Empty class, but not empty (virtual function definition contained)*/
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");

    Shape *shapePtr;
    Circle circle;
    shapePtr = &circle;
    shapePtr->type();

    SmallCircle smallCircle;
    shapePtr = &smallCircle;
    shapePtr->type();
    BigCircle bigCircle;
    shapePtr = &bigCircle;
    shapePtr->type();
    Rectangle rectangle;
    shapePtr = &rectangle;
    shapePtr->type();

    SquareRectangle squareRectangle;
    shapePtr = &squareRectangle;
    shapePtr->type();
    cout<<"Showing virtual function's definition..."<<endl;
    VirtualFunctionDefinitionShow ob;
    shapePtr = &ob;
    shapePtr->type();
    return 0;
}
