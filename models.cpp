#include "models.hpp"

// converts integer status to string status
std::string Task::boolStatus_to_stringStatus() const
{
    if (status == true)
        return "Done";
    else
        return "Pending";
}

std::string Task::intPriority_to_stringPriority() const
{
    switch (priority)
    {
    case 1:
        return "High";
    case 2:
        return "Medium";
    case 3:
        return "Low";
    default:
        return "None";
    }
}

// Basic constructor to ensure safe default values
// Parameterized constructor using an initializer list
Task::Task(int i, const std::string &t_name, const std::string &t_desc, int p, bool s, int d, int m, int y)
    : id(i), task(t_name), desc(t_desc), priority(p), status(s), day(d), month(m), year(y) {}

void Task::create_task(int i, std::string &t_name, std::string &t_desc, int p, bool s, int d, int m, int y)
{
    id = i;
    task = t_name;
    desc = t_desc;
    priority = p;
    status = s;
    day = d;
    month = m;
    year = y;
}

// If task is done
void Task::task_done()
{
    status = true;
}

// If user needs to uncheck the done task
void Task::task_undone()
{
    status = false;
}

// If user needs to edit the priority
void Task::edit_priority(int p)
{
    priority = p;
}

int Task::get_id() const
{
    return id;
}

std::string Task::get_task() const
{
    return task;
}

std::string Task::get_desc() const
{
    return desc;
}

std::string Task::get_priority() const
{
    return intPriority_to_stringPriority();
}

std::string Task::get_status() const
{
    return boolStatus_to_stringStatus();
}

std::string Task::get_date() const
{
    return std::to_string(day) + "-" + std::to_string(month) + "-" + std::to_string(year);
}