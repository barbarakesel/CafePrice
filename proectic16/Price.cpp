#include"Price.h"
#include"fstream"
//������� ������  
using namespace System;
using namespace System::Windows::Forms;
void DataEntry(Cafe* (&d), int& n)
{

}
void DataReading(string filename)
{
    Saved saved;
    Cost cost;
    ifstream fin;
    fin.open("Catalog.txt");
    if (!fin.is_open())
    {
        cout << "warning!" << endl;
    }
    else
    {
        system("cls");


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


    fin.close();
}
void Print(Cafe* d, int n)
{

}
void DataChange(Cafe* d, int n)
{

}
void Copy(Cafe* d_n, Cafe* d_o, int n)
{

}
void AddData(Cafe* (&d), int& n)
{

}
void DeleteData(Cafe* (&d), int& n)
{

}
void SortingData(Cafe* d, int n)
{

}
void SaveData(Cafe* d, int n, string fileName)
{

}