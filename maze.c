#include <stdio.h>
#include <stdlib.h>

// Define the struct for maze
typedef struct {
    char height;
    char width;
    char contents[0][0];
    int startPosition[2]; // Coords of 'S' withing maze
    int endPosition[2]; // Coords of 'E' withing maze
    int playerPosition[2]; // Coords of player withing maze
} maze;

int createMazeStruct(char filename[100]){
    // Create file and iterate through to fill maze height, width, start position and end position
    // Set playerPosition to startPosition
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

int checkValidMaze(){
    // MAZE TESTING - if any tests fail, return 0, otherwise return 1
        
    // If dimensions are correct and maze is rectangular

    // If maze is possible

    // If maze has holes in outer wall

    // If maze has multiple S/E

    // If maze is missing S or E
}

int main(){
    // Iterate until valid maze found
    int valid = 0;
    while(valid == 0){
        valid = 1;
        // Input filename
        char filename[100];
        // Check if filename is valid, then pass into createMazeStruct
        valid = createMazeStruct(filename);

        // MAZE TESTING - if any tests fail, valid is changed to 0
        valid = checkValidMaze();
    }

    // PLAY MAZE
    int solved = 0;
    char move;
    while (solved == 0){
        // Input move
        // Check move is valid
        if (move == 'm' || move == 'M'){
            // Show map
        }
        else if (validMove(move) == 0){
            // Move player in intended direction
        }
        else{
            // Error message
            continue;
        }

        // Check for win
        if (checkWin() == 1){
            solved = 1;
        }
    }

    // Display congratulations message
    // Close game
}