# 🧠 MEMORY MATCH GAME (C Programming)

## 📄 ABSTRACT
The **Memory Match Game** is an interactive terminal-based game written in **C**, where the player attempts to match hidden card pairs on a 4×4 grid. Each round, the player selects two card positions using row and column coordinates. If both cards match, they remain visible; otherwise, they flip back. The objective is to successfully match all 8 pairs.

This project demonstrates key programming concepts such as **arrays, loops, randomization, conditional logic, and input validation**, making it ideal for beginners and students.

---

# ✨ FEATURES

## Core Functionalities
- 🎮 4×4 grid game board (16 cards, 8 matching pairs)
- 🔀 Cards are randomly shuffled every game start
- 🖱️ Player selects two cards using coordinates
- ✔ Prevents selecting already revealed cards
- 🔁 Cards flip back if not matched
- 🔢 Displays matched pair count after every turn
- 🖥 Fully terminal-based experience
- 🧩 Simple and beginner-friendly logic
- ⚠ Basic error handling for invalid input

---

# 🛠️ TECHNICAL REQUIREMENTS

## System Requirements
- Operating System: **Windows / Linux / macOS**
- Terminal / Command Prompt
- Minimum 2 MB RAM
- No storage space required (no save files)

## Software Requirements
- C Compiler: **GCC / MinGW / Clang / MSVC**
- Any IDE or code editor (VS Code, Code::Blocks, Dev-C++, etc.)

## Programming Requirements
- Programming Language: **C**
- Supported Standards: **C89 / C99 / C11**
- Required header files:  
  `stdio.h`, `stdlib.h`, `time.h`

---

# 📌 FUNCTIONAL REQUIREMENTS

## User Interface
- Entirely text-based
- Game board displays hidden and revealed cards
- Validates input and prevents invalid selections

## Game Mechanics
### 🔢 Pick Cards
Player enters coordinates for two cards.

### 🎯 Match
If both cards match, they remain revealed and match count increases.

### ❌ No Match
Cards flip back to hidden state.

### 🚫 Restriction
Player cannot pick already revealed cards.

## Program Flow
- Card values (1–8) are duplicated and shuffled randomly
- Game continues until all 8 pairs are matched
- Displays a congratulatory message when completed

---

## ▶ COMPILATION

### Linux / macOS:
gcc memory_game.c -o memory_game

### Windows (MinGW):
gcc memory_game.c -o memory_game.exe

---

## ▶ RUNNING THE PROGRAM

### Linux / macOS:
./memory_game

### Windows:
memory_game.exe

---

## 📸 SCREENSHOTS
(Add your screenshots after running the game)

Suggested folder:
```
/screenshots
  screenshot1.png
```
<img width="381" height="493" alt="Screenshot 2025-11-23 210728" src="https://github.com/user-attachments/assets/aed3f3b0-d75f-4c95-91c4-e0dab9ebce62" />

  screenshot2.png
  ```
<img width="421" height="313" alt="Screenshot 2025-11-23 210828" src="https://github.com/user-attachments/assets/9bac7a1a-888d-4e66-8a1b-ba496ae4dff2" />

```

Insert screenshot into README once uploaded:
```
![Game Screenshot](screenshots/screenshot1.png)
```

---

## 📁 REPOSITORY STRUCTURE
```
Memory-Match-Game/
 ├── memory_game.c
 ├── README.md
 └── screenshots/
```

---

## 🚀 FUTURE IMPROVEMENTS
- Move counter
- Timer / countdown mode
- Difficulty levels (4×4, 6×6, etc.)
- Sound effects
- Leaderboard / high-score system

---

## 👨‍💻 AUTHOR
Name:NANDU 
