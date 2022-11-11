/**
 * @file 79_NamespaceAlias.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Using alias variable for identifier name is big string
 * @version 0.1
 * @date 2022-11-11
 * @since FriDay; 10:17 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
namespace TheBigIdentifierName{
    using namespace std;
    class Test{
    public: 
        void memberFunction(void){
            cout<<"A member function."<<endl;
        }
    };
    void standAloneFunction(void){
        cout<<"A stand-alone function."<<endl;
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    TheBigIdentifierName :: standAloneFunction();/*Using scope resolution operator*/
    TheBigIdentifierName :: Test t1;
    t1.memberFunction();
    namespace small = TheBigIdentifierName; /*Using alias variable*/
    small :: standAloneFunction(); 
    small :: Test t2;
    t2.memberFunction();

    using namespace TheBigIdentifierName; /*using using-key-word*/
    standAloneFunction();
    Test t3;
    t3.memberFunction();

    return 0;
}

