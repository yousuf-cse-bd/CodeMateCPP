/**
 * @file WrapperFunctionCallBack1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Clone JavaScript callback function using function pointer
 * @version 0.1
 * @date 2023-04-26
 * @since WednesDay; 09:37 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#pragma pack(1)
using namespace std;

void display(const int &result){
	cout<<"The result: "<<result<<endl;
}

/*Function overloading*/
int calculator(const int &number1, const int &number2, void(*callBack)(const int &result)){
	if(callBack){
		display(number1 + number2);
	}
	return (number1 + number2);
}
/*Function overloading*/
int calculator(const int &number1, const int &number2){
	return (number1 + number2);
}


int main(int argc, char const *argv[]){
    /* code */
    system("cls");

	calculator(10, 15, display);
	display(calculator(10, 15));

    constexpr const char smilee{2};
	cout<<setw(50)<<setfill(smilee)<<right<<"HappyEnding...!"<<endl;
	
	system("pause>0");
    return 0;
}
