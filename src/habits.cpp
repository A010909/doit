#include "habits.hpp"
#include "utils.hpp"

// Habit constructor
Habit::Habit(int id, const std::string &h_name) : h_id(id), name(h_name), current_streak(0), highest_streak(0), last_completed("Never")
{
    start_date = TimeUtils::get_date();
}

// Log habit - assuming user logs all of his habits daily - (future updates will improve it)
void Habit::log_habit(bool status)
{
    std::string today = TimeUtils::get_date();
    if (status == true)
    {
        // to prevent if user accidently clicks the status done more than once in the  samae day.
        if (last_completed != today)
        {
            current_streak++;
            if (current_streak > highest_streak)
                highest_streak++;
            last_completed = TimeUtils::get_date();
        }
    }
    else
        current_streak = 0;
}

// getters for dispalying
int Habit::get_id() const
{
    return h_id;
}

std::string Habit::get_name() const
{
    return name;
}

int Habit::get_current_streak() const
{
    return current_streak;
}

int Habit::get_highest_streak() const
{
    return highest_streak;
}

std::string Habit::get_start_date() const
{
    return start_date;
}

std::string Habit::get_last_completed_date() const
{
    return last_completed;
}