/**
 * @file 12_StructuredVarInClass.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A structured variable within a class
 * @version 0.1
 * @date 2022-10-03
 * @since MonDay; 05:41 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
#pragma pack(1)

struct A{
    int x1;
    int x2[5];
};

class MyClass{
private:
    A a1; /*Structured Variable as Private Declared*/
public:
    A a2; /*Structured variable as public declared*/
    void printA(void){
        a1.x1 = 5;
        a1.x2[0] = 11;
        a1.x2[1] = 22;
        a1.x2[2] = 33;
        a1.x2[3] = 44;
        a1.x2[4] = 55;
        /*Printing value of private member*/
        cout<<"Value of a1 in member function: "<<a1.x1<<endl;
        for(unsigned short int i = 0; i<5; i++){
            cout<<"["<<i<<"] = "<<*(a1.x2+i)<<"\n";
        }
        /*Printing value public member*/
        cout<<"\nValue of a2 from main() function:"<<endl;
        cout<<"a2.x1 = "<<a2.x1<<endl;
        for(unsigned short int i = 0; i<5; i++){
            cout<<"["<<i<<"] = "<<*(a2.x2+i)<<"\n";
        }
    }

};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    MyClass my;
    cout<<"Enter value for a2.x1: ";
    cin>>my.a2.x1;
    cout<<"Enter five element a2.x2[]:"<<endl;
    for(unsigned short int i = 0; i<5; i++){
        cout<<"my.a2.x2["<<i<<"] = ";
        cin>>my.a2.x2[i];
    }
    my.printA();
    return 0;
}
