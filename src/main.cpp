#include <iostream>

#include "shared/andph.h"
#include "shared/ppm.h"

// Shroud MODE in out
int main(int argc, char** argv)
{
	/*
	Arguments* args = new Arguments(argc, argv);
	switch(args->GetMode())
	{
		case MODE_WDT2IMG:
			std::cout << "WDT to IMG" << std::endl;
			break;
		case MODE_HELP:
		default:
			std::cout << "" << std::endl;
			std::cout << "Shroud $1 $2 $3:" << std::endl;
			std::cout << "\t$1 MODE" << std::endl;
			std::cout << "\t\thelp\t - for this help message" << std::endl;
			std::cout << "\t\tw2j\t - for this help message" << std::endl;
			break;
	}*/
	PPM* img = new PPM(2,2);
	
	img->Set(0,0,0,0,0);
	img->Set(0,1,255,0,0);
	img->Set(1,0,0,255,0);
	img->Set(1,1,0,0,255);

	img->Generate("./test.ppm");
	return APP_SUCCEED;
}