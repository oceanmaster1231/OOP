#include "array_2d.h"
#include "big_block.h"

int array_2d::array[width][height];

array_2d::array_2d() {
	//array 생성자 -> 초기화	
}

int array_2d::set_color(int x, int y) {
	array[x][y] = color;
}
