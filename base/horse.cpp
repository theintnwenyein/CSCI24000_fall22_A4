#include "horse.h"
#include <iostream>
#include <string>

Horse::Horse(){
	        Horse::position = 0;
}

void Horse::advance(){
	        int coin = rand() % 2; // flipping the coin
		        if (coin == 1){ // if it is head, increase the position of the horse by 1
				position++;
						        }
}

int Horse::getPosition(){
	        return position; // getter
}


