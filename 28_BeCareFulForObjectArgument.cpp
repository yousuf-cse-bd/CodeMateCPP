/**
 * @file 28_BeCareFulForObjectArgument.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief No problem: ne timed constructor but two time destructor invoked NO DATA LOSS
 * @version 0.1
 * @date 2022-10-09
 * @since SunDay; 10:48 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
#pragma pack(1)

class ConstructorDestructor{
private:
    int *number;
public:
    ConstructorDestructor(int num){
        number = new int;
        *number = num;
        cout<<"\tThe constructor invoked."<<endl;
    }
    int showNumber(void){
        // cout<<"The number: "<<*number<<endl;
        return *(number);
    }
    ~ConstructorDestructor(){
        cout<<"\tThe destructo invoked."<<endl;
        delete number;
        number = nullptr;
    }
    ConstructorDestructor(ConstructorDestructor &copyConstructor){
        number = copyConstructor.number;
    }
};
void myFunction(ConstructorDestructor object){
   cout<<"The number in myFunction(): "<<object.showNumber()*object.showNumber()<<endl;;
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    ConstructorDestructor conDes(101);
    cout<<"The number in Main: "<<conDes.showNumber()<<endl;
    myFunction(conDes);
    // cout<<"Frome MyFuncion(): "<<myFunction(conDes)<<endl;
    return 0;
}
