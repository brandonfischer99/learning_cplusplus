#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

#define MAX_CHIPS 100
#define MAX_TURN 0.5

int main()
{
   bool player1Turn = true, gameOver = false;
   int chipsInPile = 0, chipsTaken = 0, chipsThisTurn;
   string playerNames[2];

   cout << "Player 1, please enter your name: \n";
   cin >> playerNames[0];
   cout << "Thanks " << playerNames[0] << " and good luck!\n\n";
   cout << "Player 2, please enter your name: \n";
   cin >> playerNames[1];
   cout << "Thanks " << playerNames[1] << " and good luck!\n\n";

   //seed random number generator
   srand(time(0));

   chipsInPile = (rand() % MAX_CHIPS) - 1;
   cout << "This round will start with " << chipsInPile 
      << " chips in the pile\n\n";
   chipsThisTurn = MAX_TURN * chipsInPile;

   while(!gameOver)
   {
      do
      {
         if(player1Turn)
         {
            cout << playerNames[0] << ", how many chips would you like?\n";
         }
         else
         {
            cout << playerNames[1] << ", how many chips would you like?\n";
         }
         if(chipsThisTurn == 0)
            chipsThisTurn++;
         cout << "You can take up to " << chipsThisTurn << " this round\n";
      
         cin >> chipsTaken;

      } while((chipsTaken > chipsThisTurn) && (chipsInPile > 1));
   
      chipsInPile -= chipsTaken;
      chipsThisTurn = MAX_TURN * chipsInPile;
      cout << "\n" << chipsInPile << " chip(s) left in the pile\n";
      if(chipsInPile == 0)
      {
         gameOver = true;
         if(player1Turn)
            cout << "\n" << playerNames[0] << " has won the game!\n";
         else
            cout << "\n" << playerNames[1] << " has won the game!\n";
      }
      else
         player1Turn = !player1Turn;

   }

   return 0;
}
