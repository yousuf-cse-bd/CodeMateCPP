/**
 * @file 8_FriendFunctionStanAlone.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The friend function is stan-alone as like user-defined function
 * @version 0.1
 * @date 2022-10-03
 * @since MonDay; 09:41 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

class FriendKeyWord{
private:
    int pvtData;
public:
    FriendKeyWord(int x){
        pvtData = x;
    }
    // void getData(int x){
    //     pvtData = x;
    // }
    friend void friendFunction(FriendKeyWord reference);
};  

/*Stan-alone friend function*/
void friendFunction(FriendKeyWord reference){
    int localData;
    cout<<"Accessed: "<<reference.pvtData<<endl;
    localData = reference.pvtData + 10;
    cout<<"Local Data: "<<localData<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    FriendKeyWord object(15);
    // object.getData(15);
    friendFunction(object);
    return 0;
}

