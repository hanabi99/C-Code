// string.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

using namespace std;

void PrintString(const std::string& string) {

    std::cout << string << std::endl;
}

int main()
{
    int arr[4];
    // std::cout << "Hello World!\n";
    const char* name = "THC";
    char name2[3] = { 'T','H','C' };
    char* name3 = new char[2];
    std::string  sex = "woman" + std::string("22");
    std::cout << sex << std::endl;


    bool contains = sex.find("C") != std::string::npos;

    PrintString("333");

    int a = 10;
    const int& con_b = a;
    cout << con_b << endl;

    a = 20;
    cout << con_b << endl;

    //  const char*代表的是指针 const不可读 能存储字符串 其实本质上还是char数组只不过他是指针指向内存地址
    //  string其实本质也是char数组只不过封装了一些函数
    //  总而言之 他们的使用的本质其实相同只不过类型不同 内存分配不同 和封装不同
    //字符串字面量是只读 永远   ！

    ///字符串字面量
    //\0会终止字符串 字符串指针只能设置为只读const
    const string name = "t\0hcc";
    char name2[3];
    //实际上char数组变量能改的原理 也是先生成了一个只读字面量 然后赋值给数组 在更改具体位置
    std::cout << strlen(name) << std::endl;
    const wchar_t* name = L"thcc"; //根据平台决定大小 2或4 win is 2 宽字符串
    const char32_t* name = U"thcc";//4byte
    const char16_t* name = u"thcc"; //2byte

    using namespace std::string_literals;//语法糖
    std::string name0 = "thcc"s + "aaa";
    std::u32string name1 = U"sa"s + U"2";
    std::wstring name2 = L"sss"s + L"aaa";
}