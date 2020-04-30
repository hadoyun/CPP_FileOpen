#include "TextFile.h"
#include <fstream>
#include <iostream>

//생성자 
TextFile::TextFile()
{

}

//소멸자 (아무것도 하지 않음 명시 --noop)
TextFile::~TextFile()
{
	__noop;
}

//파일 이름을 받아 텍스트를 읽어오는 함수 
void TextFile::load(const char* fileName)
{
	std::ifstream ifs{};

	ifs.open(fileName, std::ios_base::in);


	//RAII - 범위를 벗어나면 자동종료 but 한번더 open 해주면 열어줘야함.
	if (ifs.is_open())
	{
		//기존에 있는 것 삭제
		_data.clear();

		//한글자씩 읽어옴
		//_ifs.get();


		char buffer[_KbufferSize]{};

		while (!ifs.eof())
		{
			//배열이 포인터가 되는순간 퇴화(decay)한다.. ㅠ; (배열의 길이에 대한 정보가 사라진다...!)
			//따라서 포인터로 받을때는 사이즈를 알려줘야한다.
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

void TextFile::save(const char* fileName)
{
	std::ofstream ofs{};

	ofs.open(fileName,std::ios_base::out);

	if (ofs.is_open() == true)
	{

		ofs.write(_data.c_str(), _data.length());

		std::cout << fileName << "을 저장하는데 성공했습니다. \n";

		ofs.close();
	}
	else if (ofs.is_open() == false)
	{
		std::cout << fileName << "이 열리지 않았습니다. \n";
	}


}

void TextFile::write(const char* data)
{
	_data += data;
}

void TextFile::clear()
{
	_data.clear();
}
