/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cards.h
 * Author: codyj
 *
 * Created on December 12, 2021, 11:52 AM
 */

#include <iostream>
using namespace std;

//Craeting Class
class Cards
{
    // Access specifier
    public:
    void printCards(vector<card> hand){
    const string CARD_VALUES[14] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "X"}; //makes it easier to print
    for(int i=0;i<hand.size();i++){
    /**cout << "----------" << endl
     * << "|" << ((hand[i].up)?(hand[i].value):('X')) << ((hand[i].up)?((printSuit(hand[i]))):('X')) << setw(6) << "|" << endl
     * << "|" << setw(8) << "|" << endl
     * << "|" << setw(8) << "|" << endl
     * << "|" << setw(8) << "|" << endl
     * << "|" << setw(6) << ((hand[i].up)?(hand[i].value):('X')) << ((hand[i].up)?(printSuit(hand[i])):('X')) << "|" << endl
     << "----------" << endl;*/
     
     if(hand[i].up){ //if the hand is face up we print this
     cout << CARD_VALUES[(hand[i].value-1)] << printSuit(hand[i]) << " ";
     }
     else{ //if it's face down we print XX
     cout << CARD_VALUES[13] << CARD_VALUES[13] << " ";
     }
    }
    cout << endl;
    }
};
//Semicolon after end of class
int main()
{
    //Creating object
    Cards obj;
    //Calling fucntion via object
    obj.printCards("Pass Variable Here");
    return 0;
}




