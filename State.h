#pragma once
#include <string>

using namespace std;

class FState
{
public:
	FState(); // 기본생성자
	FState(int NewID, std::string NewName);

	int ID;
	string StateName;
};



