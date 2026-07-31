// Habit class to create a separate panel for dailt habits so that user dont have to list them daily.
#pragma once
#include <string>

class Habit
{
private:
    int h_id;
    std::string name;
    int current_streak;
    int highest_streak;
    std::string start_date;
    std::string last_completed;

public:
    // Constructor
    Habit(int i, const std::string &h_name);

    // Functions
    void log_habit(bool status);

    // Getters for dispaly
    int get_id() const;
    std::string get_name() const;
    int get_current_streak() const;
    int get_highest_streak() const;
    std::string get_start_date() const;
    std::string get_last_completed_date() const;
};