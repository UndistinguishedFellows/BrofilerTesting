#pragma once
#include <list>
#include <vector>
#include <map>

bool MainLoop(bool runApp);
bool CheckText();

bool ArrayVsList();

void FillArray(int* arraySample, int size);
void FillList(std::list<int> * listSample, int size);
void FillVector(std::vector<int> * vectorSample, int size);
void IterateArray(int* arraySample, int size);
void IterateList(std::list<int> * listSample, int size);
void IterateVector(std::vector<int> * vectorSample, int size);
void IterateVectorIterator(std::vector<int> * vectorSample, int size);

void FindVsIterateMap();

float FillMap(std::map<float, float>& map);
void FindItemMap(std::map<float, float> map, float value);
void FindWithIterateMap(std::map<float, float> map, float value);
