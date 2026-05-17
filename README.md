# 🗳️ Voting Simulator

A console-based voting system built in C++ that simulates a simple polling station experience. Users can cast votes for political parties, and an admin can securely view the results.

---

## Features

- Interactive main menu with three options: Vote, View Results, Exit
- Vote for one of three parties: **PTI**, **PMLN**, or **PPP**
- Admin-protected results panel (username + password required)
- Automatic winner detection with tie-handling logic
- Input validation with clear error messages
- Clean, formatted console UI

---

## How It Works

**Voting**
- Press `V` to open the voting menu
- Select a party (1, 2, or 3) to cast your vote
- A confirmation message is shown after each successful vote

**Viewing Results**
- Press `R` to access the results panel
- Admin credentials are required:
  - Username: `Admin`
  - Password: `1234`
- Displays total votes per party and declares the winner (or a tie)

**Exiting**
- Press `E` to exit the program

---

## Getting Started

### Prerequisites
- A C++ compiler (e.g. GCC, MSVC, Clang)
- Visual Studio (recommended — project files included)

### Build & Run

**Using Visual Studio:**
1. Open `Final.vcxproj`
2. Build the solution (`Ctrl + Shift + B`)
3. Run with `Ctrl + F5`

**Using g++ (command line):**
```bash
g++ Final.cpp -o VotingSimulator
./VotingSimulator
```

---

## Project Structure

```
VotingSimulator/
├── Final.cpp               # Main source file
├── Final.vcxproj           # Visual Studio project file
├── Final.vcxproj.filters   # VS filter definitions
└── x64/Debug/              # Compiled output (Debug build)
```

---

## Tech Stack

- **Language:** C++
- **Concepts used:** Loops, conditionals, switch statements, basic I/O, input validation

---

## Author

**Sammar Abbas**
[github.com/sammar-abbas-shah](https://github.com/sammar-abbas-shah)
