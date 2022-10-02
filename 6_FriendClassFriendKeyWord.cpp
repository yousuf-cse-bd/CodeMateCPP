/**
 * @file 6_FriendClassFriendKeyWord.cpp
 * @author pvtVarOfFriendClass
 * @brief Application of friend key word with friend class (Accessing private member variable from another class)
 * @version 0.1
 * @date 2022-10-02
 * @since SunDay; 10:03 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
#pragma pack(1)

class NormalClassA{
private:
    int pvtVarOfNormalClass;
public:
    NormalClassA(){
        pvtVarOfNormalClass = 0;
    }
    void getPvtA1(int x){
        pvtVarOfNormalClass = x;
    }
    friend class FriendClassB; // FriendClassB as friend class of NormalClassA
};

class FriendClassB{
private:
    int pvtVarOfFriendClass;
public:
    FriendClassB(){
        pvtVarOfFriendClass = 0;
    }
    void getPvtB1(NormalClassA &a){ /*Create reference of NormalClassA*/
        pvtVarOfFriendClass = a.pvtVarOfNormalClass + 25; /*Using current value of pvtVarOfNormalClass*/
        a.pvtVarOfNormalClass = 50; /*Changing value of pvtVarOfNormalClass*/
    }
    void showPvtB1(NormalClassA a){ /*Getting coppy of A1*/
        cout<<"Value of pvtVarOfNormalClass: "<<a.pvtVarOfNormalClass<<endl;
        cout<<"Value of pvtVarOfFriendClass: "<<pvtVarOfFriendClass<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    NormalClassA a1; FriendClassB b1;
    /*Call by value*/
    a1.getPvtA1(30);
    /*Call by reference*/
    b1.getPvtB1(a1);
    /*call by value*/
    b1.showPvtB1(a1);
    return 0;
}
