/**
 * @file 53_SomeOperatorOverloading.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Operator overloading +, -, ++, +=
 * @version 0.1
 * @date 2022-10-26
 * @since WednesDay; 08:01 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Rect{
private:
    int length, width;
public:
    Rect(){
        length = width = 0;
    }
    Rect(int length, int width){
        this->length = length, this->width = width;
    }
    Rect operator+ (unsigned int p){
        Rect temp;
        temp.setLength(length + p);
        temp.setWidth(width + p);
        return temp;
    }
    Rect operator- (unsigned int p){
        Rect temp;
        temp.setLength(length - p);
        temp.setWidth(width - p);
        return temp;
    }
    Rect operator- (Rect r){
        length -=r.getLength();
        width -= r.getWidth();
        return *this;
    }
    Rect operator++(){
        length++, width++;
        return *this;
    }
    Rect operator+= (Rect op){
        length += op.getLength();
        width += op.getWidth();
        return *this;
    }
    void showInfo(void){
        cout<<"Length = "<<length<<"\tWidth = "<<width<<endl;
    }
    void setLength(unsigned int length){
        this->length = length;
    }
    void setWidth(unsigned int width){
        this->width = width;
    }
    unsigned int getLength(void){
        return length;
    }
    unsigned int getWidth(void){
        return width;
    }
    virtual ~Rect(){};
};


int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Rect r1(20, 10), r2, r3;
    cout<<"At the begining, In object, r1."<<endl;
    r1.showInfo(); /*20, 10*/
    cout<<endl;
    r2 = r1 + 25; /*calls oprerator+ (unsigned int p)*/
    cout<<"After r2 = r1 + 25, In object r2."<<endl;
    r2.showInfo(); /*45 35*/
    cout<<endl;
    // r3 = r2 - 25; /*calls oprerator- (unsigned int p)*/
    // r3.showInfo();

    r2 = r2 - r1; /*calls operator- (Rect r)*/
    cout<<"After r2 = r2 - r1, In object r2."<<endl;
    r2.showInfo();/*25 == 45 - 20, 25 == 35 - 10*/
    cout<<endl;

    r3 = r2 - 5; /*Calls operator- (unsigned int p)*/
    cout<<"After r3 = r2 - 5, In object r3."<<endl;
    r3.showInfo(); /*20 20*/
    cout<<endl;

    ++r3; /*Calls operator++()*/ /*r3 = r3 + 1;*/
    cout<<"After r3++, In object."<<endl;
    r3.showInfo(); /*21 21*/
    cout<<endl;

    r1 += r3; /*Calls operator+=(Rect op)*/
    cout<<"After r1 += r3, In object."<<endl;
    r1.showInfo(); /*41 31*/
    cout<<endl;
    return 0;
}
