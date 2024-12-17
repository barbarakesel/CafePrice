#include "Cafe.h"
Cafe::Cafe()
{

}
Cafe::Cafe(Saved saved_, Parts parts_, Costs costs_, Cost cost_, Availiable_parts availiable_parts_, Parts_names  parts_names_)
{
	saved.sav = saved_.sav;
	 parts.par = parts_.par;
	 costs.cos=costs_.cos;
	 cost.co=cost_.co;
	 availiable_parts.availiable=availiable_parts_.availiable;
     parts_names.parts_n=parts_names_.parts_n;

}
Cafe::~Cafe()
{
}
void Cafe::get_parts()
{
	system("cls");
	parts.par = { "�� ������", "�� ������", "�� ������", "�� ������", "�� ������" };
	costs.cos = { 0,0,0,0,0 };
	int a, b, c = 0, k, w = 0;
	vector<int> arr;
	arr.push_back(9);
	while (1)
	{
		w = 0;///////////////////////////////////////////////
		if (c == 0)
		{
			cout << "������� ��� ������:";

			cin >> c;
			if (!cin)
			{
				cout << "\n������! ������� ������ �����\n";
				exit(1);
			}
			cost.co = 0;
			if (c < 70) { cout << "������ ������� ������������ ��� �������� �������" << endl; break; }
			cout << endl;
		}


		cout << "-1 - �����\n-2 - ��������� ������ ������ ����\n";
		cout << "--------------------------------------------------------------------------------------------\n";
		for (int i = 0; i < parts.par.size(); i++)
		{
			cout << i << " - �������� " << setiosflags(ios::left) << setw(27) << parts_names.parts_n[i] << setw(10) << "�������: " << setiosflags(ios::left) << setw(27) << parts.par[i] << "���������: " << costs.cos[i] << "$\n";
		}
		cout << "--------------------------------------------------------------------------------------------\n";
		cout << "����� ������������� ����: " << cost.co << "$\n";
		cout << "��� ������:" << c << "$\n";
		////////////////////////////////////////////////////////////////////////////////////////
		cin >> a; system("cls");
		k = a;
		for (int j = 0; j < arr.size(); j++)
		{

			if (arr.end() == find(arr.begin(), arr.end(), k))
			{
				arr.push_back(k);
				break;
			}
			else { cout << "������������ �������� � ������ �� ��������!\n"; w = 1; break; }
		}

		/////////////////////////////////////////////////////////////////////////////////////////
		if (!cin)
		{
			cout << "\n������! ������� ������ �����\n";
			exit(1);
		}
		// �����

		if (a == -1) break;
		// ���������� � �������
		if (a == -2) {

		}

		// �������� ��������
		if ((a < -2) || (a >= availiable_parts.availiable.size())) { cout << "�������� ��������\n\n"; continue; }
		// ������ �������� 
		int i = 0;
		int schetchik = 0;
		if (w == 0)///////////////////////////////////////////////////////////////////////////////////
		{
			cout << endl << "������ �� ������ ������� �� ��������� ��� ��������� ��������:" << endl;

			for (const auto& it : availiable_parts.availiable[a]) {
				if (it.second <= c)
				{
					cout << i << " - " << it.first << " : " << it.second << "$\n";
					schetchik++;
				}
				i++;
			}
			if (schetchik == 0)
			{

				cout << "�� ����� ������� ������������ ������� �� " << parts_names.parts_n[a] << endl;
				cout << "������� �� -1" << endl;
			}

			cin >> b; system("cls");

			if (!cin)
			{
				cout << "\n������! ������� ������ �����\n";
				exit(1);
			}


			////////////////////////////////////////////////////////
			if ((b < 0) || (b >= availiable_parts.availiable[a].size())) { cout << "�������� ��������\n\n"; continue; }
			i = 0;
			//////////

			for (const auto& it : availiable_parts.availiable[a]) {
				if (i == b) { parts.par[a] = it.first; costs.cos[a] = it.second; c = c - costs.cos[a]; }
				i++;
			}
			// �������� ����� �������������
			cost.co = 0;
			for (int i = 0; i < costs.cos.size(); i++)
			{
				cost.co += costs.cos[i];
			}
			cout << endl;

		}
	}

}


void Cafe::catalog() {
	//system("cls");


	cout << "                       ������� ������-����:\n";

	for (int i = 0; i < saved.sav.size(); i++)
	{
		cout << "        ���� �" << i << endl;
		for (int j = 0; j < saved.sav[i].size(); j++)
		{
			cout << saved.sav[i][j] << endl;
		}
		cout << endl;
	}
}