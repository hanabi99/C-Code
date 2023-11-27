// Virtual.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;

class Printable
{
public:
	virtual void GetObjName() = 0;//接口 纯虚函数
};

class Entity : public Printable
{
public:
   virtual string GetName() { return "Entity"; }
   void GetObjName() override { cout << "Entity" << endl; }

private:

};

class Player : public Entity, public Printable
{
private:
	string m_name;
public:
	Player(const string& name) :
		m_name(name) {}

	string GetName() override { return "Player"; }
	void GetObjName() override { cout << "Player" << endl; }
};

void PrintName(Entity* entity) {
	cout << entity->GetName() << endl;
}
void PrintableName(Printable* printable) {
	printable->GetObjName();
}

int main()
{
	Entity* e = new Entity();
	cout << e->GetName() << endl;
	Player* p = new Player("THC");
	cout << p->GetName() << endl;

	/*Entity* entity = p;
	cout << entity->GetName() << endl;*/

	PrintName(p);
	cout << "---------------" << endl;

	PrintableName(e);
	PrintableName(p);
	cin.get();

}
