// Array.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
   // std::cout << "Hello World!\n";
	int Arr[6];
	
	for (int i = 0; i < 6; i++)
	{
		Arr[i] = 2;
	}
	int* prt = Arr;
	*(int*)((char*)prt + 8) = 6;
	std::cin.get();
	int* arrlist = new int[6];

	delete[] arrlist;
}

