#include <iostream>
#include "horse.h"
#include "race.h"

int main(){
	int seed = 0;
	std::cout<<"Please enter a random seed: ";
	std::cin>> seed; // Accepting the user input and storing it in the seed variable
	srand(seed);

	Race r; 
	r.start(); // start the race
	return 0;
}



