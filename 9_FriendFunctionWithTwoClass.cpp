/**
 * @file 9_FriendFunctionWithTwoClass.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A stan-alone friend function declared two different classes
 * @version 0.1
 * @date 2022-10-03
 * @since MonDay; 09:44 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

#pragma pack(1)
class Second; /*Forward referencing*/
/*Here class: First*/
class First{
private:
    int pvtDataFirst;
public:
    First(int x){
        pvtDataFirst = x;
    }
    friend void friendFunction(First f1, Second s1);
};
/*Here class: Second*/
class Second{
private:
    int pvtDataSecond;
public:
    Second(int x){
        pvtDataSecond = x;
    }
    friend void friendFunction(First f1, Second s1);
};
/*Single friend function with two classes*/
void friendFunction(First f1, Second s1){
    cout<<"From First Class: "<<f1.pvtDataFirst<<endl;
    cout<<"From Second Class: "<<s1.pvtDataSecond<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    First f1(15);
    Second s1(20);

    friendFunction(f1, s1);
    return 0;
}

