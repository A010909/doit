#include <iostream>
#include <vector>
#include "task.hpp"

using namespace std;

int main()
{
    // Initializing temporary variables
    std::string t_name, t_desc;
    int p;
    bool s;

    vector<Task> task_list;

    while (1)
    {
        int choice;

        cout << "=======================================" << endl
             << "DOIT MENU" << endl
             << "=======================================" << endl
             << "1. Create Task" << endl
             << "2. Display Task" << endl
             << "3. Exit" << endl
             << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "+++++++++++++++++++++++++++++++++++++++" << endl
                 << "TASK CREATION" << endl
                 << "+++++++++++++++++++++++++++++++++++++++" << endl
                 << "Task : ";
            getline(cin >> ws, t_name); // std::ws->safely checks the input buffer

            // Getting Task Description (if any) -- if not, user will just hit enter to avoid it.
            cout << "Description : ";
            getline(cin, t_desc);

            // Getting priority - 1.High - 2.Medium - 3.Low
            cout << "Priority(1-3,high-low) : ";
            cin >> p;

            // Getting status -
            cout << "Status(0.Pending/1.Done) : ";
            cin >> s;

            task_list.emplace_back((task_list.size() + 1), t_name, t_desc, p, s);
            break;

        case 2:
            cout << "=-=-=-=-=-=-=-=-TASKS-=-=-=-=-=-=-=-=" << endl;
            for (size_t i = 0; i < task_list.size(); i++)
            {
                cout << "---------------------------------------" << endl
                     << task_list[i].get_task() << " --> " << task_list[i].get_desc() << endl
                     << " ==> TASK ID : " << task_list[i].get_id() << endl // Will be removed in future(after adding searching) as I dont intend to show task id to user.
                     << " ==> Priority : " << task_list[i].get_priority() << endl
                     << " ==> Status : " << task_list[i].get_status() << endl
                     << " ==> Date : " << task_list[i].get_date_time() << endl;
                cout << "---------------------------------------" << endl;
            }
            break;

        case 3:
            cout << "Exiting app";
            return 0;

        default:
            cout << "Invalid Input..." << endl
                 << "Exiting app...";
            return 0;
        }
    }
}