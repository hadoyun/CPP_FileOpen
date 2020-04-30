#pragma once
#include <string>


class TextFile
{
public:
	TextFile();
	~TextFile();

public:
	void load(const char* fileName);
	void display();
	void save(const char* fileName);
	void write(const char* data);
	void clear();
private:
	static const int _KbufferSize{ 300 };
	std::string _data{};
};