/**
 * @file 7_FriendFunctionAsMemberFunction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A particularly function as a friend function is used from a class
 * @version 0.1
 * @date 2022-10-03
 * @since MonDay; 08:06 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
#pragma pack(1)

class A; /*Here class A: forward reference*/

class B{
private:
    int pvtB;
public:
    B(){
        pvtB = 0;
    }
    void getPvtB1(int x){
        pvtB = x;
    }
    /*showPvtB1() will be declared as a friend function, so no inline definition*/
    void showPvtB1(A a);
};
/*Full definition of the class*/
class A{
private:
    int pvtA;
public:
    A(){
        pvtA = 0;
    }
    void getPvtA(int x){
        pvtA = x;
    }
    /*Declaring showPvtB1() as friend function*/
    /*This function is prototype from B class*/
    friend void B :: showPvtB1(A a); /*Copy of the object a1*/
};
/*Now function definition out of class*/
void B :: showPvtB1(A a){
    cout<<"Value of pvtA: "<<a.pvtA<<endl;
    cout<<"Value of pvtB: "<<pvtB<<endl;
}
/*Driver Code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Tow class have two object declared*/
    A a1; B b1;
    a1.getPvtA(15);
    b1.getPvtB1(30);
    /*Call by value*/
    b1.showPvtB1(a1);

    return 0;
}
