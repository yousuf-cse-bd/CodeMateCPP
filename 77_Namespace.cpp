/**
 * @file 77_Namespace.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Global namespce with scope resolution operator
 * @version 0.1
 * @date 2022-11-11
 * @since FriDay; 10:01 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
namespace namespace_identifier{
    class X{
    public:
        void memberFunction(void){
            std::cout<<"A member function"<<std :: endl;
        }
    };
    void someFunction(){
        std:: cout<<"A stand-alone function"<< std:: endl;
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    namespace_identifier :: someFunction();
    namespace_identifier :: X x;
    x.memberFunction();
    return 0;
}
