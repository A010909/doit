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
    std::string intPriority_to_stringPriority() const;

public:
    // Constructor
    Task();

    // Functions
    void create_task(int i, std::string t_name, std::string t_desc, int p, bool s, int d, int m, int y);
    void task_done();
    void task_undone();
    void edit_priority(int p);
    int get_id() const;
    std::string get_task() const;
    std::string get_desc() const;
    std::string get_priority() const;
    std::string get_status() const;
    void get_date() const;
};
#endif