/**
 * @file 25_CallByReferenceObject.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Call by reference from normal function but main function has pointer object
 * @version 0.1
 * @date 2022-10-08
 * @since SaturDay; 11:21 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

class CallByReference{
private:
    int number;
public:
    void setNumber(int number){
        this->number = number;
    }
    int getNumber(){
        return number;
    }
};

int getNumber10(CallByReference &reference){
    reference.setNumber(15);
    reference.getNumber();
    return reference.getNumber()*10; /*15x10 = 100*/
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    CallByReference *mainObject = new CallByReference();
    mainObject->setNumber(10);
    cout<<"\tBefore calling"<<endl;
    cout<<"Direct Return: "<<mainObject->getNumber()<<endl;
    cout<<"From GetNUmber10(): "<<getNumber10(*mainObject)<<endl;
    cout<<"\tAfter calling"<<endl;
    cout<<"Reference Number: "<<mainObject->getNumber()<<endl;

    delete mainObject;
    mainObject = nullptr;

    return 0;
}
