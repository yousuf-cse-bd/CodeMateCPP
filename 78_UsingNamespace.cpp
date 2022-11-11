/**
 * @file 78_UsingNamespace.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief using namespace 
 * @version 0.1
 * @date 2022-11-11
 * @since FriDay; 09:51 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
namespace T{
    class X{
    public:
        void showMessage(void){
           std :: cout<<"Hello, Yousuf!"<<std ::endl; /*Here, std just for cout & endl*/
        }
    };
    void someFunction(){
        std:: cout<<"A stand-alone function"<< std:: endl;
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    using namespace T;
    someFunction();
    X x;
    x.showMessage();
    return 0;
}
