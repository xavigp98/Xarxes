// Pruebathreads.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <thread>
#include <windows.h>



void xavi() {
	char c;
	std::cin >> c;
	std::cout << "has escrito " << c << std::endl;
}



int main()
{
	std::thread first(xavi);
	

	for (int i = 0; i < 1000; i++) {
	std::cout << i << std::endl;
	Sleep(1000);
	}

	


	
    return 0;
}

