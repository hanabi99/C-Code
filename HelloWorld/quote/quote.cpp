// quote.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

void test(int& value) {
    (value)++;
}
/// <summary>
/// refrence
/// </summary>
/// <returns></returns>
int main()
{
    std::cout << "Hello World!\n";
    int a = 5;
    int& ref = a;
    int* apoint = &a;
    std::cout << *apoint << std::endl;
    test(ref);
    std::cout << ref << std::endl;
    std::cin.get();
}




