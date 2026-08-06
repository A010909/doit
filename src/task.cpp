#include "task.hpp"
#include "utils.hpp"

// converts integer status to string status
std::string Task::boolStatus_to_stringStatus() const
{
    return (status == true) ? "Done" : "Pending";
}

// Basic constructor to ensure safe default values
Task::Task(int i, const std::string &t_name, const std::string &t_desc)
    : id(i), task(t_name), desc(t_desc), status(0)
{
    date_time = TimeUtils::get_date() + " , " + TimeUtils::get_time();
}

// If task is done
void Task::log_task(bool log)
{
    status = log;
}

// void Task::delete_task(int i)
// {
//  INCOMING FEATURE
// }

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

std::string Task::get_status() const
{
    return boolStatus_to_stringStatus();
}

std::string Task::get_date_time() const
{
    return date_time;
}