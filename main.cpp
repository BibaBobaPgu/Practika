#include "Header.h"

#include "fio.h"
#include "university.h"

int main() {

	setting();

	fio();

	_getch();
	
	university();

	_getch();

    return 0;
}

void setting() {
	setlocale(0, "Rus");
	system("mode 120,50");
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsole, &csbi);
	csbi.dwSize.Y = 500;
	SetConsoleScreenBufferSize(hConsole, csbi.dwSize);
}

void fio() {

	cout << "\n\n===========================================\n\n";

	Fio* fio = new Fio();

	cout << "\n\n Введите данные классов ФИО-1 и ФИО-2:\n\n";

	fio->input();

	cout << "\n===========================================\n";

	cout << "\n Класс ФИО-1:\n";
	fio->output();

	cout << "\n===========================================\n";

	Fio* fio2 = new Fio(fio);

	cout << "\n\n Класс ФИО-2:\n";
	fio2->output();

	delete fio;
	delete fio2;

	cout << "\n\n===========================================\n";

	fio = new Fio("Пчелинцев", "Алексей", "Ильич");

	cout << "\n\n Класс ФИО-3:\n";
	fio->output();

	delete fio;

	cout << "\n\n===========================================\n";

	Fio* fio3 = new Fio[5];

	cout << "\n\n Введите данные массива классов ФИО-4:\n";

	for (int i = 0; i < 5; i++) {
		cout << "\n Класс - " << i + 1 << endl;
		fio3[i].input();
	}

	cout << "\n\n===========================================\n";
	cout << "\n Массив классов ФИО-4:\n";

	for (int i = 0; i < 5; i++) {
		cout << "\n Класс - " << i + 1;
		fio3[i].output();
	}

	delete[] fio3;

	cout << "\n\n===========================================\n";

}

void university() {

	cout << "\n\n===========================================\n\n";

	University* university = new University();

	cout << "\n\n Введите данные классов ВУЗ-1 и ВУЗ-2:\n\n";

	university->input();

	cout << "\n===========================================\n";

	cout << "\n Класс ФИО-1:\n";
	university->output();

	cout << "\n===========================================\n";

	University* fio2 = new University(university);

	cout << "\n\n Класс ФИО-2:\n";
	fio2->output();

	delete university;
	delete fio2;

	cout << "\n\n===========================================\n";

	university = new University("Россия", "Пенза", "Красная 40");

	cout << "\n\n Класс ВУЗ-3:\n";
	university->output();

	delete university;

	cout << "\n\n===========================================\n";

	University* fio3 = new University[5];

	cout << "\n\n Введите данные массива классов ВУЗ-4:\n";

	for (int i = 0; i < 5; i++) {
		cout << "\n Класс - " << i + 1 << endl;
		fio3[i].input();
	}

	cout << "\n\n===========================================\n";
	cout << "\n Массив классов ВУЗ-4:\n";

	for (int i = 0; i < 5; i++) {
		cout << "\n Класс - " << i + 1;
		fio3[i].output();
	}

	delete[] fio3;

	cout << "\n\n===========================================\n";

}


