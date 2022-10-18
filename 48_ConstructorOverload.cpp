/**
 * @file 48_ConstructorOverload.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Constructor overloading, enum, fstream
 * @version 0.1
 * @date 2022-10-18
 * @since TuesDay; 09:34 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <fstream>
#include <cstring>
#pragma pack(1)
using namespace std;

enum accountType {Current = 1, Savings = 2, Fixed = 3};
class Account{
private:
    unsigned int accountId; /*Account number*/
    char name[25]; /*Account holder*/
    accountType type; /*account type*/

    unsigned int inputIndex(void){
        short int index;
        cin>>index;
        if(index == 1 || index == 2 || index == 3){
            return index;
        }else{
            cout<<"\tYour input index is not valid, Enter valid index..."<<endl;
            return inputIndex();
        }
    }

public:
    Account();
    Account(unsigned int accountId, const char *name, accountType type){
        this->accountId = accountId;
        strcpy(this->name, name);
        this->type = type;
    }
    Account(ifstream &fin);
    void display(void);
};

Account :: Account(){
    short int index;
    cout<<"Enter Account ID Here: #";
    cin>>accountId;
    cout<<"Enter Name of Account Holder: ";
    cin>>name;
    cout<<"Enter Account Type [CURRENT = 1, SAVINGS = 2, FIXED = 3]: ";
    
    index = inputIndex();
    
    /*We can not input enum index so taken extra variable and below type-casting*/
    Account :: type = (accountType)index;
}


Account :: Account(ifstream &fin){
    fin.open("Overload.txt", ios :: in); /*Open file*/
    if(!fin){
        cout<<"File Error, The file not found..!"<<endl;
        cout<<"No Recored is Created, Object is Empty or Garbage."<<endl;
        return;
    }
    fin>>accountId;
    fin>>name;
    short int index;
    fin>>index;
    Account :: type = (accountType)index;
}


void Account :: display(void){
    static int outPutNumber = 1;
    cout<<"\n\t\tOutPut: #"<<outPutNumber++<<endl;
    const char *accountTypeName[] = {"", "CURRENT", "SAVINGS", "FIXED"};
    cout<<"The Account ID: "<<accountId<<endl;
    cout<<"The Account Holder: "<<name<<endl;
    cout<<"Account Type: "<<*(accountTypeName+type)<<endl; 
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Account object;
    object.display();
    Account yousuf = Account(2, "Yousuf", Savings);
    yousuf.display();

    ifstream fin;
    Account file(fin);
    file.display();
    return 0;
}


