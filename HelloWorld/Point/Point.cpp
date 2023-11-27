
#include <iostream>

int main()
{
   // std::cout << "Hello World!\n";
	int var = 8;
	int* ptr = &var;
	std::cout << ptr << std::endl;
	*ptr = 10;
	std::cout <<  var << std::endl; //逆向引用获得这个指针指向地址的值 不能为Void

	char* buffer = new char[8];
	memset(buffer, 2, 8);
	int str[8];

	std::cout << "============================" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		int a = (int)*buffer;
		str[i] = a;
		std::cout << str[i] << std::endl;
	}
	std::cout << "============================" << std::endl;
	for (int  i = 0; i < sizeof(str)/ sizeof(int); i++)
	{
		int* p = &str[i];
		*p = 1;
		std::cout << p << std::endl;
		std::cout << *p << std::endl;
	}
	std::cout << "============================" << std::endl;
	std::cout << &str << std::endl;
	std::cout << "============================" << std::endl;
	char** bufferPoint = &buffer;
	std::cout << bufferPoint << std::endl;
				
	//delete[] buffer;
	std::cin.get();
}
