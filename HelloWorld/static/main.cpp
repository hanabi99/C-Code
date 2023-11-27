#include <iostream>
#include "static.h"
 extern int var ;

 struct Mystruk {
    static int a;
    const static int b;
    int c = 1;
    static void Print() {
         std::cout << a << ","<< b << std::endl;
     }

 };
 int Mystruk::a;
 //int Mystruk::b;
 int Mystruk3::var = 1;
 extern int var =2;

int main()
{
    Mystruk mystruk;
    Mystruk::a = 1;
    

    Mystruk mystruk2;
    Mystruk::a = 3;
   // Mystruk::b = 4;

    Mystruk::Print();
   // Mystruk::Print();
    Mystruk3::var = 6;
    std::cout << Mystruk3::var << std::endl;
    std::cin.get();
}