#pragma once
#include "Cafe.h"

void DataEntry(Cafe* (&d), int& n); //ввод данных вручную
void DataReading(string filename); 
void Print(Cafe* d, int n);// вывод в консоль
void DataChange(Cafe* d, int n);// изменение данных
void Copy(Cafe* d_n, Cafe* d_o, int n);
void AddData(Cafe* (&d), int& n);
void DeleteData(Cafe* (&d), int& n);
void SortingData(Cafe* d, int n);
void SaveData(Cafe* d, int n, string fileName);


/* прототипы функций конвертирования 
std::string& Convert_String_to_string(String^ s, std::string& os); //конвертируем System::string^ в std::string
String^ Convert_string_to_String(std::string& os, String^ s); //конвертируем std::string в System::string^
std::string& Convert_String_to_string(String^ s); //конвертируем System::string^ в std::string
String^ Convert_string_to_String(std::string& os); //конвертируем std::string в System::string^
System::String^ Convert_char_to_String(char* ch); //конвертируем char* в System::string^
char* Convert_String_to_char(System::String^ string); //конвертируем System::string^ в char*
*/