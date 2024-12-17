#include "Class_Cafe.h"
void Cafe::get_parts()
{
	system("cls");
	parts = { "�� ������", "�� ������", "�� ������", "�� ������", "�� ������" };
	costs = { 0,0,0,0,0 };
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
			cost = 0;
			if (c < 70) { cout << "������ ������� ������������ ��� �������� �������" << endl; break; }
			cout << endl;
		}


		cout << "-1 - �����\n-2 - ��������� ������ ������ ����\n";
		cout << "--------------------------------------------------------------------------------------------\n";
		for (int i = 0; i < parts.size(); i++)
		{
			cout << i << " - �������� " << setiosflags(ios::left) << setw(27) << parts_names[i] << setw(10) << "�������: " << setiosflags(ios::left) << setw(27) << parts[i] << "���������: " << costs[i] << "$\n";
		}
		cout << "--------------------------------------------------------------------------------------------\n";
		cout << "����� ������������� ����: " << cost << "$\n";
		cout << "��� ������:" << c << "$\n";
		////////////////////////////////////////////////////////////////////////////////////////
		cin >> a; system("cls");
		k = a;
		int h, l;
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
		if ((a < -2) || (a >= availiable_parts.size())) { cout << "�������� ��������\n\n"; continue; }
		// ������ �������� 
		int i = 0;
		int schetchik = 0;
		if (w == 0)///////////////////////////////////////////////////////////////////////////////////
		{
			cout << endl << "������ �� ������ ������� �� ��������� ��� ��������� ��������:" << endl;

			for (const auto& it : availiable_parts[a]) {
				if (it.second <= c)
				{
					cout << i << " - " << it.first << " : " << it.second << "$\n";
					schetchik++;
				}
				i++;
			}
			if (schetchik == 0)
			{

				cout << "�� ����� ������� ������������ ������� �� " << parts_names[a] << endl;
				cout << "������� �� -1" << endl;
			}

			cin >> b; system("cls");

			if (!cin)
			{
				cout << "\n������! ������� ������ �����\n";
				exit(1);
			}


			////////////////////////////////////////////////////////
			if ((b < 0) || (b >= availiable_parts[a].size())) { cout << "�������� ��������\n\n"; continue; }
			i = 0;
			//////////

			for (const auto& it : availiable_parts[a]) {
				if (i == b) { parts[a] = it.first; costs[a] = it.second; c = c - costs[a]; }
				i++;
			}
			// �������� ����� �������������
			cost = 0;
			for (int i = 0; i < costs.size(); i++)
			{
				cost += costs[i];
			}
			cout << endl;

		}
	}

}


void Cafe::catalog() {
	system("cls");


	cout << "                       ������� ������-����:\n";

	for (int i = 0; i < saved.size(); i++)
	{
		cout << "        ���� �" << i << endl;
		for (int j = 0; j < saved[i].size(); j++)
		{
			cout << saved[i][j] << endl;
		}
		cout << endl;
	}
}