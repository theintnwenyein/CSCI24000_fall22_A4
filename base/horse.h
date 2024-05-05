#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

#include <string>

class Horse{
	private:
		int position; // Making a private attributive
	public:
		Horse();
		void advance();
		int getPosition(); // Making the getter
};

#endif
