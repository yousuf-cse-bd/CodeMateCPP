/**
 * @file 54_OperatorOverloadingFriendKeyWord.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Operator overloading with friend key-word
 * @version 0.1
 * @date 2022-10-27
 * @since 06:29 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Test{
private:
    int height, width;
public:
    Test(){
        height = width = 0;
    }
    Test(int height, int width){
        this->height = height, this->width = width;
    }
    friend Test operator+(Test t, int value){
        Test test;
        test.height = t.height + value;
        test.width = t.width + value;
        return test; /*Return object*/
    }
    void showData(void){
        cout<<"Height: "<<height<<"\tWidth: "<<width<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Test t1(10, 20), t2;
    t2 = t1 + 30;
    t1.showData();
    t2.showData();
    return 0;
}
