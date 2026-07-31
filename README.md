# doit 📝

A highly customizable, lightwieght feature rich, TUI Based, "to do app" to organize your life.

---

## Features (Current) ✨

- **Task Centre:** Create and display tasks with custom priorities, descriptions, and completion statuses.
- **Habit Centre:** A dedicated daily habit tracker that automatically tracks your current streaks, highest streaks, and last completed dates.
- **Smart Time Tracking:** Automatically logs task creation dates and habit tracking dates using local system time.
- **Modular C++ Engine:** Clean Object-Oriented design separating Tasks, Habits, and Time Utilities.

## Roadmap - Future goals 😏

Doit is currently in active development. Planned features include:

- **Dashboards**
- **Master database**
- **Data Persistence:** File I/O (SQLite/JSON) to save tasks and habits between sessions.
- **Terminal User Interface (TUI):** Integrating a modern TUI library (like FTXUI or ncurses) for dashboards and interactive menus.
- **Reminders & Trackers:** Real-time notifications and detailed progress trackers.
- **Reports & Rewards:** Monthly, weekly, and yearly reports with a built-in reward system.
- **Goal Setter:** Separate modules for tracking short-term and long-term milestones.
- and many many more features to come along.

---

### Development Process Tracking

- [x] Add feature -> Task
- [x] Implement Makefile for easier compilation
- [x] Automatic Date and time
- [ ] Input error preventions and handling
- [x] New Feature -> Habit
- [x] A scalable, modular UI with separate task and habit dashboards.
- [x] Added namespace -> TimeUtilities (for gloabl functions needed by every task)

---

## 📂 Project Structure

```text
doit/
├── .gitignore
├── Makefile
├── README.md
├── include/         # Header files (.hpp)
│   ├── task.hpp
│   ├── habits.hpp
│   └── utils.hpp
└── src/             # Source code (.cpp)
    ├── main.cpp
    ├── task.cpp
    └── habits.cpp

---
```

## INSTALLATION AND STEPS

Since **Doit** is built in C++ and uses a standard `Makefile`

### Prerequisites

Before you begin, ensure you have the following installed on your system:

- **Git** (to clone the repository)
- **A C++ Compiler** (like `g++` or `clang` with C++17 support)
- **Make** (to automate the build process)

_(Note for Windows users: It is recommended to run this using WSL, MSYS2, or Git Bash to fully support the Makefile and terminal environment)._

### 1. Clone the Repository

Open your terminal and clone the project to your local machine:

```bash
git clone https://github.com/A010909/doit.git
cd doit
```

### 2. Build the Project

Thanks to the included Makefile, compiling the project takes just one command. This will automatically compile the source files and create the necessary build/, bin/, and data/ directories:

```Bash
make
```

### 3. Run Doit

Once the build is successful, the executable is placed in the bin/ directory. Run the app using:

```Bash
./bin/doit
```

### Clean Up (Optional)

If you ever need to recompile from scratch or want to clean up the generated object files, you can use the clean command:

```Bash
make clean
```

---
