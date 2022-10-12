/**
 * @file 38_LinkList.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Construct a link list using class with new-delete key word
 * @version 0.1
 * @date 2022-10-12
 * @since WednesDay; 10:43 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class ListElement{
private:
    int x;
public:
    ListElement(){
        cout<<"Constrcutor..."<<endl;
    }
    void setNumber(int x){
        this->x = x;
    }
    int getNumber(void){
        return x;
    }
    ListElement *nextListElement; /*Self referential pointer*/
    ~ListElement(){
        cout<<"Destructor..."<<endl;
    }
};
/*Diver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    ListElement li1;
    li1.setNumber(10);
    cout<<"Get the number, li1: "<<li1.getNumber()<<endl;
    li1.nextListElement = new ListElement(); /*Next element holds address allocaed memory*/
    li1.nextListElement->setNumber(100); /*Access member of new's object*/
    cout<<"Value in li1's pointed element: "<<li1.nextListElement->getNumber()<<endl;
    delete li1.nextListElement;
    li1.nextListElement = nullptr;

    return 0;
}
