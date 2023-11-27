// Extend.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class MyClass
{
public:
	int PosX;
	int PosY;
	MyClass()
	{

	};
	MyClass(int posx,int posy) {
		PosX = posx;
		PosY = posy;
	};
	~MyClass() {

	};


	void Move(int xa,int ya) {
		PosX += xa;
		PosY += ya;
	};
private:

};


class MyClass2 : public MyClass
{
public:

	const  char* name1 = "1111";

	MyClass2(int posx, int posy){
		PosX = posx;
		PosY = posy;
	};

	void Print() {
		std::cout << name1 << std :: endl;
	}
private:

};




int main()
{
	
	MyClass2 my(1,2);
	my.Print();
	MyClass my1(2, 2);
	MyClass* my2 = new MyClass(2, 2);

	my1.Move(1,1);
	my.Print();
	std::cout << sizeof(MyClass2) << std::endl;
	std::cout << my1.PosX << std::endl;
}

