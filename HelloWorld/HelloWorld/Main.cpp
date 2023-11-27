#include <iostream>

int Math(int a, int b);
void InitLog();
int main()
{
	//std::cout << "Hello World!" << std::endl;
	
	InitLog();
	//int a = Math(1, 2);
	const char* c = "1";
	constexpr int a = 10;
	int arr[a];
	std::cout << a << std::endl;

	/*int i = 0;
	do
	{
		std::cout << i++ << std::endl;
	} while (i < 5);
	std::cin.get();*/

};
constexpr int sqr1(int arg) {
	return arg * arg;
}
const int sqr2(int arg) {
	return arg * arg;
}
