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
		{"�����: �� ������ - 0$\n�������: Era Storm YWF2E 200 - 70$\n����������� ������������: BBK RF-068 - 240$\n������������� ������: �� ������ - 0$\n���������� ���������: ������� - 100$\n����� ��������� �������: 410$"},
		{"�����: GASTRORAG EL-280 - 510$\n�������: Systemair K 100 M Sileo - 160$\n����������� ������������: �� ������ - 0$\n������������� ������: �� ������ - 0$\n��������� ���������: ������ - 150$\n����� ��������� �������: 820$"},
		{"����� : GASTRORAG EL - 280 - 510$ \n������a : Era Storm YWF2E 200 - 70$ \n����������� ������������ : BBK RF - 068 - 240$\n������������� ������ : ELETTO 500 - 01 / 220 - 1500$\n��������� ��������� : �������� - 70$\n����� ��������� ������� : 2390$"},
		{"�����: �3��� / 2 - 790$ \n������a : Shuft CFk 100 MAX - 90$ \n����������� ������������ : Nord NR 403 B - 300$\n������������� ������ : TATRA TW.F50 + DR - 1800$\n���������� ��������� : ������� - 100$\n����� ��������� ������� : 3080$"},
		{"�����: ��� - 140164 - 800$\n������a : Era Argest 120E 2K M - 120$\n����������� ������������ : Sonata Quadro 1200 LED - 500$\n������������� ������ : Vortmax FDM 500 - 2000$\n��������� ��������� : ������ - 150$\n����� ��������� ������� : 3570$"},
		{"�����: ATESY �������� - 4� - � - 940$\n������a : Systemair K 100 M Sileo - 160$\n����������� ������������ : Alpicool CR65 - 750$\n������������� ������ : DW - 1000eco MAKSAN - 2500$\n��������� ��������� : ProStore - 200$\n����� ��������� ������� : 4550$"}
	};
};
struct Parts
{
	vector<string> par = { "�� ������", "�� ������", "�� ������", "�� ������", "�� ������" };
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
		{ { "Hurakan HKN-PEG550R", 1150 }, { "GASTRORAG EL-280", 510 }, { "���-140164", 805 }, { "ATESY ��������-4�-�", 940 }, { "�3���/2", 790 } },
		{ {"Systemair K 100 M Sileo", 160}, {"Era Storm YWF2E 200", 70}, {"Shuft CFk 100 MAX", 90},{"Era Argest 120E 2K M",120} },
		{ {"Nord NR 403 B", 300}, {"Alpicool CR65", 750}, {"BBK RF-068", 240}, {"Sonata Quadro 1200 LED", 500} },
		{ {"DW-1000eco MAKSAN", 2500}, {"TATRA TW.F50+DR", 1800}, {"Vortmax FDM 500", 2000}, {"ELETTO 500-01/220", 1500} },
		{ {"�������", 100}, {"������", 150}, {"ProStore", 200}, {"��������", 70},}
	};
};
struct Parts_names
{
	vector<string> parts_n = { "�����", "�������", "����������� ������������", "������������� ������", "���������� ���������" };
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
	Cafe(); //����������� �� ���������
	Cafe(Saved saved_, Parts parts_, Costs costs_, Cost cost_, Availiable_parts availiable_parts_, Parts_names  parts_names_);
	~Cafe();
	void get_parts(); // �������� ������ �������
	void catalog(); // ����� ���� ����������� ����

	Cafe& operator = (Cafe d_o); //���������� �����

};