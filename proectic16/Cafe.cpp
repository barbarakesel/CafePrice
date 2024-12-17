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
	parts.par = { "Íå âûáğàí", "Íå âûáğàí", "Íå âûáğàí", "Íå âûáğàí", "Íå âûáğàí" };
	costs.cos = { 0,0,0,0,0 };
	int a, b, c = 0, k, w = 0;
	vector<int> arr;
	arr.push_back(9);
	while (1)
	{
		w = 0;///////////////////////////////////////////////
		if (c == 0)
		{
			cout << "ÂÂÅÄÈÒÅ ÂÀØ ÁŞÄÆÅÒ:";

			cin >> c;
			if (!cin)
			{
				cout << "\nÎØÈÁÊÀ! ÂÂÎÄÈÒÅ ÒÎËÜÊÎ ×ÈÑËÀ\n";
				exit(1);
			}
			cost.co = 0;
			if (c < 70) { cout << "ÂÀØÅÃÎ ÁŞÄÆÅÒÀ ÍÅÄÎÑÒÀÒÎ×ÍÎ ÄËß ÎÒÊĞÛÒÈß ÁÈÇÍÅÑÀ" << endl; break; }
			cout << endl;
		}


		cout << "-1 - âûéòè\n-2 - ñîõğàíèòü äàííóş áèçíåñ èäåş\n";
		cout << "--------------------------------------------------------------------------------------------\n";
		for (int i = 0; i < parts.par.size(); i++)
		{
			cout << i << " - ÈÇÌÅÍÈÒÜ " << setiosflags(ios::left) << setw(27) << parts_names.parts_n[i] << setw(10) << "ÒÅÊÓÙÈÉ: " << setiosflags(ios::left) << setw(27) << parts.par[i] << "ÑÒÎÈÌÎÑÒÜ: " << costs.cos[i] << "$\n";
		}
		cout << "--------------------------------------------------------------------------------------------\n";
		cout << "Îáùàÿ ñåáåñòîèìîñòü êàôå: " << cost.co << "$\n";
		cout << "Âàø áşäæåò:" << c << "$\n";
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
			else { cout << "ÎÁÎĞÓÄÎÂÀÍÈÅ ÂÎÇÂĞÀÒÓ È ÎÁÌÅÍÓ ÍÅ ÏÎÄËÅÆÈÒ!\n"; w = 1; break; }
		}

		/////////////////////////////////////////////////////////////////////////////////////////
		if (!cin)
		{
			cout << "\nÎØÈÁÊÀ! ÂÂÎÄÈÒÅ ÒÎËÜÊÎ ×ÈÑËÀ\n";
			exit(1);
		}
		// Âûõîä

		if (a == -1) break;
		// Ñîõğàíåíèå â êàòàëîã
		if (a == -2) {

		}

		// Íåâåğíîå çíà÷åíèå
		if ((a < -2) || (a >= availiable_parts.availiable.size())) { cout << "Íåâåğíîå çíà÷åíèå\n\n"; continue; }
		// Âåğíîå çíà÷åíèå 
		int i = 0;
		int schetchik = 0;
		if (w == 0)///////////////////////////////////////////////////////////////////////////////////
		{
			cout << endl << "Èñõîäÿ èç âàøåãî áşäæåòà ìû ïîäîáğàëè âàì ñëåäóşùèå âàğèàíòû:" << endl;

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

				cout << "ÍÀ ÂÀØÅÌ ÁÀËÀÍÑÅ ÍÅÄÎÑÒÀÒÎ×ÍÎ ÑĞÅÄÑÒÂ ÍÀ " << parts_names.parts_n[a] << endl;
				cout << "íàæìèòå íà -1" << endl;
			}

			cin >> b; system("cls");

			if (!cin)
			{
				cout << "\nÎØÈÁÊÀ! ÂÂÎÄÈÒÅ ÒÎËÜÊÎ ×ÈÑËÀ\n";
				exit(1);
			}


			////////////////////////////////////////////////////////
			if ((b < 0) || (b >= availiable_parts.availiable[a].size())) { cout << "Íåâåğíîå çíà÷åíèå\n\n"; continue; }
			i = 0;
			//////////

			for (const auto& it : availiable_parts.availiable[a]) {
				if (i == b) { parts.par[a] = it.first; costs.cos[a] = it.second; c = c - costs.cos[a]; }
				i++;
			}
			// Ïåğåñ÷åò îáùåé ñåáåñòîèìîñòè
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


	cout << "                       ÊÀÒÀËÎÃ ÁÈÇÍÅÑ-ÈÄÅÉ:\n";

	for (int i = 0; i < saved.sav.size(); i++)
	{
		cout << "        ÈÄÅß ¹" << i << endl;
		for (int j = 0; j < saved.sav[i].size(); j++)
		{
			cout << saved.sav[i][j] << endl;
		}
		cout << endl;
	}
}