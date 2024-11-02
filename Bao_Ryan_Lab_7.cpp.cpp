//Ryan Bao
//11/2/2024
//Lecture 7

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std; 

int main() {         
  ifstream game_scores;                   //reads data

  string player_1;                     //define variables
  double player_1_score_1;
  double player_1_score_2;
  double player_1_score_3;
  string player_2;
  double player_2_score_1;
  double player_2_score_2;
  double player_2_score_3;
  string player_3;
  double player_3_score_1;
  double player_3_score_2;
  double player_3_score_3;
  double player_1_average;
  double player_2_average;
  double player_3_average;
    
  game_scores.open("game_scores.txt");              //open file
  
  game_scores >> player_1 >> player_1_score_1 >> player_1_score_2 >> player_1_score_3 >> player_2 >> player_2_score_1 >> player_2_score_2 >> player_2_score_3 >> player_3 >> player_3_score_1 >> player_3_score_2 >> player_3_score_3;                    //get values from input file
  player_1_average = (player_1_score_1 * 0.2) + (player_1_score_2 * 0.3) + (player_1_score_3 * 0.5);   //calculate averages
  player_2_average = (player_2_score_1 * 0.2) + (player_2_score_2 * 0.3) + (player_2_score_3 * 0.5);
  player_3_average = (player_3_score_1 * 0.2) + (player_3_score_2 * 0.3) + (player_3_score_3 * 0.5);

  //print accordingly
  //Expert
  if (player_1_average > 2000)
    cout << "Player 1: Congrats! You are an Expert!" << endl;
  if (player_2_average > 2000)
    cout << "Player 2: Congrats! You are an Expert!" << endl;
  if (player_3_average > 2000)
    cout << "Player 3: Congrats! You are an Expert!" << endl;
  //Master
  if (player_1_average > 1800 && player_1_average <= 2000)
    cout << "Player 1: Master - Good Job!" << endl;
  if (player_2_average > 1800 && player_1_average <= 2000)
    cout << "Player 2: Master - Good Job!" << endl;
  if (player_3_average > 1800 && player_1_average <= 2000)
    cout << "Player 3: Master - Good Job!" << endl;
  //Advanced
  if (player_1_average > 1500 && player_1_average <= 1800)
    cout << "Player 1: Advanced - Good Job!" << endl;
  if (player_2_average > 1500 && player_1_average <= 1800)
    cout << "Player 2: Advanced - Good Job!" << endl;
  if (player_3_average > 1500 && player_1_average <= 1800)
    cout << "Player 3: Advanced - Good Job!" << endl;
  //Intermediate
  if (player_1_average >= 1000 && player_1_average <= 1500)
    cout << "Player 1: Intermediate " << endl;
  if (player_2_average >= 1000 && player_1_average <= 1500)
    cout << "Player 2: Player 1: Intermediate " << endl;
  if (player_3_average >= 1000 && player_1_average <= 1500)
    cout << "Player 3: Intermediate " << endl;
  //Beginner
  if (player_1_average < 1000)
    cout << "Player 1: Beginner - Keep Practicing!" << endl;
  if (player_2_average < 1000)
    cout << "Player 2: Beginner - Keep Practicing!" << endl;
  if (player_3_average < 1000)
    cout << "Player 3: Beginner - Keep Practicing!" << endl;

  game_scores.close();                      //close data
return 0;
}

/*
Player 1: Master - Good Job!
Player 2: Beginner - Keep Practicing!
Player 3: Beginner - Keep Practicing!
*/
