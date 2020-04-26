#include "TextFile.h"
#include <fstream>
#include <iostream>

TextFile::TextFile()
{

}

TextFile::~TextFile()
{
	__noop;
}

void TextFile::openText(const char* _fileName)
{
	std::ifstream ifs{};

	ifs.open(_fileName, std::ios_base::in);
	

	//RAII - 범위를 벗어나면 자동종료 but 한번더 open 해주면 열어줘야함.
	if (ifs.is_open())
	{
		_data.clear();
		//한글자씩 읽어옴
		//_ifs.get();
		//배열이 포인터가 되는순간 퇴화(decay)한다.. ㅠ; (배열의 길이에 대한 정보가 사라진다...!)
		//따라서 포인터로 받을때는 사이즈를 알려줘야한다.
		char buffer[_KbufferSize]{};

		while (!ifs.eof())
		{	
			ifs.getline(buffer, _KbufferSize);
			
			_data += " ";
			_data += buffer;
			_data += "\n";
		}

	}
}

void TextFile::display()
{
	std::cout << _data << "\n";
}