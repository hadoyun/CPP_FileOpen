#include "TextFile.h"
#include "BinaryFile.h"

int main() 
{
	//std::ios_base:: 는 여러가지 (온 오프를 섞을 수 잇는) 스위치이다. 
	TextFile textFile{};

	//textFile.load("C:/Users/0_w0_/OneDrive/바탕 화면/test.txt");

	// textFile.display();

	// textFile.load("C:/Users/0_w0_/OneDrive/바탕 화면/test.txt");

	// textFile.display();

	/*textFile.write("123456789");

	textFile.save("C:/Users/0_w0_/OneDrive/바탕 화면/saveTest.txt");

	textFile.clear();*/

	BinaryFile binaryFile{};

	//binaryFile.load("C:/Users/0_w0_/OneDrive/바탕 화면/saveTest.txt");

	/*binaryFile.write('H');
	binaryFile.write('D');
	binaryFile.write('Y');

	binaryFile.write(123456789);

	binaryFile.save("C:/Users/0_w0_/OneDrive/바탕 화면/saveTest.txt");*/

	binaryFile.load("C:/Users/0_w0_/OneDrive/바탕 화면/saveTest.txt");

	binaryFile.readChar();
	binaryFile.readChar();
	binaryFile.readChar();

	int32 a = binaryFile.readInt32();

	

	return 0;
}