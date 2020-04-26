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
	

	//RAII - ������ ����� �ڵ����� but �ѹ��� open ���ָ� ���������.
	if (ifs.is_open())
	{
		_data.clear();
		//�ѱ��ھ� �о��
		//_ifs.get();
		//�迭�� �����Ͱ� �Ǵ¼��� ��ȭ(decay)�Ѵ�.. ��; (�迭�� ���̿� ���� ������ �������...!)
		//���� �����ͷ� �������� ����� �˷�����Ѵ�.
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