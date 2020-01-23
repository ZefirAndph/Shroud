#include "andph.h"

Arguments::Arguments(int argc, char ** argv)
{
	if(argc < 2)
		this->mode = MODE_HELP;
	else
	{
		std::string tmp(argv[ARG_MODE]);
		
		if(tmp.compare("help") == 0)
			this->mode = MODE_HELP;

		if(tmp.compare("w2m") == 0)
			this->mode = MODE_WDT2IMG;

	}
}

Mode Arguments::GetMode()
{
	return this->mode;
}