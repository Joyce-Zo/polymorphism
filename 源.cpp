#include<iostream>
using namespace std;
#include<string>

//// ��̬��������
//
////class Animal
////{
////public:
////	virtual void dodif() // �麯������ַ���
////	{
////		cout << "����" << endl;
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
////		cout << "С��" << endl;
////	}
////};
////void dodif(Animal &animal) // Animal &animal = ���ഫ���Ķ���;
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
//// ����һ��2�ַ���ʵ�ּ�����
//// ��ͨ����
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
//// ��̬�ķ���
//
//class caculator_abstract // ������������
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
//class Add:public caculator_abstract  // �ӷ� Addition
//{
//	int getResult()
//	{
//		return num1 + num2;
//	}
//}; 
//class Sub :public caculator_abstract // ���� subtraction
//{
//	int getResult()
//	{
//		return num1 - num2;
//	}
//};
//class Mul :public caculator_abstract // �˷� multiplication
//{
//	int getResult()
//	{
//		return num1 * num2;
//	}
//};
//class Div :public caculator_abstract // ���� division
//{
//	int getResult()
//	{
//		return num1 / num2;
//	}
//};
//void test02()
//{
//	// ��̬��ʹ�÷�����
//	//����ָ����������������
//	caculator_abstract* c = new Add; // �ӷ�����
//	c->num1 = 10;
//	c->num2 = 5;
//	cout << c->getResult() << endl;
//	delete c;// ���������ݣ��ǵ�����
//
//	c = new Sub;
//	c->num1 = 10;
//	c->num2 = 5;
//	cout << c->getResult() << endl; // ��������
//	delete c;
//
//	c = new Mul;
//	c->num1 = 10;
//	c->num2 = 5;
//	cout << c->getResult() << endl; // �˷�����
//	delete c;
//
//	c = new Div;
//	c->num1 = 10;
//	c->num2 = 5;
//	cout << c->getResult() << endl; // ��������
//	delete c;
//}
//int main()
//{
//	test02();
//	return 0;
//}


// ���麯���������

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
//		cout << "Son_func�ĵ���" << endl;
//	}; // ��д
//};
//
//void test01()
//{
//	/*Base b;
//	new Base;*/
//
//	Son s;
//	s.func();
//	 // ��̬�ķ�����
//	Base* base = new Son;
//	base->func();
//}
//int main()
//{
//	test01();
//	return 0;
//}

// ������Ʒ

//class AbstactDrinking // ���������Ʒ
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
//class tea :public AbstactDrinking // ��ľ���ʵ��
//{
//public:
//	virtual void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	virtual void Pour()
//	{
//		cout << "���뱭��" << endl;
//	}
//	virtual void Put() 
//	{
//		cout << "������" << endl;
//	}
//};
//class coffee :public AbstactDrinking // ���ȵľ���ʵ��
//{
//public:
//	virtual void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//	virtual void Pour()
//	{
//		cout << "���뱭��" << endl;
//	}
//	virtual void Put()
//	{
//		cout << "������ţ��" << endl;
//	}
//};
//void doDrinking(AbstactDrinking* abd)
//{
//	abd->makeDriking();
//	delete abd; // new���Ķ������ݣ��ǵ�����
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

// �������봿������

//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal�Ĺ���" << endl;
//	}
//	//virtual ~Animal() // ������
//	//{
//	//	cout << "Animal������" << endl;
//	//}
//	virtual ~Animal() = 0; // ��������
//
//	virtual void speak() = 0; // �麯��
//};
//Animal::~Animal() // ����������ʵ��
//{
//	cout << "Animal�Ĵ�������" << endl;
//}
//class Cat:public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat�Ĺ���" << endl;
//		c_name = new string(name); // ����������Ӧ���ͷ�
//	}
//	virtual void speak()
//	{
//		cout << *c_name << "Сè" << endl;
//	}
//	string *c_name;
//
//	~Cat()
//	{
//		if (c_name != NULL)
//		{
//			cout << "Cat������" << endl;
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

// ʵ��3 ������װ

class CPU
{
public:
	// ������㺯��
	virtual void calculate() = 0;
};
class GraphicsCard
{
public:
	// ������ʾ����
	virtual void display() = 0;
};
class Memory
{
public:
	// ����洢����
	virtual void storage() = 0;
};

// �������ʵ��
class Computer
{
public:
	Computer(CPU* cpu, GraphicsCard* gpu, Memory* ram)
	{
		c_cpu = cpu;
		c_gpu = gpu;
		c_ram = ram;
	}
	void dowork() // �����ӿ�
	{
		c_cpu->calculate();
		c_gpu->display();
		c_ram->storage();
	}
	~Computer()
	{
		if (c_cpu != NULL) // �ͷ�cpu
		{
			delete c_cpu;
			c_cpu = NULL;
		}
		if (c_gpu != NULL) // �ͷ�gpu
		{
			delete c_gpu;
			c_gpu = NULL;
		}
		if (c_ram!= NULL) // �ͷ�ram
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

// �����������
// 1��Inter
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
// 2��lenovo
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
	////// ������һ̨���Ե����
	////CPU* interCpu = new InterCPU;
	////GraphicsCard* interGpu = new InterGPU;
	////Memory* interRam = new InterRAM;
	////// ������һ̨����
	////Computer* computer1 = new Computer(interCpu, interGpu, interRam);
	////computer1->dowork(); // ���ù�������
	////delete computer1;

		// �����ڶ�̨���Ե����
	//CPU* lenovoCpu = new LenovoCPU;
	//GraphicsCard* lenovoGpu = new LenovoGPU;
	//Memory* lenovoRam = new LenovoRAM;
	//// �����ڶ�̨����
	//Computer* computer2 = new Computer(lenovoCpu, lenovoGpu, lenovoRam);
	//computer2->dowork(); // ���ù�������
	//delete computer2;

	// ��������̨���Ե����
	CPU* InterCpu = new InterCPU;
	GraphicsCard* InterGpu = new InterGPU;
	Memory* lenovoRam = new LenovoRAM;
	// ��������̨����
	Computer* computer3 = new Computer(InterCpu, InterGpu, lenovoRam);
	computer3->dowork(); // ���ù�������
	delete computer3;
}
int main()
{
	test01();
	return 0;
}