#include"Price.h"


int main()
{
	system("color F5");
	setlocale(LC_ALL, "rus");

	// Главное меню
	Cafe t;
	int a;
	while (1) {
		cout << "                       " << "ГЛАВНОЕ МЕНЮ:\n" << "        " << "-1 - выйти из программы\n" << "         " << "0 - просмотреть каталог кафе\n" << "         " << "1 - создать новое кафе\n";

		cin >> a;  system("cls");
		if (!cin)
		{
			cout << "\nОШИБКА! ВВОДИТЕ ТОЛЬКО ЧИСЛА\n";
			exit(1);
		}
		if (a < -1 || a > 1) { cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ\n\n"; continue; }
		if (a == -1) break;
		if (a) t.get_parts();
		else t.catalog();
	}
	return 0;
}
