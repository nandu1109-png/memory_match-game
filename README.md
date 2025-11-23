# Memory Match Game (C Project)

## Abstract
The Memory Match Game is an interactive terminal-based C application where the player attempts to match hidden pairs on a 4×4 grid. Each round, the player selects two cards using row and column coordinates. If the numbers match, the cards stay revealed; otherwise, they flip back. The objective is to match all 8 pairs.

This project demonstrates core C programming concepts including arrays, loops, randomization, conditional logic, and input validation.

---

## Features of the Program

- 4×4 game grid (16 cards, 8 pairs)
- Cards are randomly shuffled at every game start
- User selects two cards per turn
- Prevents selecting already flipped cards
- Displays number of matched pairs
- Fully terminal-based interface
- Beginner-friendly and easy to understand

---

## Technical Requirements

### System Requirements
- Operating System: Windows / Linux / macOS
- Interface: Terminal / Command line
- Memory: Minimum 2 MB
- Storage: No persistent storage required

### Software Requirements
- C Compiler: GCC / MinGW / Clang / MSVC
- Works with any code editor (VS Code, Dev-C++, Code::Blocks, Turbo C, Vim/Nano)

### Required Libraries
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
Functional Requirements
User Interface

Entirely text-based

Shows game board with hidden and revealed cards

Validates user input and prevents invalid selections

Game Mechanics
Function	Description
Pick Cards	User enters coordinates for two cards
Match	Cards remain visible and match count increases
No Match	Cards flip back
Restriction	User cannot pick already revealed cards
Program Flow

Card values are duplicated (1–8) and randomly shuffled

Player plays until all pairs are matched

Displays congratulatory message at completion

Compilation and Execution
Linux / macOS
gcc memory_game.c -o memory_game
./memory_game

Windows (MinGW)
gcc memory_game.c -o memory_game.exe
memory_game.exe

Screenshots

(Add your screenshots after running the program)

Suggested folder:

/screenshots
  screenshot1.png
  screenshot2.png


Insert screenshot into README:

![Game Screenshot](screenshots/screenshot1.png)

Repository Structure
Memory-Match-Game/
 ├── memory_game.c
 ├── README.md
 └── screenshots/

Future Improvements

Move counter

Timer / Time challenge mode

Levels of difficulty

Sound effects

High-score tracking

Author

Your Name — GitHub Profile Link
