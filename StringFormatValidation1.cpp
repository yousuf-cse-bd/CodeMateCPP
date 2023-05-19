/**
 * @file StringFormatValidation1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief String Format Validation Examole Postal-Code
 * @version 0.1
 * @date 2023-04-19
 * @since FriDay; 09:16 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <iomanip>
#pragma pack(1)
using namespace std;

bool isPostalCode(const string &postalCode){
	constexpr size_t postalCodeLenght {7};
	if(postalCode.length() != postalCodeLenght){
		return false;
	}
	if(!isalpha(postalCode.at(0)) || !isalpha(postalCode.at(2)) ||
		!isalpha(postalCode.at(5))){
		return false;
	}
	if(!isdigit(postalCode.at(1)) || !isdigit(postalCode.at(4)) ||
		!isdigit(postalCode.at(postalCode.length()-1))){
		return false;
	}
	if(postalCode.at(3) != ' '){
		return false;
	}
	
	return true;
} 

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
	
	const string postalCode{"L8K 4B6"};
	cout<<boolalpha;
	cout<<"Postal Code->: "<<postalCode<<": "<<isPostalCode(postalCode)<<endl;
	
	system("pause>0");
    return 0;
}
