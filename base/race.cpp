#include "race.h"
#include <iostream>
#include <string>

Race::Race(){ // Initializing the values of the class attributives
	horseNum = 5;
	length = 15;
}

Race::Race(int length){
	Race::length = length;
}

void Race::printLane(int horseNum){
	for (int i = 0; i < length; i++){
		int pos = h[horseNum].getPosition(); // storing the position of each horse in the variable "pos"
		if (i == pos){// if the horse reaches to the current position, print the horse number
			std::cout<< horseNum;
		}
		else{
			std::cout << "."; // otherwise, print dots
		}
	}
	std::cout<<""<<std::endl; 
}

void Race::start(){
	bool keepGoing = true;
	int winner; 
	while (keepGoing){
		for (int j = 0; j < 5; j++){
			h[j].advance(); // flipping the coin and increases the position for every horse
			printLane(j); // printing the lane for every horse

			if (h[j].getPosition() == length){// checking if one horse reaches to the finish line
				keepGoing = false;
				winner = j; // storing the number of winner horse in the variable winner
			}
		}
	std::cout<<""<<std::endl;
	}
	std::cout<<"Horse "<<winner<<" wins!"<<std::endl;	
}


