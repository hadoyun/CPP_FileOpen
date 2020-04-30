#include "TextFile.h"

int main() 
{
	//std::ios_base:: 는 여러가지 (온 오프를 섞을 수 잇는) 스위치이다. 
	TextFile textFile{};

	//textFile.load("C:/Users/0_w0_/OneDrive/바탕 화면/test.txt");

	// textFile.display();

	// textFile.load("C:/Users/0_w0_/OneDrive/바탕 화면/test.txt");

	// textFile.display();

	textFile.write("123456789");

	textFile.save("C:/Users/0_w0_/OneDrive/바탕 화면/saveTest.txt");

	textFile.clear();

	return 0;
}