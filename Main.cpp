#include <iostream>
#include "State.h"
#include "Transition.h"
#include <vector> //크기가 바뀌는 자료구조 
#include <list> // 컨테이너의 형태와 상관없이 순서대로 탐색
#include<map>


using namespace std;

int main()
{
	//FState* State[4];
	vector<FState*> States;
	FTransition* Transition[5];	

	States.push_back(new FState(1, "배회"));
	States.push_back(new FState(2, "추격"));
	States.push_back(new FState(3, "공격"));
	States.push_back(new FState(4, "죽음"));

	/*State[0] = new FState(1, "배회");
	State[1] = new FState(2, "추격");
	State[2] = new FState(3, "공격");
	State[3] = new FState(4, "죽음");*/

	for (int i = 0; i < States.size(); ++i)
	{
		cout << States[i]->StateName << endl;
	}
	
	for (auto iter = States.begin(); iter != States.end(); ++iter)
	{
		cout << (*iter)->StateName << endl;
	}


	list<FTransition*> Transitions;
	Transitions.push_back(new FTransition(1, "적발견", 2));
	Transitions.push_back(new FTransition(2, "적놓침", 1));
	Transitions.push_back(new FTransition(2, "사정거리접근", 3));
	Transitions.push_back(new FTransition(3, "사정거리이탈", 2));
	Transitions.push_back(new FTransition(3, "HP없음", 4));

	for (auto iter = Transitions.begin(); iter != Transitions.end(); ++iter)
	{
		cout << (*iter)->Condition << endl;
	}

	for (auto iter : Transitions)
	{
		cout << iter->Condition << endl;
	}

	map<int, FTransition*> TransitionsMap;

	TransitionsMap[1] = new FTransition(1, "적발견", 2);



	/*Transition[0] = new FTransition(1, "적발견", 2);
	Transition[1] = new FTransition(2, "적놓침", 1);	
	Transition[2] = new FTransition(2, "사정거리접근", 3);	
	Transition[3] = new FTransition(3, "사정거리이탈", 2);
	Transition[4] = new FTransition(3, "HP없음", 4);*/
	

	//int MonsterCurrentState = 1;
	//string MonsterCondition = "적발견";
	//int MonsterNextState;

	//for (int i = 0; i < 5; ++i)
	//{
	//	if (Transitions[i]->CurrentState == MonsterCurrentState && Transition[i]->Condition == MonsterCondition)
	//	{
	//		MonsterNextState = Transition[i]->NextState;
	//	}
	//}


	/*cout << "현재 몬스터의 상태는 " << States[MonsterCurrentState - 1]->StateName;
	cout << "이고 조건은 " << MonsterCondition << "을 해서 다음에는 ";
	cout << "몬스터가 다음에는 " << States[MonsterNextState - 1]->StateName;
	cout << "행동을 합니다. " << endl;*/


	return 0;
}