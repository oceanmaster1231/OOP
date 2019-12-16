#ifndef BIG_BLOCK_H
#define BIG_BLOCK_H

#include <vector>

class big_block {
	protected:
		int x, y;
	public:
		void move_left();
		void move_right();
		void move_down();
		void move_rotate();

		void possible_left();
		void possible_right();
		void possible_down();
		void possible_rotate();
};

#endif 
