#include <iostream>
#include <cstring>
using namespace std;

class Vector {
private:
	float x, y, z;
public:
	Vector() {}
	Vector(float x, float y, float z) :x{ x }, y{ y }, z{ z } {}

	/*float& operator[](int index) {
		if (index < 1)
			return x;
		if (index == 1)
			return y;
		return z;
	}*/

	const float& operator[](int index) const {
		if (index < 1)
			return x;
		if (index == 1)
			return y;
		return z;
	}
};

class String
{
private:
	char* _chars;
public:
	String() {}
	String(const char* chars) :_chars{ new char[strlen(chars) + 1] }
	{
		strcpy_s(_chars, strlen(chars) + 1, chars);
	}

	char& operator[](int index) {
		return _chars[index];
	}
};

int main() {
	/*Vector v0{ 1,2,3 };
	cout << v0[-1] << endl;
	cout << v0[0] << endl;
	cout << v0[1] << endl;
	cout << v0[2] << endl;

	v0[0] = 100;
	cout << v0[0] << endl;*/

	String str{ "abc" };
	cout << str[0] << endl;
	cout << str[1] << endl;
	cout << str[2] << endl;

	str[2] = 'd';
	cout << str[2] << endl;
}