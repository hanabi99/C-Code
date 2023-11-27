// 初始化列表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;
class Example {
public :
	Example() {
		cout << "Created entity" << std::endl;
	}

	Example(int value) {
		cout << "Created entity" + string("x") << std::endl;
	}

};

class Entity {

private:
	string m_name;
	int x, y, z;
	Example e;//虽然是变量也会执行构造函数因为实例化了
public:
	Entity() : e(8){ //初始化列表只允许初始化一次 而构造函数可以重复赋值 所以初始化列表是真真正正的初始化
		m_name = string("Unkown");
		//e = Example(8);  如果在构造函数初始化 那么会把之前实例化的e覆盖
	}

	Entity(const string& name, int x, int y, int z) :
		m_name(name),
		x(x),
		y(y),
		z(z)
	{

	}

	void  GetName() {
		std::cout << m_name << x << y << z << endl;
	}
};

int main()
{
	Entity entity1;
	//Entity entity2("thc", 1, 2, 3);
	//entity1.GetName();
	//entity2.GetName();
	

}


