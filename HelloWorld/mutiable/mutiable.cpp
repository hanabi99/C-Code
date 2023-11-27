// mutiable.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

class Entity {
private:
	std::string m_Name;
	mutable int m_DebugCount = 1; //在不可更改的情况下 可更改
public:
	const std::string& GetName() const {
		m_DebugCount++;
		return m_Name;
	}
};

#include <iostream>

int main()
{
	std::cout << "Hello World!\n";
	const Entity e;
	e.GetName();
	int x = 8;
	auto f = [=]() mutable {
		//int y = x;
		std::cout << x++ << std::endl;
	};
}

