/**
 * @file 55_RectangleOpOverloading.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Operator overloading with friend function
 * @version 0.1
 * @date 2022-10-27
 * @since ThursDay; 08:16 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Rectangle{
private:
    int length, width;
public:
    Rectangle(){
        length = width = 0;
    }
    Rectangle(int length, int width){
        this->length = length, this->width = width;
    }
    
    Rectangle operator++(){
        length++;
        width++;
        return *this;
    }
    Rectangle operator-(Rectangle rect){
        length -= rect.getLength();
        width -= rect.getWidth();
        return *this;
    }
    /*Friend operloaded function has no this pointer*/
    friend Rectangle operator+(Rectangle rect, int value){
        Rectangle rectangle;
        rectangle.setLength(rect.getLength() + value);
        rectangle.setWidth(rect.getWidth() + value);
        return rectangle;
    }
    friend Rectangle operator+(int value, Rectangle rect){
        Rectangle rectangle;
        rectangle.setLength(rect.getLength() + value);
        rectangle.setWidth(rect.getWidth() + value);
        return rectangle;
    }
    void setLength(int length){
        this->length = length;
    }
    void setWidth(int width){
        this->width = width;
    }
    int getLength(void){
        return length;
    }
    int getWidth(void){
        return width;
    }
    void showInfo(void){
        cout<<"Length: "<<length<<"\tWidth: "<<width<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Rectangle r1, r2, r3;
    r1 = Rectangle(20, 10);
    cout<<"At the begining, In object r1:"<<endl;
    r1.showInfo(); /*20 10*/

    r2 = r1 + 25;
    cout<<"\nAfter r2 = r1 + 25, In object r2:"<<endl;
    r2.showInfo(); /*45 35*/

    r2 = r2 - r1;
    cout<<"\nAfter r2 = r2 - r1, In object:"<<endl;
    r2.showInfo(); /*25 25*/

    r3 = r1;
    ++r3;
    cout<<"\nAfter r3 = r1 then ++r3, In object:"<<endl;
    r3.showInfo(); /*21 11*/

    r3 = 15 + r1;
    cout<<"\nAfter r3 = 15 + r1, In objcet:"<<endl;
    r3.showInfo(); /*35 25*/
    return 0;
}
