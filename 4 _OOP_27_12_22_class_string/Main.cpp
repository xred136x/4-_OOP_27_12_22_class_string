#include<iostream>
#include<string>
#include "String.h"

// ДЗ где нужно перегрузить операторы
// +, -, *
// Там написано объявить поле std::string, а вы добавьте поле инт
// и перегрузите операторы для инта и
int main() {
	String str("abc");
	std::cout << "First str: " << str << '\n';
	String str1(str);
	String str2("Bob");
	str = str2;
	std::cout << "Second str: " << str << '\n';
	//String str3("Alice");
	//String str4 = str + str3;


	return 0;
}