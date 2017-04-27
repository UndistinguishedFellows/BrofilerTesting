#pragma once
#include <list>
#include <vector>

bool MainLoop(bool runApp);
bool CheckText();

bool ArrayVsList();

void FillArray(int* arraySample, int size);
void FillList(std::list<int> * listSample, int size);
void FillVector(std::vector<int> * vectorSample, int size);