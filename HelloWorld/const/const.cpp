#include <iostream>
class Entity {
private:
    int* m_X;
public:
    int* GetX()  const {
        //如果方法后有const则不能修改 类里面的内容 但是指针类型没事
        *m_X = 2;
        //如果是 const int* const getX（） const 按理说是内容和指向都不能改 但是实践来看只有指向不能改 内容可以改
        return m_X;
    }
};

int main()
{
    const int Age = 10;
    int* point = new int;
    *point = 2;
    point = (int*)&Age;
    std::cout << *point << std::endl;

    const int Age2 = 10;

    int* point2 = new int;
    //int const* point2 = new int;//常量的指针 说明常量内容不能改 但是指针的指向可以改
    //const int* point2 = new int;//与  int const* point2 = new int;相同，可以修改指针本身 但是不能修改指针指向的内容
    //int* const point2 = new int; // 指针的常量 不能更改指针本身 但能更改指针指向的内容
    //const  int* const point2 = new int;//说明两者我都不能该
    *point2 = 2;
    point2 = (int*)&Age;
    std::cout << *point << std::endl;

    //Entity* e = new Entity();
   // std::cout << *(e -> GetX()) << std::endl;




}