Goals : To simulate a horse racing game using OOP in C++
Input: The value of the random seed from user
Output: The simulation of horses and their positions until one passes the finish line, and the result of which horse wins
Steps:

- Make a header file for Horse class; horse.h
	- include ifndef and define statements alongside with <string>
	- Under Horse class, make a private attributive with the int type for the position of each horse; int position;
	- Under public, create a null parameter constructor, and two methods
		- Constructor; Horse(); to initialize the values of the variables/ attributives
		- A void method to flip the coin and increases the position one by one; void advance();
		- A getter with the return type int to get the position of each horse; int getPosition();
	- include #endif at the end of the class definition

- Make a header file for Race class: race.h
	- include ifndef and define statements alongside with <string> and "horse.h" 
	- Under Race class, for private session, make an array as an instance of Horse class, and an attributive for the length of the race; int length
	- Under public, creat a null parameter constructor, and a constructor which takes the length of the race as its parameter, and two more methods
		- Constructors; Race(); an Race(int length);
		- A void method which take the number of horses as its parameter to print the tracks of each horse; printLane(int horseNum);
		- A void method to start the race and finish by deciding the winner; start();
	- Include #endif at the end of the Race class definition

- Make a cpp file for implementation of Horse Class; horse.cpp
	- Include the header file; "horse.h", in addition to <string> and <iostream>
	- Under the constructor, initialize the the value of int position to 0
	- Under the advance method, flip a coin by generating a random number; and increases the position of the horse if it is equal to 1
	- Under getPosition getter, simply return the value of the position

- Make a cpp file for implementation of Race Class; race.cpp
	- Include the header file; "race.h", in addition to <string> and <iostream>
	- Under the null parameter constructor Race(); initialize the value of the length of the race to 15
	- Under the setter, set the variable length equal to the attributive of the class; Race::length = length
	- Under the printLane(int horseNum) method, use a for loop to iterate for the length number of times(which is 15)
		- Create a variable to get the position of each horse, and use if conditional statements to check if the current position of the for loop
	is the same as the current position of the horse, if so, print the number of the horse, otherwise print dot
	-  Under the start() method, creat a boolean named keepGoing and set its value to true, also create a variable named winner
		- Under while loop, use for loop to iterate for 5 times
			- Under the for loop, call the advance method for every horse in the array; h[j].advance(); and printLane function for every horse; printLane(j);
				- Still under for loop, check if any of the horses passes the finish line, if one does, set the value of keepGoing to be false		 to kill the while loop, and set the number of winner horse to the winner variable 
	- After the while loop, anounce the winner horse

- Make the main.cpp file 
	- Initialize the variable seed, and set it to 0
	- Ask the user to enter a random number, and store it in the variable named seed
	- Use seed in srand(seed)
	- Run the start() method in Race class
	- Return 0
