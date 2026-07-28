#include <iostream>
#include <vector>
#include "models.hpp"
using namespace std;

int main()
{
    // Initializing temporary variables
    int i;
    std::string t_name, t_desc;
    int p;
    bool s;
    int d, m, y;

    int choice;

    vector<Task> task_list;
    Task temp;

    cout << "1. Create Task" << endl
         << "2. Display Task : " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Task : ";
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

        // Getting date
        cout << "Date (DD-MM-YYYY or DD/MM/YYYY) : ";
        char sep1, sep2;
        cin >> d >> sep1 >> m >> sep2 >> y;
        cin.ignore();

        temp.create_task(i, t_name, t_desc, p, s, d, m, y);
        task_list.push_back(temp);
    case 2:
        for (int i = 0; i < task_list.size(); i++)
        {
            cout << "-------------------------------------------------------------------------" << endl
                 << "TASK ID : " << task_list[i].get_id() << endl
                 << task_list[i].get_task() << "-->" << task_list[i].get_desc() << endl
                 << "Priority : " << task_list[i].get_priority() << endl
                 << "Status : " << task_list[i].get_status() << endl
                 << "Date : ";
            task_list[i].get_date();
            cout << "-------------------------------------------------------------------------" << endl;
        }
    }
}