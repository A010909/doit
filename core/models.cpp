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
    if (priority == 1)
        return "high";
    else if (priority == 2)
        return "Medium";
    else
        return "Low";
}

// Basic constructor to ensure safe default values
Task::Task() : id(0), task(""), desc(""), priority(3), status(false), day(1), month(1), year(0) {};

void Task::create_task(int i, std::string t_name, std::string t_desc, int p, bool s, int d, int m, int y)
{
    id = 1;
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

void Task::get_date() const
{
    std::cout << day << "-" << month << "-" << year << std::endl;
}