//Harry Alenkhe 17314511
//Program to short and shuffle a list of songs recieved as input.
//Part 1: Input put the songs and artists.
//Part 2: Sort the songs alphabetically.
//Part 3: Shuffle all the songs.
#include <stdio.h>
#include <string.h>
//User library that holds all the function definitions
#include "sortAndShuffle.h"
int main(void)
{
        //Arrays to hold the artists and the list of sorted artists
        char artists[MAX_ARTISTS][MAX_NAME],sortedArtists[MAX_ARTISTS][MAX_NAME];
        //Arrays to hold the songs of each artist.
        //(songsArtist1 is the songs for the first artist songsArtist2 for the second Artist etc...)
        //Also an array to hold all the songs that are to be shuffled and added to the playlist
        char songsArtist1[MAX_SONGS][MAX_NAME],songsArtist2[MAX_SONGS][MAX_NAME],songsArtist3[MAX_SONGS][MAX_NAME],songsArtist4[MAX_SONGS][MAX_NAME],songsToBeShuffled[24][MAX_NAME];
        //Variables to hold the number of artists user is inputing and also variables to hold the number of Songs the user inputed.
        //(numSongsArtist1 is the number of songs inputed for the first Artist etc)
        int numOfArtists,i,numSongsArtist1,numSongsArtist2,numSongsArtist3,numSongsArtist4;
        printf("********************************************************************************\n");
        printf("How many Artists are you entering (atleast 1 and atmost 4): ");
        scanf("%d",&numOfArtists);
        fflush(stdin);
        //Part 1: Input put the songs and artists.
        //This function allows the user to input the names of the artists and the songs for each artist.
        userInput(artists,songsArtist1,songsArtist2,songsArtist3,songsArtist4,numOfArtists,&numSongsArtist1,&numSongsArtist2,&numSongsArtist3,&numSongsArtist4);
        //Part 2: Sort the songs alphabetically.
        //These functions sort the Artists in alphabetical order and then the songs in alphabeical order.
        //Then the final function prints the artists and songs out in the alphabetical order.
        sortArtists(artists,sortedArtists,numOfArtists);
        sortSongs(songsArtist1,songsArtist2,songsArtist3,songsArtist4,numOfArtists,numSongsArtist1,numSongsArtist2,numSongsArtist3,numSongsArtist4);
        printSorted(sortedArtists,artists,numOfArtists,numSongsArtist1,numSongsArtist2,numSongsArtist3,numSongsArtist4,songsArtist1,songsArtist2,songsArtist3,songsArtist4);
        //Part 3: Shuffle all the songs.
        //Thus function firstly gets all the songs together into one big array
        //It then shuffles this array so that the songs can be used in the playlist
        shuffleSongs(numOfArtists,songsToBeShuffled,songsArtist1,songsArtist2,songsArtist3,songsArtist4,numSongsArtist1,numSongsArtist2,numSongsArtist3,numSongsArtist4);
        return 0;
}
