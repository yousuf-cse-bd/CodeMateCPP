/**
 * @file 5_CountObjectByStaticMemberVariable.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Counting objects using static member variable and function
 * @version 0.1
 * @date 2022-10-02
 * @since SunDay; 07:23 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
#pragma pack(1)
class CountObjectByStaticMemberVariable{
private:
    /* data */
    static int countObject; /*Declaring static variable*/
public:
    CountObjectByStaticMemberVariable(){
        countObject ++;
    }
    ~CountObjectByStaticMemberVariable(){
        /*Not affect increment or decrement in destructor block*/
        countObject--;
    }
    /*Static member function*/
    static void printInfo(){
        cout<<"The total objects: "<<countObject<<endl;
    }
};
/*Define static variable (static variable default value is zero '0')*/
int CountObjectByStaticMemberVariable :: countObject;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    CountObjectByStaticMemberVariable object1, object2, object3, object4, object5;
    /*Static memeber function called by scope resolution operator*/
    CountObjectByStaticMemberVariable ::printInfo();
    return 0;
}
