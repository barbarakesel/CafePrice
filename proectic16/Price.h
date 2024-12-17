#pragma once
#include "Cafe.h"

void DataEntry(Cafe* (&d), int& n); //���� ������ �������
void DataReading(string filename); 
void Print(Cafe* d, int n);// ����� � �������
void DataChange(Cafe* d, int n);// ��������� ������
void Copy(Cafe* d_n, Cafe* d_o, int n);
void AddData(Cafe* (&d), int& n);
void DeleteData(Cafe* (&d), int& n);
void SortingData(Cafe* d, int n);
void SaveData(Cafe* d, int n, string fileName);


/* ��������� ������� ��������������� 
std::string& Convert_String_to_string(String^ s, std::string& os); //������������ System::string^ � std::string
String^ Convert_string_to_String(std::string& os, String^ s); //������������ std::string � System::string^
std::string& Convert_String_to_string(String^ s); //������������ System::string^ � std::string
String^ Convert_string_to_String(std::string& os); //������������ std::string � System::string^
System::String^ Convert_char_to_String(char* ch); //������������ char* � System::string^
char* Convert_String_to_char(System::String^ string); //������������ System::string^ � char*
*/