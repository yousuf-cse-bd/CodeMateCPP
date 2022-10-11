/**
 * @file 34_FunctionArgumentAsObjectArray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The function argument as objected array
 * @version 0.1
 * @date 2022-10-11
 * @since TuesDay; 04:52 PM
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
public:
    // Person(char *named){
    //     strcpy(name, named);
    // }
    void setName(char *name){
        strcpy(this->name, name);
    }
    char *getName(void){ /*A pointer function*/
        return name;
    }
    void printName(void){
        cout<<"Your Name: "<<name;
    }
};
/*Call by reference '&'*/
void nameLength(Person p1[], unsigned int size){
    for(unsigned int i = 0; i < size; i++){
        p1[i].printName();
        cout<<"\tLength: "<<strlen(p1[i].getName())<<endl;
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    char name[25];
    Person p[4];
    for(unsigned int i = 0; i < 4; i++){
        cout<<"Enter Name["<<i<<"] = ";
        cin>>name;
        p[i].setName(name);
    }
    nameLength(p, sizeof(p) / sizeof(Person));
    return 0;
}
