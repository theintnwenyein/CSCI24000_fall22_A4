#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"
#include <string>

class Race{
	private:
		int length;
		Horse h[5];
		int horseNum;
	public:
		Race();
		Race(int length); // Setter
		void printLane(int horseNum);
		void start();
};

#endif
