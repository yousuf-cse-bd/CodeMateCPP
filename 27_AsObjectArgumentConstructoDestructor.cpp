/**
 * @file 27_AsObjectArgumentConstructoDestructor.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief One timed constructor but two time destructor invoked
 * @version 0.1
 * @date 2022-10-09
 * @since SunDay; 10:04 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
#pragma pack(1)
class ConstructorDestructor{
private:
    int number;
public:
    ConstructorDestructor(int number){
        this->number = number;
        cout<<"Parameter constructor invoked."<<endl;
    }
    void showNumber(void){
        cout<<"\tThe number: "<<number<<endl;
    }
    ~ConstructorDestructor(){
        cout<<"Destructor invoked."<<endl;
    }
};

/*A stan-alone function*/
void myFunction(ConstructorDestructor object){
    object.showNumber();
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    ConstructorDestructor conDes(101);
    // conDes.showNumber();
    myFunction(conDes);
    return 0;
}
