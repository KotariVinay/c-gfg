/*
Name : K.Y.Naga Sai Vinay
Date : 26-05-2024
Description : Write a program for a matchstick game being played between the
computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follows:
- There are 21 matchsticks.
- The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
- After the person picks, the computer does its picking.
- Whoever is forced to pick up the last matchstick loses the game.
*/
#include<stdio.h>
int main()
{
    int match_sticks=21,user_input,computer;
    while(match_sticks>=1)
    {
	printf("Total Matchsticks : %d\n",match_sticks);
	printf("pick matchsticks between 1 to 4 : ");
	scanf("%d",&user_input);
	if(user_input>4)
	{
	    printf("Invalid Input");
	    break;
	}
	computer=5-user_input;
	printf("Computer picks up %d matchsticks\n",computer);
	match_sticks=match_sticks-computer-user_input;

	if(match_sticks==1)
	{
	    printf("You have been lost via computer.");
	    break;
	}
    }
    return 0;
}

