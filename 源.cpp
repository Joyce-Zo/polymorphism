#include<iostream>
using namespace std;
#include<string>

//// 多态基本概念
//
////class Animal
////{
////public:
////	virtual void dodif() // 虚函数，地址晚绑定
////	{
////		cout << "动物" << endl;
////	}
////};
////class Cat : public Animal
////{
////public:
////
////};
////class Dog : public Animal
////{
////public:
////	void dodif()
////	{
////		cout << "小狗" << endl;
////	}
////};
////void dodif(Animal &animal) // Animal &animal = 子类传来的对象;
////{
////	animal.dodif();
////}
////void test01()
////{
////	Cat cat;
////	dodif(cat);
////	Dog dog;
////	dodif(dog);
////}
////void test02()
////{
////	cout << sizeof(Animal) << endl;
////}
////
////int main()
////{
////	//test01();
////	test02();
////	return 0;
////}
//
//// 案例一：2种方法实现计算器
//// 普通方法
//
//class caculator
//{
//public:
//	int getResult()
//	{
//		cin >> num1 >> oper >> num2;
//		if (oper == "+")
//		{
//			return num1 + num2;
//		}
//		else if (oper == "-")
//		{
//			return num1 - num2;
//		}
//		else if (oper == "*")
//		{
//			return num1 * num2;
//		}
//	}
//	string oper;
//	int num1;
//	int num2;
//};
//void test01()
//{
//	caculator c;
//	int ret = c.getResult();
//	cout << ret << endl;
//}
//
//// 多态的方法
//
//class caculator_abstract // 计算器抽象类
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	int num1;
//	int num2;
//};
//
//class Add:public caculator_abstract  // 加法 Addition
//{
//	int getResult()
//	{
//		return num1 + num2;
//	}
//}; 
//class Sub :public caculator_abstract // 减法 subtraction
//{
//	int getResult()
//	{
//		return num1 - num2;
//	}
//};
//class Mul :public caculator_abstract // 乘法 multiplication
//{
//	int getResult()
//	{
//		return num1 * num2;
//	}
//};
//class Div :public caculator_abstract // 除法 division
//{
//	int getResult()
//	{
//		return num1 / num2;
//	}
//};
//void test02()
//{
//	// 多态的使用方法：
//	//父类指针或者引用子类对象
//	caculator_abstract* c = new Add; // 加法调用
//	c->num1 = 10;
//	c->num2 = 5;
//	cout << c->getResult() << endl;
//	delete c;// 堆区的数据，记得销毁
//
//	c = new Sub;
//	c->num1 = 10;
//	c->num2 = 5;
//	cout << c->getResult() << endl; // 减法调用
//	delete c;
//
//	c = new Mul;
//	c->num1 = 10;
//	c->num2 = 5;
//	cout << c->getResult() << endl; // 乘法调用
//	delete c;
//
//	c = new Div;
//	c->num1 = 10;
//	c->num2 = 5;
//	cout << c->getResult() << endl; // 除法调用
//	delete c;
//}
//int main()
//{
//	test02();
//	return 0;
//}


// 纯虚函数与抽象类

//class Base
//{
//public:
//	virtual void func() = 0;
//};
//
//class Son :public Base
//{
//public:
//	virtual void func() 
//	{
//		cout << "Son_func的调用" << endl;
//	}; // 重写
//};
//
//void test01()
//{
//	/*Base b;
//	new Base;*/
//
//	Son s;
//	s.func();
//	 // 多态的方法：
//	Base* base = new Son;
//	base->func();
//}
//int main()
//{
//	test01();
//	return 0;
//}

// 制作饮品

//class AbstactDrinking // 抽象类的饮品
//{
//public:
//	virtual void Boil() = 0;
//	virtual void Brew() = 0;
//	virtual void Pour() = 0;
//	virtual void Put() = 0;
//	void makeDriking()
//	{
//		Boil();
//		Brew();
//		Pour();
//		Put();
//	}
//};
//class tea :public AbstactDrinking // 茶的具体实现
//{
//public:
//	virtual void Boil()
//	{
//		cout << "煮水" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//	virtual void Pour()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	virtual void Put() 
//	{
//		cout << "加柠檬" << endl;
//	}
//};
//class coffee :public AbstactDrinking // 咖啡的具体实现
//{
//public:
//	virtual void Boil()
//	{
//		cout << "煮水" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//	virtual void Pour()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	virtual void Put()
//	{
//		cout << "加糖与牛奶" << endl;
//	}
//};
//void doDrinking(AbstactDrinking* abd)
//{
//	abd->makeDriking();
//	delete abd; // new出的堆区数据，记得销毁
//}
//void test01()
//{
//	doDrinking(new tea);
//	cout << "-----------------" << endl;
//	doDrinking(new coffee);
//}
//int main()
//{
//	test01();
//	return 0;
//}

// 虚析构与纯虚析构

//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal的构造" << endl;
//	}
//	//virtual ~Animal() // 虚析构
//	//{
//	//	cout << "Animal的析构" << endl;
//	//}
//	virtual ~Animal() = 0; // 纯虚析构
//
//	virtual void speak() = 0; // 虚函数
//};
//Animal::~Animal() // 纯虚析构的实现
//{
//	cout << "Animal的纯虚析构" << endl;
//}
//class Cat:public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat的构造" << endl;
//		c_name = new string(name); // 堆区创建，应有释放
//	}
//	virtual void speak()
//	{
//		cout << *c_name << "小猫" << endl;
//	}
//	string *c_name;
//
//	~Cat()
//	{
//		if (c_name != NULL)
//		{
//			cout << "Cat的析构" << endl;
//			delete c_name;
//			c_name = NULL;
//		}
//	}
//};
//void test01()
//{
//	Animal* animal = new Cat("yomi");
//	animal->speak();
//	delete animal;
//}
//int main()
//{
//	test01();
//	return 0;
//}

// 实例3 电脑组装

class CPU
{
public:
	// 抽象计算函数
	virtual void calculate() = 0;
};
class GraphicsCard
{
public:
	// 抽象显示函数
	virtual void display() = 0;
};
class Memory
{
public:
	// 抽象存储函数
	virtual void storage() = 0;
};

// 电脑类的实现
class Computer
{
public:
	Computer(CPU* cpu, GraphicsCard* gpu, Memory* ram)
	{
		c_cpu = cpu;
		c_gpu = gpu;
		c_ram = ram;
	}
	void dowork() // 工作接口
	{
		c_cpu->calculate();
		c_gpu->display();
		c_ram->storage();
	}
	~Computer()
	{
		if (c_cpu != NULL) // 释放cpu
		{
			delete c_cpu;
			c_cpu = NULL;
		}
		if (c_gpu != NULL) // 释放gpu
		{
			delete c_gpu;
			c_gpu = NULL;
		}
		if (c_ram!= NULL) // 释放ram
		{
			delete c_ram;
			c_ram = NULL;
		}
	}
private:
	CPU* c_cpu;
	GraphicsCard* c_gpu;
	Memory* c_ram;
};

// 具体零件厂商
// 1、Inter
class InterCPU :public CPU
{
	virtual void calculate()
	{
		cout << "Inter_CPU" << endl;
	}
};
class InterGPU :public GraphicsCard
{
	virtual void display()
	{
		cout << "Inter_GPU" << endl;
	}
};
class InterRAM :public Memory
{
	virtual void storage()
	{
		cout << "Inter_RAM" << endl;
	}
};
// 2、lenovo
class LenovoCPU :public CPU
{
	void calculate()
	{
		cout << "Lenovo_CPU" << endl;
	}
};
class LenovoGPU :public GraphicsCard
{
	void display()
	{
		cout << "Lenovo_GPU" << endl;
	}
};
class LenovoRAM :public Memory
{
	void storage()
	{
		cout << "Lenovo_RAM" << endl;
	}
};
void test01()
{
	////// 创建第一台电脑的零件
	////CPU* interCpu = new InterCPU;
	////GraphicsCard* interGpu = new InterGPU;
	////Memory* interRam = new InterRAM;
	////// 创建第一台电脑
	////Computer* computer1 = new Computer(interCpu, interGpu, interRam);
	////computer1->dowork(); // 调用工作函数
	////delete computer1;

		// 创建第二台电脑的零件
	//CPU* lenovoCpu = new LenovoCPU;
	//GraphicsCard* lenovoGpu = new LenovoGPU;
	//Memory* lenovoRam = new LenovoRAM;
	//// 创建第二台电脑
	//Computer* computer2 = new Computer(lenovoCpu, lenovoGpu, lenovoRam);
	//computer2->dowork(); // 调用工作函数
	//delete computer2;

	// 创建第三台电脑的零件
	CPU* InterCpu = new InterCPU;
	GraphicsCard* InterGpu = new InterGPU;
	Memory* lenovoRam = new LenovoRAM;
	// 创建第三台电脑
	Computer* computer3 = new Computer(InterCpu, InterGpu, lenovoRam);
	computer3->dowork(); // 调用工作函数
	delete computer3;
}
int main()
{
	test01();
	return 0;
}