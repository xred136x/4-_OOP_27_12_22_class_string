#pragma once
#include<iostream>
#include<string>
class String
{
public:
	String(const char* data);// конструктор параметризованный
	~String();// 
	String(String& other);// конструктор копирования
	String& operator=(String& other);
	//String& operator=(const char* other);
	// s[i] == s.operator[](i)
	char operator[](size_t index);
	friend std::ostream& operator<<(std::ostream& os, String& s) {
		for (size_t i = 0; i < strlen(s._data); i++) {
			os << s[i];
		}
		return os;
	}
	//String operator+(String& other);

private:
	char* _data = nullptr;
};

