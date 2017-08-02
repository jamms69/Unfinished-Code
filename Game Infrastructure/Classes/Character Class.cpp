//classes practice
//BASIC character creators 

#include <iostream.h>
#include <fstream>
#include <string>



using namespace std;






//all classes have are a certain type: basically means name
//classes contain attributes: which means variables
//and they contain behaviors: functions

//this is the BASIC character class
class character {

private:
	string name="DEFAULT";
	int level=0;
	int hp=0;
	int gold=0;
	string inventory[10]; //add default for empty spaces in 
	string formattedStats="Error";

public:
	//constructor for name
	character(string word) {
		setName(word);
	}
	//funcions to set values
	void setName(string word) {
		name = word;
	}
	void setLevel(int num) {
		level = num;
	}
	void setHP(int num) {
		hp = num;
	}
	void setGold(int num) {
		gold = num;
	}
	void setInventory(string item, int place) {
		inventory[place] = item;
	}
	

	//functions to return values
	string getName() {
		return name;
	}
	int getLevel() {
		return level;
	}
	int getHP() {
		return hp;
	}
	int getGold() {
		return gold;
	}
	string getInventory() {
		for (int i = 0; i >= 10; ++i) {
			cout << i << inventory[i]; //FIX THIS:this should RETURN a list of items  //prints place(i) and item (inventory[i])
		}
	}
	//returns formated stats for display or save
	string formatStats() {
		//Name,level,HP,Gold,Inventory[0,pizza;1,donut;]
		formattedStats = name + ','+to_string(level)+','+to_string(hp)+','+to_string(gold);
		//add loop to print inventory array as string
		return formattedStats;
		
	}


};



//this program is a test to make a bunch of characters and then save them to a txt file
int main() {
	
	ofstream char_save("Character_Save_Data.txt");

	string name;
	int num;
	while (name != "end") {
		cout << "Enter a name for new character: ";
		cin >> name;
		character name(name);

		cout << "\nEnter Character's level: ";
		cin >> num;
		name.setLevel(num);

		cout << "\nEnter Character's HP: ";
		cin >> num;
		name.setHP(num);

		char_save << "\n\n" << name.formatStats(); 

		cout << '\n' << "SAVE GENERATED" << "\n\n";
	}
	char_save.close();
	
	
}




//make sure that argument parameters/variables remain local in scope for individual functions Ex: setHealth(int a) is unaffected by setLevel(int a)
//word is used for string parameters and num is used for int parameters other names are used to make functions clearer

//what else do you need:
//vector to hold list of objects(characters)?
//pointers for creating more objects?
//Can you RETURN a function? (UPDATE: you can use a function that uses another function but you must use pointers)
// does to_string() convert value or just print it?
//figure out a better way of creating character class objects
//spread sheets for data?

//TODO:
//Add additional stats
//Make inventory array stuff
//add array of attacks and dialouge (should I make a seperate file structure for simple dialouge and/or attacks?)
//eventually create real header files for proper style--ALMOST
//member function that returns all of class objects values//concatenate strings from inventory into a format to be printed into save file--ALMOST
