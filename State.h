#pragma once
#include <string>

using namespace std;

class FState
{
public:
	FState(); // �⺻������
	FState(int NewID, std::string NewName);

	int ID;
	string StateName;
};



