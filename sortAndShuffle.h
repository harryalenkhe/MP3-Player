//Harry Alenkhe 17314511
//Program to short and shuffle a list of songs recieved as input.
//Part 1: Input put the songs and artists.
//Part 2: Sort the songs alphabetically.
//Part 3: Shuffle all the songs.
#define MAX_SONGS 3 //Maximum number of songs per artist
#define MAX_NAME 80 //Maximum name you can have for a song or an artist
#define MAX_ARTISTS 4 //Maximum number of artists
//These are all the function definitions that I will be using
void userInput(char artists[MAX_ARTISTS][MAX_NAME],char songsArtist1[][MAX_NAME],char songsArtist2[][MAX_NAME],char songsArtist3[][MAX_NAME],char songsArtist4[][MAX_NAME],int numOfArtists,int *pnumSongsArtist1,int *pnumSongsArtist2,int *pnumSongsArtist3,int *pnumSongsArtist4);
void sortArtists(char artists[][MAX_NAME],char sortedArtists[][MAX_NAME], int numOfArtists);
void sortSongs(char songsArtist1[][MAX_NAME],char songsArtist2[][MAX_NAME],char songsArtist3[][MAX_NAME],char songsArtist4[][MAX_NAME], int numOfArtists,int numSongsArtist1,int numSongsArtist2,int numSongsArtist3,int numSongsArtist4);
void printSorted(char sortedArtists[][MAX_NAME],char artists[][MAX_NAME], int numOfArtists,int numSongsArtist1,int numSongsArtist2,int numSongsArtist3,int numSongsArtist4,char songsArtist1[][MAX_NAME],char songsArtist2[][MAX_NAME],char songsArtist3[][MAX_NAME],char songsArtist4[][MAX_NAME]);
void shuffleSongs(int numOfArtists,char songsToBeShuffled[][MAX_NAME],char songsArtist1[][MAX_NAME],char songsArtist2[][MAX_NAME],char songsArtist3[][MAX_NAME],char songsArtist4[][MAX_NAME],int numSongsArtist1,int numSongsArtist2,int numSongsArtist3,int numSongsArtist4);
