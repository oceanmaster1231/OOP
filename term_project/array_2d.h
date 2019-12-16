#ifndef ARRAY_2D
#define ARRAY_2D

#include <iostream>

class array_2d {
protected:
	const int width = 5;
	const int height = 12;
	static int array[width][height];

public:
	array_2d();
	int set_color(int x, int y);
}; 

#endif 
