/**
 * @file PureDestructor.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief C++ just provide pure function, destructor(must write definition)
 * @version 0.1
 * @date 2023-03-02
 * @since ThursDay; 07:47
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class BaseClass{
public:
	BaseClass(){
		cout<<"Default constructor for BaseClass."<<endl;
	}
	virtual ~BaseClass() = 0; /*Pure Destructor*/
};
/*Pure derstructor definition*/
BaseClass ::~BaseClass(){
	cout<<"~Destructor for BaseClass."<<endl;
}

class Derived: public BaseClass{
public:
	Derived(){
		cout<<"Default constructor for DerivedClass."<<endl;
	}
	
	virtual ~Derived(){
		cout<<"~Destructor in DerivedClass..."<<endl;
	}
};

const void simpleFuncton(void){
	Derived d1{};
	BaseClass *ptrB1{&d1};
	ptrB1 = nullptr;
}
int main(int argc, const char *const argv[]){
	simpleFuncton();
	cout<<"----------------------------------------------"<<endl;
	
	BaseClass *b1 = new Derived{};
	
	delete b1;
	b1 = nullptr;
	
	cout<<"----------------------------------------------"<<endl;
	Derived *d2 = new Derived{};
	delete d2;
	d2 = nullptr;
	
	cout<<"\t\t\tHappyEnding...!"<<endl;
	return 0;
}
