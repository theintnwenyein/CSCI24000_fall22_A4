#Use python3 horse.py -o horse

import random


class Horse:
    __position = 0

    def __init__(self):
        pass

    def advance(self):
            coin = random.randint(0,1) #generating a random number between 1 and 0
            if (coin == 1):
                Horse.__position += 1

    def getPosition(self):
        return Horse.__position



class Race:
    _horseNum = 5
    _length = 15
    _h = [Horse()] * _horseNum # Creating an array of size 5 by using the instance of Horse class

    def __init__(self):
        pass

    def printLane(self, horseNum):
        for i in range(Race._length):
            pos = Race._h[horseNum].getPosition()
            if pos == i:
                print(horseNum, end = "")
            else:
                print(".", end = "")
        print("")

    def start(self):
        keepGoing = True
        winner = 0
        while (keepGoing):
            j = 0
            while (j<Race._horseNum):
                Race._h[j].advance()
                self.printLane(j)

                if Race._h[j].getPosition() == Race._length: # Checking if any horsescross the finish line
                    keepGoing = False
                    winner = j
                j += 1
            print("")
        print("Horse ", winner , " wins!")

seed = input("Please enter a random number: ")
random.seed(seed)
r = Race()
r.start()

