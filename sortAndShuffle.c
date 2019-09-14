//Harry Alenkhe 17314511
//Program to short and shuffle a list of songs recieved as input.
//Part 1: Input put the songs and artists.
//Part 2: Sort the songs alphabetically.
//Part 3: Shuffle all the songs.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//User library that holds all the function definitions
#include "sortAndShuffle.h"
void userInput(char artists[][MAX_NAME],char songsArtist1[][MAX_NAME],char songsArtist2[][MAX_NAME],char songsArtist3[][MAX_NAME],char songsArtist4[][MAX_NAME],int numOfArtists,int *pnumSongsArtist1,int *pnumSongsArtist2,int *pnumSongsArtist3,int *pnumSongsArtist4)
{
        int i,length,numSongsArtist1,numSongsArtist2,numSongsArtist3,numSongsArtist4;
        printf("********************************************************************************\n");
        //First Artist (Atlest 1 must be entered).
        printf("Insert an artist/group name: ");
        fgets(artists[0],MAX_NAME,stdin);
        //Removes the carriage return from the artist.
        strtok(artists[0], "\n");
        //Capitalises the first character of the artist name
        if(artists[0][0] >='a' && artists[0][0]<='z')
                artists[0][0] = artists[0][0]-'a'+'A';
        else
                artists[0][0]=artists[0][0];

        //Enter the songs for the first artist.
        for(i=0; i < MAX_SONGS; i++)
        {
                printf("  -Insert Song %d for %s: ", i+1,artists[0]);
                fgets(songsArtist1[i], MAX_NAME, stdin);
                //Capitalises the first letter of the song name
                if(songsArtist1[i][0] >='a' && songsArtist1[i][0]<='z')
                        songsArtist1[i][0] = songsArtist1[i][0]-'a'+'A';
                else
                        songsArtist1[i][0]=songsArtist1[i][0];
                //If the return command is pressed it exits
                if(songsArtist1[i][0]=='\n')
                        break;

                //Removes the carriage return from the song
                length = strlen(songsArtist1[i]);
                songsArtist1[i][length -1] = '\0';
        }
        printf("\n");
        //if the number of songs entered is over 0
        //return that number as the number of songs for the artist
        if(i>0)
        {
                numSongsArtist1=i;
                *pnumSongsArtist1=numSongsArtist1;
        }
        //else return 0
        else
        {
                numSongsArtist1=0;
                *pnumSongsArtist1=numSongsArtist1;
        }
        //If the number of artists is 2 enter another artist
        if(numOfArtists>=2)
        {
                printf("Insert an artist/group name: ");
                fgets(artists[1],MAX_NAME,stdin);
                //Removes the carriage return from the artist.
                strtok(artists[1], "\n");
                //Capitalises the first character of the artist name
                if(artists[1][0] >='a' && artists[1][0]<='z')
                        artists[1][0] = artists[1][0]-'a'+'A';
                else
                        artists[1][0]=artists[1][0];
                //Enter the songs for the second artist.
                for(i=0; i < MAX_SONGS; i++)
                {
                        printf("  -Insert Song %d for %s: ", i+1,artists[1]);
                        fgets(songsArtist2[i], MAX_NAME, stdin);
                        //Capitalises the first letter of the song name
                        if(songsArtist2[i][0] >='a' && songsArtist2[i][0]<='z')
                                songsArtist2[i][0] = songsArtist2[i][0]-'a'+'A';
                        else
                                songsArtist2[i][0]=songsArtist2[i][0];
                        //If the return command is pressed it exits
                        if(songsArtist2[i][0]=='\n')
                                break;
                        //Removes the carriage return from the song
                        length = strlen(songsArtist2[i]);
                        songsArtist2[i][length -1] = '\0';
                }
                //if the number of songs entered is over 0
                //return that number as the number of songs for the artist
                if(i>0)
                {
                        numSongsArtist2=i;
                        *pnumSongsArtist2=numSongsArtist2;
                }
                //else return 0
                else
                {
                        numSongsArtist2=0;
                        *pnumSongsArtist2=numSongsArtist2;
                }
                printf("\n");
        }
        //If the number of artists is 3 enter another artist
        if(numOfArtists>=3)
        {
                printf("Insert an artist/group name: ");
                fgets(artists[2],MAX_NAME,stdin);
                //Removes the carriage return from the artist.
                strtok(artists[2], "\n");
                //Capitalises the first character of the artist name
                if(artists[2][0] >='a' && artists[2][0]<='z')
                        artists[2][0] = artists[2][0]-'a'+'A';
                else
                        artists[2][0]=artists[2][0];
                //Enter the songs for the third artist.
                for(i=0; i < MAX_SONGS; i++)
                {
                        printf("  -Insert Song %d for %s: ", i+1,artists[2]);
                        fgets(songsArtist3[i], MAX_NAME, stdin);
                        //Capitalises the first letter of the song name
                        if(songsArtist3[i][0] >='a' && songsArtist3[i][0]<='z')
                                songsArtist3[i][0] = songsArtist3[i][0]-'a'+'A';
                        else
                                songsArtist3[i][0]=songsArtist3[i][0];
                        //If the return command is pressed it exits
                        if(songsArtist3[i][0]=='\n')
                                break;
                        //Remove the carriage return from the song
                        length = strlen(songsArtist3[i]);
                        songsArtist3[i][length -1] = '\0';
                }
                //if the number of songs entered is over 0
                //return that number as the number of songs for the artist
                if(i>0)
                {
                        numSongsArtist3=i;
                        *pnumSongsArtist3=numSongsArtist3;
                }
                //else return 0
                else
                {
                        numSongsArtist3=0;
                        *pnumSongsArtist3=numSongsArtist3;
                }
                printf("\n");
        }
        //If the number of artists is 4 enter another artist
        if(numOfArtists==4)
        {
                printf("Insert an artist/group name: ");
                fgets(artists[3],80,stdin);
                //Removes the carriage return from the artist.
                strtok(artists[3], "\n");
                //Capitalises the first character of the artist name
                if(artists[3][0] >='a' && artists[3][0]<='z')
                        artists[3][0] = artists[3][0]-'a'+'A';
                else
                        artists[3][0]=artists[3][0];
                //Enter the songs for the fourth artist.
                for(i=0; i < MAX_SONGS; i++)
                {
                        printf("   -Insert Song %d for %s: ", i+1,artists[3]);
                        fgets(songsArtist4[i], MAX_NAME, stdin);
                        //Capitalises the first letter of the song name
                        if(songsArtist4[i][0] >='a' && songsArtist4[i][0]<='z')
                                songsArtist4[i][0] = songsArtist4[i][0]-'a'+'A';
                        else
                                songsArtist4[i][0]=songsArtist4[i][0];
                        //If the return command is pressed it exits
                        if(songsArtist4[i][0]=='\n')
                                break;
                        //Remove the carriage return from the song
                        length = strlen(songsArtist4[i]);
                        songsArtist4[i][length -1] = '\0';
                }
                //if the number of songs entered is over 0
                //return that number as the number of songs for the artist
                if(i>0)
                {
                        numSongsArtist4=i;
                        *pnumSongsArtist4=numSongsArtist4;
                }
                //else return 0
                else
                {
                        numSongsArtist4=0;
                        *pnumSongsArtist4=numSongsArtist4;
                }

        }
}

void sortArtists(char artists[][MAX_NAME],char sortedArtists[][MAX_NAME], int numOfArtists)
{
        //To sort the artists I used the quick sort algorithm which was showcased in lecture 3
        int i =0;
        int j=0;
        int minIndex = 0;
        char swap[MAX_NAME];

        //Puts the artists into a new array called sortedArtists ready to be sorted
        for(i=0; i<numOfArtists; i++)
                strcpy(sortedArtists[i],artists[i]);
        //i iterates over all elements of the array except the last minIndex is set to i
        for(i=0; i<(numOfArtists-1); i++)
        {
                minIndex = i;
                //find the min element in the sub array of [i,numOfArtists]
                for(j=i+1; j<numOfArtists; j++)
                {
                        if(strcmp(sortedArtists[j], sortedArtists[minIndex]) < 0)
                                minIndex = j;
                }
                memset(swap, '\0', sizeof(swap));
                //swap the elements pointed by i and the minIndex
                strcpy(swap,sortedArtists[i]);
                strcpy(sortedArtists[i], sortedArtists[minIndex]);
                strcpy(sortedArtists[minIndex], swap);
        }
}

void sortSongs(char songsArtist1[][MAX_NAME],char songsArtist2[][MAX_NAME],char songsArtist3[][MAX_NAME],char songsArtist4[][MAX_NAME], int numOfArtists,int numSongsArtist1,int numSongsArtist2,int numSongsArtist3,int numSongsArtist4)
{
        //To sort the songs I used the quick sort algorithm which was showcased in lecture 3
        int i,j,minIndex;
        char swap[MAX_NAME];
        //i iterates over all elements of the array except the last minIndex is set to i
        for(i=0; i< (numSongsArtist1-1); i++)
        {
                minIndex = i;
                //find the min element in the sub array of [i,numSongsArtist1]
                for(j=i+1; j<numSongsArtist1; j++)
                {
                        if(strcmp(songsArtist1[j], songsArtist1[minIndex]) < 0)
                                minIndex = j;
                }
                memset(swap, '\0', sizeof(swap));
                //swap the elements pointed by i and the minIndex
                strcpy(swap,songsArtist1[i]);
                strcpy(songsArtist1[i], songsArtist1[minIndex]);
                strcpy(songsArtist1[minIndex], swap);
        }
        if(numOfArtists>=2)
        {
                //i iterates over all elements of the array except the last minIndex is set to i
                for(i=0; i< (numSongsArtist2-1); i++)
                {
                        minIndex=i;
                        //find the min element in the sub array of [i,numSongsArtist2]
                        for(j=i+1; j<numSongsArtist2; j++)
                        {
                                if(strcmp(songsArtist2[j], songsArtist2[minIndex]) < 0)
                                        minIndex = j;
                        }
                        memset(swap, '\0', sizeof(swap));
                        //swap the elements pointed by i and the minIndex
                        strcpy(swap,songsArtist2[i]);
                        strcpy(songsArtist2[i], songsArtist2[minIndex]);
                        strcpy(songsArtist2[minIndex], swap);
                }

        }
        if(numOfArtists>=3)
        {
                //i iterates over all elements of the array except the last minIndex is set to i
                for(i=0; i<(numSongsArtist3-1); i++)
                {
                        minIndex=i;
                        //find the min element in the sub array of [i,numSongsArtist3]
                        for(j=i+1; j<numSongsArtist3; j++)
                        {
                                if(strcmp(songsArtist3[j], songsArtist3[minIndex]) < 0)
                                        minIndex = j;
                        }
                        memset(swap, '\0', sizeof(swap));
                        //swap the elements pointed by i and the minIndex
                        strcpy(swap,songsArtist3[i]);
                        strcpy(songsArtist3[i], songsArtist3[minIndex]);
                        strcpy(songsArtist3[minIndex], swap);
                }
        }

        if(numOfArtists>=4)
        {
                //i iterates over all elements of the array except the last minIndex is set to i
                for(i=0; i<(numSongsArtist4-1); i++)
                {
                        minIndex = i;
                        //find the min element in the sub array of [i,numSongsArtist4]
                        for(j=i+1; j<numSongsArtist4; j++)
                        {
                                if(strcmp(songsArtist4[j], songsArtist4[minIndex]) < 0)
                                        minIndex = j;
                        }
                        memset(swap, '\0', sizeof(swap));
                        //swap the elements pointed by i and the minIndex
                        strcpy(swap,songsArtist4[i]);
                        strcpy(songsArtist4[i], songsArtist4[minIndex]);
                        strcpy(songsArtist4[minIndex], swap);
                }
        }

}

void printSorted(char sortedArtists[][MAX_NAME],char artists[][MAX_NAME], int numOfArtists,int numSongsArtist1,int numSongsArtist2,int numSongsArtist3,int numSongsArtist4,char songsArtist1[][MAX_NAME],char songsArtist2[][MAX_NAME],char songsArtist3[][MAX_NAME],char songsArtist4[][MAX_NAME])
{
        //In this function I print out all the sorted songs and artists
        //songsPosition is a variable that holds the right ;location for the artists songs
        //i and j are counters used to compare the sorted array of artists and the unsorted array
        int i=0,j=0,songsPosition=0;
        printf("********************************************************************************\n");
        printf("Sorted list of songs:\n");

        while(j<numOfArtists)
        {
                printf("%s\n",sortedArtists[j]);
                while(j<numOfArtists)
                {
                        //if the sorted artrist at songsPosition j and the artist in the unsorted array at poisiton i are the same
                        if( strcmp(artists[i],sortedArtists[j])==0 )
                        {
                                //print the correct songs for that artist
                                if(songsPosition==0)
                                {
                                        for(i=0; i< numSongsArtist1; i++)
                                                printf("\t- %s\n",songsArtist1[i]);
                                        printf("\n");

                                }
                                if(songsPosition==1)
                                {
                                        for(i=0; i< numSongsArtist2; i++)
                                                printf("\t- %s\n",songsArtist2[i]);
                                        printf("\n");

                                }
                                if(songsPosition==2)
                                {
                                        for(i=0; i< numSongsArtist3; i++)
                                                printf("\t- %s\n",songsArtist3[i]);
                                        printf("\n");
                                }
                                if(songsPosition==3)
                                {
                                        for(i=0; i< numSongsArtist4; i++)
                                                printf("\t- %s\n",songsArtist4[i]);
                                        printf("\n");
                                }
                                //after printing correct songs, move onto next postion
                                //i goes back to the beginning of the unsorted array and postion points to the first unsorted artist again then break
                                j++;
                                i=0;
                                songsPosition=0;
                                break;
                        }
                        //if the sorted artrist at position j and the artist in the unsorted array at poisiton i are not the same
                        //check the next position in the unsorted array for the right artist and songs
                        else
                        {
                                i++;
                                songsPosition++;
                        }
                }

        }
        printf("********************************************************************************\n");
}

void shuffleSongs(int numOfArtists,char songsToBeShuffled[][MAX_NAME],char songsArtist1[][MAX_NAME],char songsArtist2[][MAX_NAME],char songsArtist3[][MAX_NAME],char songsArtist4[][MAX_NAME],int numSongsArtist1,int numSongsArtist2,int numSongsArtist3,int numSongsArtist4)
{
        //in this function I will first add all the songs into a new array called songsToBeShuffled
        //I will then shuffle that array using Fisher Yates shuffling algorithm showcased in lecture 4
        //I will then print out how ever many songs the user wants in their playlist

        //Called only once to initialize the random number generation
        srand(time(NULL));
        int i,j;
        char swap[MAX_NAME];
        int numAllSongs=numSongsArtist1;
        //first copy all of the first artists songs
        for(i=0; i<numSongsArtist1; i++)
                strcpy(songsToBeShuffled[i],songsArtist1[i]);
        //Then add the rest of the songs depending on how ever many artists the user entered
        if(numOfArtists>=2)
        {
                numAllSongs=numSongsArtist1+numSongsArtist2;
                for(i=numSongsArtist1; i<(numSongsArtist2+numSongsArtist1); i++)
                //put all songs into new array
                        strcpy(songsToBeShuffled[i],songsArtist2[i-numSongsArtist1]);
        }
        if(numOfArtists>=3)
        {
                numAllSongs=numSongsArtist1+numSongsArtist2+numSongsArtist3;
                for(i=numSongsArtist2+numSongsArtist1; i<(numSongsArtist3+numSongsArtist1+numSongsArtist2); i++)
                //put all songs into new array
                        strcpy(songsToBeShuffled[i],songsArtist3[i-(numSongsArtist2+numSongsArtist1)]);
        }
        if(numOfArtists>=4)
        {
                numAllSongs=numSongsArtist1+numSongsArtist2+numSongsArtist3+numSongsArtist4;
                for(i=numSongsArtist3+numSongsArtist2+numSongsArtist1; i<numAllSongs; i++)
                //put all songs into new array
                        strcpy(songsToBeShuffled[i],songsArtist4[i-(numSongsArtist3+numSongsArtist2+numSongsArtist1)]);
        }
        printf("Shuflled Playlist:\n");
        //Fisher Yates shuffling algorithm
        for(i=1; i<numAllSongs; i++)
        {
                //generates random numbers between [0,i]
                j=rand()%(i+1);
                //if i is not equal to j we do a swap between the ith and jth elements
                if(i!=j)
                {
                        strcpy(swap,songsToBeShuffled[j]);
                        strcpy(songsToBeShuffled[j], songsToBeShuffled[i]);
                        strcpy(songsToBeShuffled[i], swap);
                }
        }
        j=0;
        //I now fill the rest of the songsToBeShuffled array with the songs in their new random order
        for(i=numAllSongs; i<24; i++)
        {
                strcpy(songsToBeShuffled[i],songsToBeShuffled[j]);
                j++;
        }
        //print 2 times the number of songs entered
        for(i=0; i<(numAllSongs*2); i++)
                printf("%d - %s\n",i+1,songsToBeShuffled[i]);
        printf("********************************************************************************\n");
}
