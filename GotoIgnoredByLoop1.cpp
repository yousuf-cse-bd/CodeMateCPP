/**
 * @file GotoIgnoredByLoop1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Don't use goto statement for you and another developers
 * @version 0.1
 * @date 2023-04-10
 * @since MonDay; 08:03 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#pragma pack(1)
using namespace std;

int main(int argc, const char *const argv[]){
    system("cls");
	cout<<setprecision(2)<<fixed;
	
	int n{};
	input:
		cout<<"Enter nth value here: ";
		cin>>n;
		if(n < 1) goto input;
		
	cout<<"Final(goto): "<<n<<endl;
	cout<<setw(50)<<setfill('-')<<""<<endl;
	
	do{
		cout<<"Enter nth value here: ";
		cin>>n;
	}while(n < 1);
	cout<<"Final(do-while): "<<n<<endl;

	constexpr const char smilee{2};
	cout<<setw(50)<<setfill(smilee)<<right<<"HappyEnding...!"<<endl;
	
	system("pause>0");
};