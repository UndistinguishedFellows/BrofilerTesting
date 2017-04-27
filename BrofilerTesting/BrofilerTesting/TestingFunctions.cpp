#include "TestingFunctions.h"

#include <iostream>
#include <string>
#include <list>
#include <vector>

#include "Brofiler\Brofiler.h"

bool MainLoop(bool runApp)
{
	BROFILER_CATEGORY("MainLoop", Profiler::Color::LightYellow);
	runApp = CheckText();
	ArrayVsList();
	return runApp;
}

bool CheckText()
{
	BROFILER_CATEGORY("CheckText", Profiler::Color::LightYellow);
	bool ret = true;

	//std::string text;
	std::cout << "MainLoop" << std::endl;
	//std::cout << "Put text here: ";
	//getline(std::cin, text);
	//std::cout << text << std::endl;
	//if (strcmp(text.c_str(), "exit") == 0)
	//{
	//	ret = false;
	//}
	return ret;
}

bool ArrayVsList()
{
	BROFILER_CATEGORY("ArrayVsList", Profiler::Color::Purple);
	int arraySample[500];
	std::list<int> listSample;
	std::vector<int> vectorSample;
	FillArray(arraySample, 500);
	FillList(&listSample, 500);
	FillVector(&vectorSample, 500);
	IterateArray(arraySample, 500);
	IterateList(&listSample, 500);
	IterateVector(&vectorSample, 500);
	IterateVectorIterator(&vectorSample, 500);

	return false;
}

void FillArray(int * arraySample, int size)
{
	BROFILER_CATEGORY("FillArray", Profiler::Color::PeachPuff);
	for (int i = 0; i < size; i++)
	{
		arraySample[i] = i;
	}
}
void FillList(std::list<int> * listSample, int size)
{
	BROFILER_CATEGORY("FillList", Profiler::Color::Gainsboro);
	for (int i = 0; i < size; i++)
	{
		listSample->push_back(i);
	}
}
void FillVector(std::vector<int> * vectorSample, int size)
{
	BROFILER_CATEGORY("FillVector", Profiler::Color::FireBrick);
	for (int i = 0; i < size; i++)
	{
		vectorSample->push_back(i);
	}
}

void IterateArray(int* arraySample, int size)
{
	BROFILER_CATEGORY("IterateArray", Profiler::Color::HoneyDew);
	for (int i = 0; i < size; i++)
	{
		int a = arraySample[i];
	}
}

void IterateList(std::list<int>* listSample, int size)
{
	BROFILER_CATEGORY("IterateList", Profiler::Color::DarkKhaki);
	for (std::list<int>::iterator i = listSample->begin(); i != listSample->end(); ++i)
	{
		int a = (*i);
	}

}

void IterateVector(std::vector<int>* vectorSample, int size)
{
	BROFILER_CATEGORY("IterateVector", Profiler::Color::Khaki);
	for (int i = 0; i < size; i++)
	{
		int a = (*vectorSample)[i];
	}
}

void IterateVectorIterator(std::vector<int>* vectorSample, int size)
{
	BROFILER_CATEGORY("IterateVectorIterator", Profiler::Color::Khaki);
	for (std::vector<int>::iterator i = vectorSample->begin(); i != vectorSample->end(); ++i)
	{
		int a = (*i);
	}
}
