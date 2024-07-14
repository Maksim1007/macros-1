//Препроцессорные дерективы.
//Задание 1

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
	std::cout << "Работаю в тестовом режиме" << std::endl;
#elif MODE == 1
	std::cout << "Работаю в боевом режиме" << std::endl;
#define add(a, b) a + b
	std::cout << " Введите первое число: ";
	std::cin >> a;
	std::cout << " Введите второе число: ";
	std::cin >> b;
	std::cout << " Результат сложения: " << add(a, b) << std::endl;
#else
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
}