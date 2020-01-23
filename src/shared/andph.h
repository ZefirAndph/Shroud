#ifndef ANDPH_H
#define ANDPH_H

#include <map>

enum RetVal
{
	APP_SUCCEED 	= 0,
	APP_FAILED		= 1

};

class Andph
{

};

///// Shroud MODE in out
typedef enum 
{
	ARG_THIS,
	ARG_MODE,
	ARG_IN,
	ARG_OUT,
	ARG_LAST
} Args;
typedef enum
{
	MODE_HELP,
	MODE_WDT2IMG,
	MODE_IMG2WDT,

	MODE_LAST
} Mode;
class Arguments
{
	private:
		Mode mode;
	public:
		Arguments(int argc, char ** argv);
		Mode GetMode();
};

#endif