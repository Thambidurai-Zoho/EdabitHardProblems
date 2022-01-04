/*
This question is inspired by the popular Uno card game.

Write a function that takes in two arguments: (1) a player's current hand and (2) the current face-up card on the table. The function will return true if the player can make a play, or false if the player has to draw from the deck.

A player can make a play if either:

They have a card that is the same color as the face-up card.
They have a card that is the same number as the face-up card.
canPlay(["yellow 3", "yellow 7", "blue 8", "red 9", "red 2"], "red 1") => true
// Since the player has two red cards, and the face-up card is red.

canPlay(["yellow 3", "yellow 7"], "blue 7") => true
// Since the player has a 7, and the face-up card is a 7.
Examples
canPlay(["yellow 3", "yellow 5", "red 8"], "red 2") ➞ true

canPlay(["yellow 3", "yellow 5", "red 8"], "blue 5") ➞ true

canPlay(["yellow 3", "blue 5", "red 8", "red 9"], "green 4") ➞ false

canPlay(["yellow 3", "red 8"], "green 2") ➞ false
Notes
Return false if the player is not holding any cards (an empty array).
There are no special cards or wild cards in this deck.
*/

bool canPlay(std::vector<std::string> hand, std::string face) {
   //if they have a card that is the same number as the face-up card we return true.
	  for(int i = 0;i < hand.size(); i++){
			 if(hand[i][hand[i].size()-1] == face[face.size()-1]){
				   return true;
			 }
		}
  
   //if they have a card that is the same color as the face-up card we return true.
	  std::string s2 = face.substr(0,face.size()-2);
	  for(int i = 0;i < hand.size(); i++){
			  std::string s1=hand[i].substr(0,hand[i].size()-2);
			  if(s1 == s2){
					return true;
				}
		}
	return false;
}
