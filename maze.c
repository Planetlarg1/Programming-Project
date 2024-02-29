#include <stdio.h>
#include <stdlib.h>

// Define the struct for maze
typedef struct {
    char height;
    char width;
    char contents[0][0];
    int position[2]; // Coords of player withing maze
} maze;

int createMazeStruct(char filename[100]){
    // Create file and interate through to fill maze height, width
    // Reallocate memory for contents so dimensions are height and width, then fill
    // If there are any invalid characters, return 0 (maze is invalid)
    // Close file
    // Otherwise return 1
}

int validMove(char move){
    // Check if input is a valid character (w,a,s,d,m)
    // Check if player can move in intended direction
    // Return 1 if yes, 0 if no
}

int movePlayer(char move){
    // Change coords to intended position
}

void showMap(){
    // Display map showing current position
}

int checkWin(){
    // Check if player has reached end
    // Return 1 if yes, 0 if no
}

int main(){
    // Iterate until valid maze found
    int valid = 0;
    while(valid == 0){
        valid = 1;
        // Open text document
        char filename[100];
        // Check if filename is valid, then pass into createMazeStruct
        valid = createMazeStruct(filename);

        // MAZE TESTING - if any tests fail, valid is changed to 0
    
        // If dimensions are correct

        // If maze has holes in outer wall

        // If maze has multiple S/E

        // If maze is missing S or E
    }

    // Now complete maze
    int solved = 0;
    char move;
    while (solved == 0){
        // Input move
        // Check move is valid
        if (validMove(move) == 0){
            movePlayer(move);
        }
        else{
            // Error message
            continue;
        }

        // If move is m, show map
        // Otherwise, move player in intended direction

        // Check for win
        if (checkWin() == 1){
            solved = 1;
        }
    }

    // Display congratulations message
    // Ask if player would like to retry with the same/different maze
}