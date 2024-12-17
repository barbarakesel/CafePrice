#pragma once
#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Saved
{
	vector<vector<string>> sav = {
		{"гриль: Не выбран - 0$\nвытяжку: Era Storm YWF2E 200 - 70$\nхолодильное оборудование: BBK RF-068 - 240$\nпосудомоечную машину: Не выбран - 0$\nпоставщика продуктов: Евроопт - 100$\nОБЩАЯ СТОИМОСТЬ БИЗНЕСА: 410$"},
		{"гриль: GASTRORAG EL-280 - 510$\nвытяжка: Systemair K 100 M Sileo - 160$\nхолодильное оборудование: Не выбран - 0$\nпосудомоечная машина: Не выбран - 0$\nпоставщик продуктов: Корона - 150$\nОБЩАЯ СТОИМОСТЬ БИЗНЕСА: 820$"},
		{"гриль : GASTRORAG EL - 280 - 510$ \nвытяжкa : Era Storm YWF2E 200 - 70$ \nхолодильное оборудование : BBK RF - 068 - 240$\nпосудомоечная машина : ELETTO 500 - 01 / 220 - 1500$\nпоставщик продуктов : Копеечка - 70$\nОБЩАЯ СТОИМОСТЬ БИЗНЕСА : 2390$"},
		{"гриль: Ф3КЭЛ / 2 - 790$ \nвытяжкa : Shuft CFk 100 MAX - 90$ \nхолодильное оборудование : Nord NR 403 B - 300$\nпосудомоечную машину : TATRA TW.F50 + DR - 1800$\nпоставщика продуктов : Евроопт - 100$\nОБЩАЯ СТОИМОСТЬ БИЗНЕСА : 3080$"},
		{"гриль: ИПГ - 140164 - 800$\nвытяжкa : Era Argest 120E 2K M - 120$\nхолодильное оборудование : Sonata Quadro 1200 LED - 500$\nпосудомоечная машина : Vortmax FDM 500 - 2000$\nпоставщик продуктов : Корона - 150$\nОБЩАЯ СТОИМОСТЬ БИЗНЕСА : 3570$"},
		{"гриль: ATESY Командор - 4Э - Т - 940$\nвытяжкa : Systemair K 100 M Sileo - 160$\nхолодильное оборудование : Alpicool CR65 - 750$\nпосудомоечная машина : DW - 1000eco MAKSAN - 2500$\nпоставщик продуктов : ProStore - 200$\nОБЩАЯ СТОИМОСТЬ БИЗНЕСА : 4550$"}
	};
};
struct Parts
{
	vector<string> par = { "Не выбран", "Не выбран", "Не выбран", "Не выбран", "Не выбран" };
};
struct Costs
{
	vector<int> cos= { 0,0,0,0,0 };
};
struct Cost
{
	int co;
};
struct Availiable_parts
{
	vector<map<string, int>> availiable = {
		{ { "Hurakan HKN-PEG550R", 1150 }, { "GASTRORAG EL-280", 510 }, { "ИПГ-140164", 805 }, { "ATESY Командор-4Э-Т", 940 }, { "Ф3КЭЛ/2", 790 } },
		{ {"Systemair K 100 M Sileo", 160}, {"Era Storm YWF2E 200", 70}, {"Shuft CFk 100 MAX", 90},{"Era Argest 120E 2K M",120} },
		{ {"Nord NR 403 B", 300}, {"Alpicool CR65", 750}, {"BBK RF-068", 240}, {"Sonata Quadro 1200 LED", 500} },
		{ {"DW-1000eco MAKSAN", 2500}, {"TATRA TW.F50+DR", 1800}, {"Vortmax FDM 500", 2000}, {"ELETTO 500-01/220", 1500} },
		{ {"Евроопт", 100}, {"Корона", 150}, {"ProStore", 200}, {"Копеечка", 70},}
	};
};
struct Parts_names
{
	vector<string> parts_n = { "гриль", "вытяжку", "холодильное оборудование", "посудомоечную машину", "поставщика продуктов" };
};

class Cafe
{
private:
	Saved saved;
	Parts parts;
	Costs costs;
	Cost cost;
	Availiable_parts availiable_parts;
	Parts_names  parts_names;

public:
	Cafe(); //конструктор по умолчанию
	Cafe(Saved saved_, Parts parts_, Costs costs_, Cost cost_, Availiable_parts availiable_parts_, Parts_names  parts_names_);
	~Cafe();
	void get_parts(); // создание нового бизнеса
	void catalog(); // вывод всех сохраненных идей

	Cafe& operator = (Cafe d_o); //перегрузка некая

};