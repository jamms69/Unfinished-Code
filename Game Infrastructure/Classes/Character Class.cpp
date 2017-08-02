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
	string name;
	string inventory[10];
	int level;
	int hp;
	int gold;
	string formattedStats;

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
	void setInventory(string item, int place) {
		inventory[place] = item;
	}
	void setGold(int num) {
		gold = num;
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
	string getInventory() {
		for (int i = 0; i >= 10; ++i) {
			cout << i << inventory[i]; //FIX THIS:this should RETURN a list of items  //prints place(i) and item (inventory[i])
		}
	}
	int getGold() {
		return gold;
	}

	//returns formated stats for display or save
	string formatStats() {
		

	}


};



//this program is a test to make a bunch of characters and then save them to a txt file
int main() {
	/*
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

		char_save << "\n\n" << name.getName() << "," << name.getLevel() << "," << name.getHP();  //change this part to character.format_stats function?

		cout << '\n' << "SAVE GENERATED" << "\n\n";
	}
	char_save.close();
	*/
	//test

	character dude("dude");

	int num;
	
	cout << "Enter an amount of Gold: ";
	cin >> num;
	dude.setGold;

	




}




//make sure that argument parameters/variables remain local in scope for individual functions Ex: setHealth(int a) is unaffected by setLevel(int a)
//word is used for string parameters and num is used for int parameters other names are used to make functions clearer

//TO DO:
//add fstream.h for file containing character obj values and inventories (basically enable saving data)
//eventually create real header files for proper style
//member function that returns all of class objects values
//concatenate strings from inventory into a format to be printed into save file

//what else do you need:
//vector to hold list of objects(characters)?
//pointers for creating more objects?
//Can you RETURN a function?
// does to_string() convert value or just print it
