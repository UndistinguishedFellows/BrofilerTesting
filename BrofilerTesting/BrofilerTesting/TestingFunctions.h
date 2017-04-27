#pragma once
#include <list>
#include <map>

bool MainLoop(bool runApp);
bool CheckText();

bool ArrayVsList();

void FillArray(int* arraySample, int size);
void FillList(std::list<int> * listSample, int size);

void FindVsIterateMap();
float FillMap(std::map<float, float>& map);
void FindItemMap(std::map<float, float> map, float value);
void FindWithIterateMap(std::map<float, float> map, float value);