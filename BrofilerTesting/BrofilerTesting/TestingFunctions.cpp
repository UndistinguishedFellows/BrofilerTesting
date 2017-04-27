#include "TestingFunctions.h"

#include <iostream>
#include <string>

#include "Brofiler/Brofiler.h"

#define SAMPLING_SIZE 500

bool MainLoop(bool runApp)
{
	BROFILER_CATEGORY("MainLoop", Profiler::Color::LightYellow);
	runApp = CheckText();
	ArrayVsList();
	FindVsIterateMap();
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
	int arraySample[SAMPLING_SIZE];
	std::list<int> listSample;
	std::vector<int> vectorSample;

	FillArray(arraySample, SAMPLING_SIZE);
	FillList(&listSample, SAMPLING_SIZE);
	FillVector(&vectorSample, SAMPLING_SIZE);
	IterateArray(arraySample, SAMPLING_SIZE);
	IterateList(&listSample, SAMPLING_SIZE);
	IterateVector(&vectorSample, SAMPLING_SIZE);
	IterateVectorIterator(&vectorSample, SAMPLING_SIZE);

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
void FindVsIterateMap()
{
	BROFILER_CATEGORY("FindVsIterate", Profiler::Color::AliceBlue);

	std::map<float, float> map;
	float lastValue = FillMap(map);
		
	FindItemMap(map, lastValue);
	FindWithIterateMap(map, lastValue);
}
float FillMap(std::map<float, float>& map)
{
	BROFILER_CATEGORY("FillMap", Profiler::Color::Bisque);
	float a = 0.f;
	for (unsigned int i = 0; i < SAMPLING_SIZE; ++i)
	{
		a = rand();
		map[a] = a;
	}
	return a; //Just return the last value inserted
}
void FindItemMap(std::map<float, float> map, float value)
{
	BROFILER_CATEGORY("FindItemMap", Profiler::Color::Aqua);
	std::map<float, float>::iterator it = map.find(value);
}
void FindWithIterateMap(std::map<float, float> map, float value)
{
	BROFILER_CATEGORY("FindWithIterateMap", Profiler::Color::Aqua);
	for (const auto& it : map)
	{
		if (it.second == value)
			return;
	}
}
