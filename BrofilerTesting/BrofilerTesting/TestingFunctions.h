#pragma once
#include <list>

bool MainLoop(bool runApp);
bool CheckText();

bool ArrayVsList();

void FillArray(int* arraySample, int size);
void FillList(std::list<int> * listSample, int size);