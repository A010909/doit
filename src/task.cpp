#include "task.hpp"
#include "utils.hpp"

// converts integer status to string status
std::string Task::boolStatus_to_stringStatus() const
{
    return (status == true) ? "Done" : "Pending";
}

// converts integer priority to string priority
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
Task::Task(int i, const std::string &t_name, const std::string &t_desc, int p, bool s)
    : id(i), task(t_name), desc(t_desc), priority(p), status(s)
{
    date_time = TimeUtils::get_date() + " , " + TimeUtils::get_time();
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

// getters for displaying
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

std::string Task::get_date_time() const
{
    return date_time;
}