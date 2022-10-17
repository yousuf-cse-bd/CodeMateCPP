/**
 * @file 46_HybridInheritanceWithVirtualKeyWord.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Hybrid inhertiance virtual base class virtual key-word
 * @version 0.1
 * @date 2022-10-17
 * @since MonDay; 07:16 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

/*Virtual base class*/
class BaseClassA{
protected:
    int id;
};
/*Hierarchy inheritance*/
class DerivedClassB : virtual public BaseClassA{
public:
    DerivedClassB(){
        cout<<"Constructor Derived Class B"<<endl;
    }
};
/*Hierarchy inheritance*/
class DerivedClassC : virtual public BaseClassA{
public:
    DerivedClassC(){
        cout<<"Constructor Derived Class C"<<endl;
    }
};
/*Multiple inheritance*/
class DerivedClassD : public DerivedClassB, public DerivedClassC{
public:
    DerivedClassD(int id){
        this->id = id;
        cout<<"Constructor Derived Class D"<<endl;
    }
    // void setNumber(int id){
    //     this->id = id;
    // }
    int getNumber(void){
        return id;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    DerivedClassD d1(101);
    // d1.setNumber(101);
    cout<<"The number: "<<d1.getNumber()<<endl;
    system("pause>0");
    return 0;
}
