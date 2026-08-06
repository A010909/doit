// Daily to do tasks.
#pragma once
#include <string>

// Task class for single to do stackings ---
class Task
{
private:
    int id;
    std::string task, desc;
    bool status;
    std::string date_time;

    // Helper - Private
    std::string boolStatus_to_stringStatus() const;
    std::string intPriority_to_stringPriority() const;

public:
    // Constructor
    Task(int i, const std::string &t_name, const std::string &t_desc);

    // Functions
    void log_task(bool log);
    void delete_task(int i); // Incoming Feature

    // getters for data display
    int get_id() const;
    std::string get_task() const;
    std::string get_desc() const;
    std::string get_status() const;
    std::string get_date_time() const;
};