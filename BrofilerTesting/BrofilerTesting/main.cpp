#include <iostream>

#include "TestingFunctions.h"
#include "Brofiler\Brofiler.h"

#pragma comment(lib, "Brofiler/ProfilerCore32.lib")

int main()
{
	bool runApp = true;

	while (runApp)
	{
		BROFILER_FRAME("MyTestingApp");
		runApp = MainLoop(runApp);
	}


	return 0;
}