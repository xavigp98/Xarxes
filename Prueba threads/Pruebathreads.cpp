// Pruebathreads.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <thread>
#include <windows.h>



void xavi() {
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Xavi ";
	}
}

void cacahuete() {
	for (int i = 0; i < 10; i++) {
		std::cout << "Almendra ";
	}
}

int main()
{
	int valor;
	std::thread first(xavi);
	std::thread second(cacahuete);

	

	first.join();
	second.join();


	
    return 0;
}

