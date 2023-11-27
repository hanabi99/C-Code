

#include <iostream>
//#define struct class

class Player {

public:
	int ax;
	int ay;
	//Player player;

	void Muti() {
		std::cout << ax * ay<< std::endl;
	}
};
struct MyStruct : Player
{

	int x;
	int y;
	//MyStruct myStruct;

	void Muti() {
		x* y;
		std::cout << x * y << std::endl;
		std::cout << ax * ay << std::endl;
	}
};

int main()
{
	std::cout << "Hello World!\n";
	Player player;
	player.ax = 1;
	player.ay = 2;
	player.Muti();
	MyStruct mystruct;
	mystruct.Muti();
	std::cin.get();
}

