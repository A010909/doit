#include <iostream>
#include <vector>
#include "task.hpp"
#include "habits.hpp"

using namespace std;

int main()
{
    // Initializing temporary variables
    std::string name, desc;
    int p;
    bool s;

    //  arrays of classes.
    vector<Task> task_list;
    vector<Habit> habit_list;

    while (1) // to ensure the programming keeps running untill user exits by themselves.
    {
        int choice1;

        cout << endl
             << endl
             << "=======================================" << endl
             << "DOIT MENU" << endl
             << "=======================================" << endl
             << "1. Task Centre" << endl
             << "2. Habit Centre " << endl
             << "3. Exit app" << endl
             << "Enter your choice : ";
        cin >> choice1;

        switch (choice1)
        {
        case 1:
            // ====================================TASK CENTRE=====================================================
            while (1)
            {
                bool exit = false; // exit flag
                int choice2;

                cout << endl
                     << "+++++++++++++++++++++++++++++++++++++++" << endl
                     << "TASK CENTRE" << endl
                     << "+++++++++++++++++++++++++++++++++++++++" << endl
                     << "1. Create Task" << endl
                     << "2. Display Task" << endl
                     << "3. Return to menu" << endl
                     << "Enter your choice : ";
                cin >> choice2;

                switch (choice2)
                {
                case 1:
                    cout << "=-=-=-=-=-=-=-=-NEW TASK-=-=-=-=-=-=-=-=" << endl
                         << "Task : ";
                    getline(cin >> ws, name); // std::ws->safely checks the input buffer

                    cout << "Description : ";
                    getline(cin, desc);

                    cout << "Priority(1-3,high-low) : ";
                    cin >> p;

                    cout << "Status(0.Pending/1.Done) : ";
                    cin >> s;

                    task_list.emplace_back((task_list.size() + 1), name, desc, p, s);
                    break;
                case 2:
                    cout << "=-=-=-=-=-=-=-=-TASKS DISPLAY-=-=-=-=-=-=-=-=" << endl;
                    for (size_t i = 0; i < task_list.size(); i++)
                    {
                        cout << "---------------------------------------" << endl
                             << task_list[i].get_task() << " --> " << task_list[i].get_desc() << endl
                             << " ==> Task ID : " << task_list[i].get_id() << endl // Will be removed in future(after adding searching) as I dont intend to show task id to user.
                             << " ==> Priority : " << task_list[i].get_priority() << endl
                             << " ==> Status : " << task_list[i].get_status() << endl
                             << " ==> Date : " << task_list[i].get_date_time() << endl;
                        cout << "---------------------------------------" << endl;
                    }
                    break;
                case 3:
                    cout << "Going back to menu";
                    exit = true;
                    break;
                default:
                    cout << "Invalid Input..." << endl
                         << "Going back to menu...";
                    exit = true;
                    break;
                }
                if (exit)
                    break; // exit the inner while loop
            }
            break; // breaks the outer switch - case 1
            // ============================================================================================================

        case 2:
            // ===========================================HABITS MENU=======================================================
            while (1)
            {
                bool exit = false;

                int choice2;
                cout << endl
                     << "+++++++++++++++++++++++++++++++++++++++" << endl
                     << "HABIT CENTRE" << endl
                     << "+++++++++++++++++++++++++++++++++++++++" << endl
                     << "1. Create Habit" << endl
                     << "2. Display Display" << endl
                     << "3. Return to menu" << endl
                     << "Enter your choice : ";
                cin >> choice2;

                switch (choice2)
                {
                case 1:
                    cout << "=-=-=-=-=-=-=-=-NEW HABIT-=-=-=-=-=-=-=-=" << endl
                         << "Habit : ";
                    getline(cin >> ws, name); // std::ws->safely checks the input buffer

                    habit_list.emplace_back((habit_list.size() + 1), name);
                    break;
                case 2:
                    cout << "=-=-=-=-=-=-=-=-HABIT DISPLAY-=-=-=-=-=-=-=-=" << endl;
                    for (size_t i = 0; i < habit_list.size(); i++)
                    {
                        cout << "---------------------------------------" << endl
                             << habit_list[i].get_name() << endl
                             << " ==> Habit ID : " << habit_list[i].get_id() << endl // Will be removed in future(after adding searching) as I dont intend to show task id to user.
                             << " ==> Current Streak : " << habit_list[i].get_current_streak() << endl
                             << " ==> Highest Streak : " << habit_list[i].get_highest_streak() << endl
                             << " ==> Start On : " << habit_list[i].get_start_date() << endl
                             << " ==> Last Completed On : " << habit_list[i].get_last_completed_date() << endl;
                        cout << "---------------------------------------" << endl;
                    }
                    break;
                case 3:
                    cout << "Going back to menu";
                    exit = true;
                    break;
                default:
                    cout << "Invalid Input..." << endl
                         << "Going back to menu...";
                    exit = true;
                    break;
                }

                if (exit)
                    break;
            }
            break;
            //==================================================================================================
        case 3:
            cout << "THANK YOU FOR USING DOIT - KEEP ORGANIZING YOUR LIFE" << endl
                 << "Exiting app";
            return 0;

        default:
            cout << "Invalid Input..." << endl
                 << "Exiting app...";
            return 0;
        }
    }
}