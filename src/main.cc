//
// Programa: sbenc Copyright (c) 2007 Manuel Cano Muñoz
// Autor: Manuel Cano Muñoz
// Fecha: Mon Mar 26 15:10:24 2007
// Time-stamp: <>
//
// Includes
//
#include "main.hh"


int main (int argc, char ** argv)
{
	bfunc();

	if (argc <= 1)
	{
		std::cerr << "sbenc (c) Copyright 2007 SISDETEC, S.L." << std::endl;
		std::cerr << "Author: Manuel Cano" << std::endl;
		std::cerr << "Wrong parameters." << std::endl;
		::exit(-1);
	}

	if (::strcmp(argv[1], "-") == 0)
	{
		int ch = 0;
		std::string data;

		ch = ::fgetc(stdin);
		while (ch != EOF)
		{
			data += (char)ch;
			ch = ::fgetc(stdin);
		} 
		std::cout << data.size() << ":" << data;
	}
	else
	{
		log("Parameter number: " << argc);
		for (int i = 1; i < argc; ++i)
		{
			log("Printing parameter number " << i);
			log("	char count: " << ::strlen(argv[i]));
			std::cout << ::strlen(argv[i]) << ":" << argv[i];
		}
	}
	std::cout << std::endl;

	return 0;
}



