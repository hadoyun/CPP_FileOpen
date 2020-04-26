#pragma once
#include <string>


class TextFile
{
public:
	TextFile();
	~TextFile();

public:
	void openText(const char* _fileName);
	void display();

private:
	static const int _KbufferSize{ 300 };
	char _fileName[_KbufferSize]{};
	std::string _data{};
};