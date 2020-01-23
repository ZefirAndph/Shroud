#ifndef PPM_H
#define PPM_H

#include <string>
#include <fstream>
#include <map>

typedef struct
{
	int r;
	int g;
	int b;
} Color;

class PPM
{
	private:
		int width;
		int height;
		// array
		std::map<std::pair<int, int>, Color> pixels;
	public:
		PPM(int w, int h);	// create
		PPM(std::string path);	// from file
		void Set(int x, int y, int r, int g, int b);	// r g b
		void Set(int x, int y, std::string hex);		// hex code
		void Set(int x, int y, bool a); 				// black & white
		void Set(int x, int y, int g);	 				// for grayscale
		void Generate(std::string path);				// MakeFile
};

#endif


/* EX 
	
	ofstream img (path.ppm);
	img << "P3" << endl;
	img << width << " " << height << endl;
	img << "255" << endl;
	for(y)
		for(x)
			img << r < " " << g << " " << b << endl;

*/
