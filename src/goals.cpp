#include "goals.hpp"

Goals::Goals(int i, const std::string &goal) : g_id(i), goal(goal), status(0) {}

void Goals::edit_status(bool st)
{
    status = st;
}

int Goals::get_id() const
{
    return g_id;
}

std::string Goals::get_goal() const
{
    return goal;
}

std::string Goals::get_status() const
{
    return (status == false) ? "Pending" : "Done";
}