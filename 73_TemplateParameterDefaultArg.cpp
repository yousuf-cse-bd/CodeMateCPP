/**
 * @file 73_TemplateParameterDefaultArg.cpp
 * @author yMd. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Template class paramter with defualt argument
 * @version 0.1
 * @date 2022-10-31
 * @since MonDay; 05:11 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;
/*Class parameter with defualt argument*/
template <class DataType = int, int size = 10>
class MyClass{
private:
    DataType dt;
public:
    MyClass(){
        dt = 101;
    }
    MyClass(DataType dt){
        this->dt = dt;
    }
    void showInfo(void){
        cout<<"The DT: "<<dt<<endl;
        cout<<"The number is "<<size<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    MyClass <> object;
    object.showInfo();

    MyClass <float> obFloat(float(3.1415));
    obFloat.showInfo();

    MyClass <string, 101> obString("Yousuf");
    obString.showInfo();
    return 0;
}
