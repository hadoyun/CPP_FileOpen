#pragma once
#include <vector>

using byte = unsigned char;
using int32 = int32_t;
using uint32 = uint32_t;


class BinaryFile
{
public:
	BinaryFile();
	~BinaryFile();

public:
	void load(const char* fileName);
	void save(const char* fileName);

public:
	void clear();
	void write(int32 value);
	void write(char value);

public:
	bool canRead(uint32 count) const;
	int32 readInt32() const;
	char readChar() const;

private:
	std::vector<byte> _vData{};
	//const 함수 여도 바꿀 수 있도록...! 의미상 const 는 맞는 함수를 const해주기 위해서
	mutable uint32 _at{};
};