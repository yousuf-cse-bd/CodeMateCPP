/**
 * @file 4_StaticMemberVariable.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Static member variable is satyed single place, no matter how many object
 * @version 0.1
 * @date 2022-10-02
 * @since SunDay; 07:00 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
#pragma pack(1)
class StaticMemberVariable{
private:
    static int x, y; /*Declaring static variables*/
public:
    void setDataXY(int a, int b){
        x = a; y = b;
    }

    void printXY(){
        cout<<"X = "<<x<<"\tY = "<<y<<endl;
    }
};
/*Defining static member variables*/
int StaticMemberVariable :: x;
int StaticMemberVariable :: y;
/*Kaker basay kokil er baccha palon*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Create two objects*/
    StaticMemberVariable staticMemberVariable1, staticMemberVariable2;
    staticMemberVariable1.setDataXY(100, 200); /*Assinging two variables as argument*/
    staticMemberVariable1.printXY(); /*Printing value x and y*/
    staticMemberVariable2.printXY(); /*Printing value x and y*/
    return 0;
}
