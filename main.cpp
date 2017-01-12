#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
    int user=0,comp=0;
    char choice;
    int Cchoice= 1+(rand()%3);


while (user != 3 || comp != 3){
          cout<<"Choose rock, paper, or scissors: \n";
           cin>>choice;
           cout<<"user score is: "<<user<<" and comp score is: "<<comp;

/*      this is null until I fix
            while (choice != 'r' || choice != 'p' || choice != 's'){
          cout<<"Please use characters 'r','p',or's'\n";
          cin>>choice;}

         cout<<"good"; //test to see if while loop fixed^
*/
        switch(choice){

    case 'r':
        if (Cchoice==2){
            cout<<"you lose \n";comp++;}
        else
            if(Cchoice==3){
               cout<<"you win \n";user++;}
        break;

    case 'p':
        if (Cchoice==3){
            cout<<"you lose \n";comp++;}
        else
            if (Cchoice==1){
                cout<<"you win \n";user++;}
        break;

    case 's':
        if (Cchoice==1){
            cout<<"you lose \n";comp++;}
        else
            if(Cchoice==2)
            cout<<" you lose \n";user++;
        break;

    default:
        cout<<"It's a tie\n";}
}

if (user==3){
    cout<<"You Win!";
    }
else{
    cout<<"You Lose!";
    }

cout<<" Good Game.";
return 0;
}
//add random number generator for rock paper scissors
//r=1 p=2 s=3
