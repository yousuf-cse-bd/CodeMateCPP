/**
 * @file 56_InsertionOpOverloading.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Insertion (<<) operator opverloading
 * @version 0.1
 * @date 2022-10-27
 * @since ThursDay; 11:43 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cstring>
#pragma pack(1)
using namespace std;

class Person{
private:
    char name[25];
    float height, weight;
public:
    Person(){
        strcpy(name, "Yousuf");
        height = 167.64, weight = 70;
    }
    Person(const char *name, float height, float weight){
        strcpy(this->name, name), this->height = height, this->weight = weight;
    }
    friend void operator<< (ostream &os, Person p){
        os<<"Name: "<<p.name<<endl;
        os<<"Height: "<<p.height<<" CMs"<<endl;
        os<<"Weight: "<<p.weight<<" KGs"<<endl;
    }
};

/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Person p1, p2;
    p2 = Person("Niton", float(158), float(56));
    cout<<"Contents of p1:"<<endl;
    cout<<p1; /*Calls operator <<()*/
    cout<<"\nContents of p2:"<<endl;
    cout<<p2; /*Calls operator <<()*/
    return 0;
}

