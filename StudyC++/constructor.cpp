#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human
{
private:
	char name[12];
	int age;

public:
	//생성자
	Human(const char* aname, int aage)
	{
		strcpy(this->name, aname);
		this->age = aage;
	}
	void intro()
	{
		printf("이름 : %s, 나이 : %d", name, age);
	}
};

int main()
{
	Human kim("김상현", 29);
	kim.intro();
}