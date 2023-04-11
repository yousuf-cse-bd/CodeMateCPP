/**
 * @file PhonBookUsingStruct1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Create simple phonebook directory using structure and deque
 * @version 0.1
 * @date 2023-04-11
 * @since TuesDay; 10:46 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <deque>
#pragma pack(1)
using namespace std;

struct PhoneBook{
	string name{};
	string number{};
};

/*Using linear searching algorithm*/
void searchingContact(const deque <PhoneBook> &myPhoneBook){
	for(size_t i {0}; i < myPhoneBook.size(); i++){
		if(myPhoneBook.at(i).name == "ali"){
			cout<<"The name: "<<myPhoneBook.at(i).name<<endl;
			cout<<"The number: "<<myPhoneBook.at(i).number<<endl;
			return;
		}
	}
	cout<<"Not found..!"<<endl;
	return;
}

int main(int argc, const char *const argv[]){
    system("cls");
	cout<<setprecision(2)<<fixed;
	
	deque <PhoneBook> myPhoneBook{};
	myPhoneBook.emplace_back(PhoneBook{"yousuf", "121"});
	myPhoneBook.emplace_back(PhoneBook{"ali", "555"});
	myPhoneBook.emplace_back(PhoneBook{"maruf", "015"});
	myPhoneBook.emplace_back(PhoneBook{"tamim", "016"});
	
	myPhoneBook.shrink_to_fit(); /*Memory optimization*/
	
	for_each(myPhoneBook.cbegin(), myPhoneBook.cend(), 
		[](const auto &x){
			cout<<"[ "<<x.name<<" : "<<x.number<<" ]"<<endl;
		}
	);
	
	cout<<setw(50)<<setfill('-')<<""<<endl;
	
	searchingContact(myPhoneBook);
	
	constexpr const char smilee{2};
	cout<<setw(50)<<setfill(smilee)<<right<<"HappyEnding...!"<<endl;
	
	system("pause>0");
};