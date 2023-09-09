# Dante

## Description

The Dante Project is a maze generation and solving program. This program is designed to generate random mazes, solve them using various algorithms, and visualize the results.

## Features

- **Maze Generation:** Create random mazes of varying sizes and complexity levels.
- **Maze Solving:** Find the shortest path from the maze's start point to the exit.
- **Visualization:** Display the maze and solution in a file.
- **Input and Output:** Accept maze dimension as input and output the solution path.
- **Error Handling:** Robust error handling to prevent crashes.

## Getting Started

### Installation

1. Clone this repository to your local machine:

   ```bash
   git clone git@github.com:Maskalito/Dante.git
   ```
### Usage

1. Generate a maze

There are few options for the generation :

  ```bash
  ./generator/generator x y [perfect]
  ```
The perfect argument is optional. A perfect maze is a maze with no loops and a unique solution. By default, the generated maze is imperfect.

If you want to store this generated maze to solve it with the solver you can use this command :

  ```bash
  ./generator/generator x y [perfect] > maze.txt
  ```
(maze.txt is the file that will contain the maze)

2. Solve a maze

To solve a maze you can use this command :

  ```bash
  ./solver/solver maze.txt
  ```
The path from the start to the exit will be displayed with the 'o' character.

### Algorithm

1. Generation

  For the generation algorithm, we used the "Hunt and Kill" algorithm. Firstly, the algorithm create an empty map with walls. Secondly, it launch a square which randomly break walls to create a way in the map. When the square can no longer move,         the algorithm search for the first empty square of the map and re-start breacking walls. The algorithm stops when all the squares have been covered.

2. Solving

  For the solve algorith, we use the "Recursive backtracking" algorithm. It launches a "homing head" which randomly choose a way in the maze. If it can no longer move, it goes back until he finds a path he can take. The algorithm stops when it find      the exit.

### Credit

This project was done in groupe with the help of Axel Averly (github : AxelAv19)
