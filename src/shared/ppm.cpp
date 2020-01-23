#include "ppm.h"

PPM::PPM(int w, int h)
{
	this->width = w;
	this->height = h;
}
PPM::PPM(std::string path)
{
	std::ifstream img(path);

/* EX 
	
	ofstream img (path.ppm);
	img << "P3" << endl;
	img << width << " " << height << endl;
	img << "255" << endl;
	for(y)
		for(x)
			img << r < " " << g << " " << b << endl;

*/
	std::string tmp;
	img >> tmp;
	if(tmp.compare("P3") != 0)
		throw 5;
	img >> this->width;
	img >> this->height;

	Color c;
	for(int x = 0; x < this->width; x++)
	{
		for(int y = 0; y < this->height; y++)
		{
			img >> c.r;
			img >> c.g;
			img >> c.b;
			this->pixels[{x, y}] = c;
		}
	}
}
void PPM::Set(int x, int y, int r, int g, int b)
{
	this->pixels[{x, y}] = {r, g, b};
}
//FooBar fb = { /*.foo=*/ 12, /*.bar=*/ 3.4 };
void PPM::Set(int x, int y, std::string hex)
{

}
void PPM::Set(int x, int y, bool a)
{

}
void PPM::Set(int x, int y, int g)
{

}
void PPM::Generate(std::string path)
{
	std::ofstream img (path);
	img << "P3" << std::endl;
	img << this->width << " " << this->height << std::endl;
	for(int y = 0; y < this->height; y++)
		for(int x = 0; x < this->width; x++)
		{
			img << this->pixels[{x, y}].r << " " 
				<< this->pixels[{x, y}].g << " " 
				<< this->pixels[{x, y}].b << std::endl;
		}
}