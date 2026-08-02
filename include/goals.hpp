#pragma once
#include <string>

class Goals
{
private:
    int g_id;
    std::string goal;
    bool status;

    // helper functions

public:
    // constructor
    Goals(int i, const std::string &goal);
    void edit_status(bool st);

    // getters for display
    int get_id() const;
    std::string get_goal() const;
    std::string get_status() const;
};