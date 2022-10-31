/**
 * @file SwapingTemplateClass.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Universal swaping techique uding template class
 * @version 0.1
 * @date 2022-10-31
 * @since MonDay; 10:50 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

template <class DataType>
class Swaping{
private:
    DataType var1, var2;
public:
    Swaping(DataType &var1, DataType &var2){
        this->var1 = var1, this->var2 = var2;
        cout<<"Var1: "<<var1<<"\tVar2: "<<var2<<endl;
    }
    ~Swaping(){
        DataType temp = var1;
        var1 = var2;
        var2 = temp;
        cout<<"Var1: "<<var1<<"\tVar2: "<<var2<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const char *fName = "Yousuf";
    const char *lName = "Ali";
    Swaping <const char*> interchange(fName, lName);
    return 0;
}
