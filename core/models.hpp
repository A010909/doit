#ifndef MODELS_HPP
#define MODELS_HPP

#include <iostream>
#include <string>

// Task class for single to do stackings ---
class Task
{
private:
    int id;
    std::string task, desc;
    int priority;
    bool status;
    int day, month, year;

    // Helper - Private
    std::string boolStatus_to_stringStatus() const;

public:
    // Constructor
    Task();

    // Functions
    void create_task(int i);
    void task_done();
    void task_undone();
    void edit_priority();
    void display_task() const;
};

#endif