#include <iostream>
#include "State.h"
#include "Transition.h"
#include <vector> //ũ�Ⱑ �ٲ�� �ڷᱸ�� 
#include <list> // �����̳��� ���¿� ������� ������� Ž��
#include<map>


using namespace std;

int main()
{
	//FState* State[4];
	vector<FState*> States;
	FTransition* Transition[5];	

	States.push_back(new FState(1, "��ȸ"));
	States.push_back(new FState(2, "�߰�"));
	States.push_back(new FState(3, "����"));
	States.push_back(new FState(4, "����"));

	/*State[0] = new FState(1, "��ȸ");
	State[1] = new FState(2, "�߰�");
	State[2] = new FState(3, "����");
	State[3] = new FState(4, "����");*/

	for (int i = 0; i < States.size(); ++i)
	{
		cout << States[i]->StateName << endl;
	}
	
	for (auto iter = States.begin(); iter != States.end(); ++iter)
	{
		cout << (*iter)->StateName << endl;
	}


	list<FTransition*> Transitions;
	Transitions.push_back(new FTransition(1, "���߰�", 2));
	Transitions.push_back(new FTransition(2, "����ħ", 1));
	Transitions.push_back(new FTransition(2, "�����Ÿ�����", 3));
	Transitions.push_back(new FTransition(3, "�����Ÿ���Ż", 2));
	Transitions.push_back(new FTransition(3, "HP����", 4));

	for (auto iter = Transitions.begin(); iter != Transitions.end(); ++iter)
	{
		cout << (*iter)->Condition << endl;
	}

	for (auto iter : Transitions)
	{
		cout << iter->Condition << endl;
	}

	map<int, FTransition*> TransitionsMap;

	TransitionsMap[1] = new FTransition(1, "���߰�", 2);



	/*Transition[0] = new FTransition(1, "���߰�", 2);
	Transition[1] = new FTransition(2, "����ħ", 1);	
	Transition[2] = new FTransition(2, "�����Ÿ�����", 3);	
	Transition[3] = new FTransition(3, "�����Ÿ���Ż", 2);
	Transition[4] = new FTransition(3, "HP����", 4);*/
	

	//int MonsterCurrentState = 1;
	//string MonsterCondition = "���߰�";
	//int MonsterNextState;

	//for (int i = 0; i < 5; ++i)
	//{
	//	if (Transitions[i]->CurrentState == MonsterCurrentState && Transition[i]->Condition == MonsterCondition)
	//	{
	//		MonsterNextState = Transition[i]->NextState;
	//	}
	//}


	/*cout << "���� ������ ���´� " << States[MonsterCurrentState - 1]->StateName;
	cout << "�̰� ������ " << MonsterCondition << "�� �ؼ� �������� ";
	cout << "���Ͱ� �������� " << States[MonsterNextState - 1]->StateName;
	cout << "�ൿ�� �մϴ�. " << endl;*/


	return 0;
}