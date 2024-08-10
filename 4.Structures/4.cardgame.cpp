/* Write a structure to model a playing card
 *      a person called chardsharp shows you 3 cards
        He places them down on the table and interchanges them several times
        If you can guess correctly where a particular card is you win 

        Details of the cards 
            1. every card has a number and a suit it belongs to 
            2. The card number goes from 2 to 14 where 
                    11 - jack
                    12 - queen 
                    13 - king 
                    14 - ace
            3. There are 4 card suits from 0 to 3
                    0 - clubs
                    1 - diamond
                    2 - heart
                    3 - spade
        //In this program we will have 3 diffrent cards and we will swap them using a temp variable and finally ask the user to guess the position of a paritular card . 
        If the position guessed in correct , he wins else he looses 
 */
#include <iostream>
using namespace std;
//declaring card suits
const int clubs = 0;
const int diamond = 1;
const int heart = 2;
const int spade = 3;
//declaring standard card numbers
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;
//declaring a card struct
struct card{
    int number;
    int suit;
};
//main function
int main(){
    //declaring temp , position , and choosen variables under card struct .
    // Reason - temp variable helps in swaping the cards , position variable helps to keep track of the correct postion of the card to be guessed and the chosen variable stores the card guessed by the user 
    card temp,prize,chosen;
    //declaring and initialising 3 cards for the game
    card card1 = {2,heart};
    cout<<"Card 1 is 2 of hearts"<<endl;
    card card2 = {jack,diamond};
    cout<<"Card 2 is jack of diamonds"<<endl;
    card card3 = {7,spade};
    cout<<"Card 3 is 7 of spade"<<endl;
    //delaring the prize
    prize = card3;
    //swapping 
    cout<<"Swapping card1 and card3"<<endl;
    temp = card1;
    card1 = card3;
    card3 = temp;
    cout<<"swapping card2 and card1"<<endl;
    temp = card2;
    card2 = card1;
    card1 = temp;
    cout<<"Swapping card3 and card2"<<endl;
    temp = card2;
    card2 = card3;
    card3 = temp;
    //allowing the user to choose the card number which has 7 of spade as an int value 
    int positionGuess;
    cout<<"Enter the card number (1/2/3) that contains 7 of spade : ";
    cin>>positionGuess;
    //assigning the int value of the guess to the card "chosen" using switch cases
    switch(positionGuess){
        case 1 : chosen = card1;break;
        case 2 : chosen = card2;break;
        case 3 : chosen = card3;break;
    }
    //now compare chosen to prize 
    //Note that similar to how structure cant be added , they also cant be comapred directly , So we cant say
    // if(chosen == prize) because == operator doesnt have a method to comare structures but this can be achieved using operator overloading. 
    if(chosen.number == prize.number && chosen.suit == prize.suit){
        cout<<"Your guess is correct ! You win ";
    }
    else{
        cout<<"Nope !!! You lose ..";
    }

}

