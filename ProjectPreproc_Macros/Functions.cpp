#include <iostream>

void Mode_0() {
	std::cout << "Работаю в режиме тренировки" << std::endl;
};

void Mode_1(int Sum) {
	std::cout << "Работаю в боевом режиме:\nСумма введённых чисел = " << Sum << std::endl;
};

void Mode_() {
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;
};

int Add() {
	int y{ 0 };
	int z{ 0 };

	std::cout << "Введите первое число: ";
	std::cin >> y;
	std::cout << "Введите второе число: ";
	std::cin >> z;

	return y + z;
};