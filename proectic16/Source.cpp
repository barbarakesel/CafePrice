#include"Price.h"

int main()
{
	system("color F5");
	setlocale(LC_ALL, "rus");

	// ������� ����
	Cafe t;
	int a;
	while (1) {
		cout << "                       " << "������� ����:\n" << "        " << "-1 - ����� �� ���������\n" << "         " << "0 - ����������� ������� ����\n" << "         " << "1 - ������� ����� ����\n";

		cin >> a;  system("cls");
		if (!cin)
		{
			cout << "\n������! ������� ������ �����\n";
			exit(1);
		}
		if (a < -1 || a > 1) { cout << "�������� ��������\n\n"; continue; }
		if (a == -1) break;
		if (a) t.get_parts();
		else t.catalog();
	}
	return 0;
}
