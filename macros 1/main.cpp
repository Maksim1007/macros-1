//��������������� ���������.
//������� 1

#include <iostream>
#ifdef MODE
#error "The value of MODE is undefined"
#endif
#define MODE 1  
#if MODE == 0
#elif MODE == 1
#else
#endif

int main(int argv, char** argc)
{ 
	setlocale(LC_ALL, "Russian");
	int a, b;
#if MODE == 0
	std::cout << "������� � �������� ������" << std::endl;
#elif MODE == 1
	std::cout << "������� � ������ ������" << std::endl;
#define add(a, b) a + b
	std::cout << " ������� ������ �����: ";
	std::cin >> a;
	std::cout << " ������� ������ �����: ";
	std::cin >> b;
	std::cout << " ��������� ��������: " << add(a, b) << std::endl;
#else
	std::cout << "����������� �����. ���������� ������" << std::endl;
#endif
}