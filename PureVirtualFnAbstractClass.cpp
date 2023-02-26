/**
 * @file: PureVirtualFnAbstractClass.cpp
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief:Polymorphism: Pure virtual functions and makeing abstraction classes
 * @version: 0.1
 * @date: 2023-02-26
 * @since: SunDay; 09:33 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#pragma pack(1)
using namespace std;
/*Abstract base class, no object creation*/
class Shape{
public:
	virtual void draw(void) const = 0; /*Pure virtual function*/
	virtual void rotate(void) const = 0;/*Pure virtual function*/
	virtual ~Shape(){
//		cout<<"\t\tThis is SHAPE class."<<endl;
	}
};
/*Abstract class*/
class OpenShape : public Shape{
public:
	OpenShape() = default;
	~OpenShape() = default;
};
/*Abstract class*/
class CloseShape : public Shape{
public:
	CloseShape() = default;
	~CloseShape() = default;
};

class Line: public OpenShape{ /*Concrete class*/
public:
	Line() = default;
	virtual void draw(void) const override{
		cout<<"In Line:: draw() Drawn."<<endl;
	}
	virtual void rotate(void) const override{
		cout<<"In Line:: rotate() Rotation."<<endl;
	}
	virtual ~Line() = default;
};

class Circle : public CloseShape{ /*Concrete class*/
public:
	Circle() = default;
	virtual void draw(void) const override{
		cout<<"In Circle:: draw() Drawn."<<endl;
	}
	virtual void rotate(void) const override{
		cout<<"In Circle:: rotate() Rotation."<<endl;
	}
	virtual ~Circle() = default;
};

class Square : public CloseShape{ /*Concrete class*/
public:
	Square() = default;
	virtual void draw(void) const override{
		cout<<"In Square:: draw() Drawn."<<endl;
	}
	virtual void rotate(void) const override{
		cout<<"In Square:: rotate() Rotation."<<endl;
	}
	virtual ~Square() = default;
};

const void screenRefresh(const vector <Shape*> &shapes){
	cout<<"*******Refreshing*******"<<endl;
	for(const auto &object: shapes){
		object->draw();
		object->rotate();
	}
}

int main(int argc, const char **const argv){
	cout<<"*****Unsing Pointer******"<<endl;
	Shape *shape1 {new Line{}};
	Shape *shape2 {new Circle{}};
	Shape *shape3 {new Square{}};
	
	if(shape1){
		shape1->draw(); /*Line drawing*/
		shape1->rotate(); /*Line rotating*/
	}
	else{
		cout<<"Memory allocation NOT done for Line!"<<endl;
	}
	
	if(shape2){
		shape2->draw(); /*Circle drawing*/
		shape2->rotate(); /*Circle rotating*/
	}
	else{
		cout<<"Memory allocation NOT done for Circle!"<<endl;
	}
	
	if(shape3){
		shape2->draw(); /*Square drawing*/
		shape2->rotate(); /*Square rotating*/
	}
	else{
		cout<<"Memory allocation NOT done for Square!"<<endl;
	}
	
	delete shape1;
	delete shape2;
	delete shape3;
	shape1 = nullptr;
	shape2 = nullptr;
	shape3 = nullptr;
	
	cout<<"--------------------------------------------"<<endl;
	cout<<"*****UnsigArray*****"<<endl;
	Shape *objectsArray[] {new Line{}, new Circle{}, new Square{}};
	if(*objectsArray){
		for(const auto &object: objectsArray){
			object->draw();
			object->rotate();
		}
	}
	else{
		cout<<"Memory allocation NOT done for array!"<<endl;
	}
	for(auto &object: objectsArray){
		delete object;
		object = nullptr;
	}
	
	cout<<"-----------------------------------------------"<<endl;
	cout<<"*****UnsigVector*****"<<endl;
	
	vector <Shape*> objectsVector {new Line{}, new Circle{}, new Square{}};
	for(const auto &object: objectsVector){
		object->draw();
		object->rotate();
	}
	screenRefresh(objectsVector);
	for(auto &object: objectsVector){
		delete object;
		object = nullptr;
	}
	cout<<"\nHappyEnding ";
	for(size_t i{1}; i <= 10; i++){
		printf("%c", 2);
	}
	cout<<endl;
	return 0;
}