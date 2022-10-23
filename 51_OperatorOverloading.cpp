/**
 * @file 51_OperatorOverloading.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Operator overloading, added object value (polymorphism)
 * @version 0.1
 * @date 2022-10-23
 * @since SunDay; 10:49 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Test{
private:
    int height, weight;
public:
    Test(){ /*Default constructor*/
        height = weight = 0;
    }
    Test(int height, int weight){ /*Paramiterize constructor*/
        this->height = height;
        this->weight = weight;
    }
    /*Operator overloading*/
    Test operator+(int x){
        Test t;
        t.height = height + x;
        t.weight = weight + x;
        return t;
    }
    void showData(void){
        cout<<"Heigt: "<<height<<"\tWeight: "<<weight<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Test t1(50, 75), t2;
    t2 = t1 + 25;
    t1.showData();
    t2.showData();
    return 0;
}
