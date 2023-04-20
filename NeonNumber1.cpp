/**
 * @file NeonNumber1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Check Neon number or not
 * @version 0.1
 * @date 2023-04-20
 * @since ThursDay; 09:25 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#pragma pack(1)
using namespace std;

bool isNeonNumber(const int &number = 9){
    int square{number * number};
    int sum{0};

    while(square > 0){
        sum +=square % 10;
        square /= 10;
    }
    cout<<"Sum: "<<sum<<endl;
    if(sum == number){
        return true;
    }
    else{
        return false;
    }
}

int main(int argc, const char *const argv[]){
    cout<<(isNeonNumber(9)?"Neon number":"Not Neon number")<<endl;
    constexpr const char smilee{2};
	cout<<setw(50)<<setfill(smilee)<<right<<"HappyEnding...!"<<endl;
	
	system("pause>0");
    return 0;
}