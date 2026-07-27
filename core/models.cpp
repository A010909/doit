#include <models.hpp>

// converts integer status to string status
std::string Task::boolStatus_to_stringStatus() const
{
    if (status == true)
        return "Done";
    else
        return "Pending";
}

// Basic constructor to ensure safe default values
Task::Task() : id(0), task(""), desc(""), priority(3), status(false), day(1), month(1), year(0) {};

void Task::create_task(int i)
{
    // Generating an ID for task
    id = i + 1;

    // Getting Task name
    std::cout << "Task : ";
    std::getline(std::cin >> std::ws, task); // std::ws->safely checks the input buffer

    // Getting Task Description (if any) -- if not, user will just hit enter to avoid it.
    std::cout << "Description : ";
    std::getline(std::cin, desc);

    // Getting priority - 1.High - 2.Medium - 3.Low
    std::cout << "Priority(1-3,high-low) : ";
    std::cin >> priority;

    // Getting status -
    std::cout << "Status(0.Pending/1.Done) : ";
    std::cin >> status;

    // Getting date
    std::cout << "Date (DD-MM-YYYY or DD/MM/YYYY) : ";
    char sep1, sep2;
    std::cin >> day >> sep1 >> month >> sep2 >> year;
    std::cin.ignore();
}

/* I did not implemented the below create_task() function because of current ease of test. Later i will implement it.
 A model should not interact with user. The interaction happens through main function. (main.cpp)
 The Model just takes the data and stores it
 void Task::create_task(int i, std::string t_name, std::string t_desc, int p, int d, int m, int y)
 {
     id = i + 1;
     task = t_name;
     desc = t_desc;
     priority = p;
     day = d;
     month = m;
     year = y;
 }
Also i have to convert all the functions that directlt talk with user, they should just take the input and process it.
*/

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
void Task::edit_priority()
{
    std::cout << "Priority : ";
    std::cin >> priority;
}

// Display the tasks -- It should not be here (for now its fine)
void Task::display_task() const
{
    std::cout << "------TASK " << id << "------" << std::endl;
    if (desc.empty()) // If description is empty -> it will only display task
        std::cout << task << std::endl;
    else
        std::cout << task << "-->" << desc << std::endl;
    std::cout << "Priority : " << priority << std::endl;
    std::cout << "Status : " << boolStatus_to_stringStatus() << std::endl;
    std::cout << "Date : " << day << "-" << month << "-" << year;
}