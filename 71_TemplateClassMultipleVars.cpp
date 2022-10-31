/**
 * @file 71_TemplateClassMultipleVars.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Multiple data-types with template class
 * @version 0.1
 * @date 2022-10-31
 * @since MonDay; 11:50 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

template <class DataType1, class DataType2, class DataType3>
class MultipleDataTypes{
private:
    DataType1 var1;
    DataType2 var2;
    DataType3 var3;
public:
    MultipleDataTypes(DataType1 var1, DataType2 var2, DataType3 var3){
        this->var1 = var1, this->var2 = var2, this->var3 = var3;
    }
    void showInfo(void){
        cout<<"Var1: "<<var1<<"\tVar2: "<<var2<<"\tVar3: "<<var3<<endl;
    }
};
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    MultipleDataTypes <string, unsigned, float> yousuf("Yousuf", 171311101, float(3.5));
    yousuf.showInfo();

    MultipleDataTypes <unsigned int, float, string> murshid(171311105, float(3.5), "Murshid");
    murshid.showInfo();

    MultipleDataTypes <float, unsigned int, const char*> mustafeez(float(3.30), 171311103, "Mustafeez");
    mustafeez.showInfo();
    return 0;
}
