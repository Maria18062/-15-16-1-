#include <iostream>
#include <fstream> // для роботи з файлами
#include <cmath> // для обчислення квадратів
#include <Windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Відкриваємо файл chusla.txt для читання
	ifstream inputFile("chusla.txt");
	// Перевіряємо, чи файл успішно відкрився
	if (!inputFile) {
		cerr << "Не вдалося відкрити файл chusla.txt" << endl;
		return 1;
	}
	int number; // Змінна для зчитування чисел з файлу
	int sumOfSquares = 0; // Змінна для суми квадратів додатних чисел
	// Читання даних з файлу
	while (inputFile >> number) {
		// Перевіряємо, чи число додатне
		if (number > 0) {
			// Додаємо квадрат числа до загальної суми
			sumOfSquares += pow(number, 2);
		}
	}
	// Закриваємо файл
	inputFile.close();
	// Виводимо результат
	cout << "Сума квадратів додатних чисел: " << sumOfSquares << endl;
	return 0;
}