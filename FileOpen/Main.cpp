#include "TextFile.h"

int main() 
{
	//std::ios_base:: �� �������� (�� ������ ���� �� �մ�) ����ġ�̴�. 
	TextFile textFile{};

	textFile.openText("C:/Users/0_w0_/OneDrive/���� ȭ��/test.txt");

	textFile.display();

	textFile.openText("C:/Users/0_w0_/OneDrive/���� ȭ��/test.txt");

	textFile.display();



	return 0;
}