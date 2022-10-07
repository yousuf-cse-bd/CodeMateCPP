/**
 * @file 20_ConstrcutorDestructor.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com))
 * @brief Main function vs Stan-alone function with object creation
 * @version 0.1
 * @date 2022-10-07
 * @since FriDay; 09:44 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
#pragma pack(1)

class ConsturctorDestructor{
public:
    ConsturctorDestructor(void){
        cout<<"Constructor invoked."<<endl;
    }
    ~ConsturctorDestructor(void){
        cout<<"Destructor invoked."<<endl;
    }
};

/*Stan-alone function*/
void simpleFunction(void){
    cout<<"\tObject creating in simpleFunction()"<<endl;
    ConsturctorDestructor sf;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"\tFrom Main Function..."<<endl;
    ConsturctorDestructor cd;
    
    cout<<"\tFrom Simple Function..."<<endl;
    cout<<"\tSimple Begin"<<endl;
    simpleFunction();
    cout<<"Simpl End"<<endl;
    return 0;
}
