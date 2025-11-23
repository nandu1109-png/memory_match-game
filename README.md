Create a project folder like this:
Memory-Match-Game/
 ├── memory_game.c
 ├── README.md
 └── screenshots/
       └── (add images later)
README
# 🧠 Memory Match Game (C Programming Project)

A simple and interactive **Memory Match Game** developed in C using a 4x4 board (16 cards / 8 pairs).  
This game helps improve logical thinking and memory skills.

---

## 📌 Functional Requirements
✔ The system must randomly shuffle card values.  
✔ The player must select two coordinates per turn.  
✔ Matching pairs stay revealed.  
✔ Non-matching pairs are flipped back.  
✔ The game ends when all 8 pairs are matched.

---

## ✨ Features
- 4×4 memory grid
- Random shuffle on every game start
- Input validation for repeated selections
- Score tracking (number of matches found)
- Console-based and beginner-friendly

---

## ▶ How to Run the Project

### **GCC Compiler**
```bash
gcc memory_game.c -o memory_game
./memory_game

GAME SCREENSHOT
screenshots/
 ├── screenshot1.png
 ├── screenshot2.png
![Game Screenshot](screenshots/screenshot1.png)
Repository structure
Memory-Match-Game
 ├── memory_game.c
 ├── README.md
 └── screenshots/

PROJECT COMPLETED

---

## 🔗 Step 3 — Push to GitHub (Guide)

```bash
git init
git add .
git commit -m "Initial commit - Memory Match Game"
git branch -M main
git remote add origin https://github.com/USERNAME/Memory-Match-Game.git
git push -u origin main

