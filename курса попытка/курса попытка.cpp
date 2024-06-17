#include "Header.h"
#include <iostream>
#include <algorithm>	
const HANDLE hhCon = GetStdHandle(STD_OUTPUT_HANDLE);
static void UnwrapScreen()
	{
		COORD NewSBSize;
		SMALL_RECT DisplayArea = { 0, 0, 0, 0 };
		NewSBSize = GetLargestConsoleWindowSize(hhCon);
		SetConsoleScreenBufferSize(hhCon, NewSBSize);
		DisplayArea.Right = NewSBSize.X - 1;
		DisplayArea.Bottom = NewSBSize.Y - 1;
		SetConsoleWindowInfo(hhCon, TRUE, &DisplayArea);
	}
int main()
{
	//SendMessage(GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	system("mkdir Clients");
	system("mkdir Job");
	allLang();
	system("color 7a");
	//system("color 0d");
	UnwrapScreen();
	SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);

	regMenu();
}