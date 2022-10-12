/**
 * @file 39_ThisKeyWord1.cpp
 * @author your name (you@domain.com)
 * @brief Use of this key word
 * @version 0.1
 * @date 2022-10-12
 * @since WednesDay; 12:08 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class SmartPhone{
private:
    string brandName;
    string model;
    float screenSize;
public:
    SmartPhone(string brandName, string model, float screenSize){
        this->brandName = brandName;
        this->model = model;
        this->screenSize = screenSize;
    }
    void showInfo(void){
        cout<<"The brand name: "<<brandName<<endl;
        cout<<"The model name: "<<model<<endl;
        cout<<"Screen size: "<<screenSize<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    SmartPhone my("Samsung", "Core2", 6.00);
    my.showInfo();

    SmartPhone his("Vivo", "v19", 6.5);
    his.showInfo();
    return 0;
}
