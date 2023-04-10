/**
 * @file DiscountDemo1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculation discounting price of product
 * @version 0.1
 * @date 2023-04-10
 * @since Monday; 07:41 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#pragma pack(1)
using namespace std;

const double discount(const double &price, const double &percentage){

    return (price * (100 - percentage)/100);
}

int main(int argc, const char *const argv[]){
    system("cls");

    cout<<fixed;
    cout.precision(2);
    double price{};
    double percentOff{};
    cout<<"Enter price of product: ";
    cin>>price;
    cout<<"Enter percent off(%): ";
    cin>>percentOff;

    double sale{discount(price, percentOff)};
    cout<<"Sold price: #"<<sale<<"$"<<endl;

    constexpr const char smilee{2};
	cout<<setw(50)<<setfill(smilee)<<right<<"HappyEnding...!"<<endl;
	
	system("pause>0");

    return 0;
}