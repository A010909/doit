#include "utils.hpp"
#include <ctime>

namespace TimeUtils
{
    std::string get_date()
    {
        int day, month, year;

        time_t current_time = time(0);
        tm *ltm = localtime(&current_time);

        day = ltm->tm_mday;
        month = 1 + ltm->tm_mon;
        year = 1900 + ltm->tm_year;

        std::string d_str = (day < 10 ? "0" : "") + std::to_string(day);
        std::string m_str = (month < 10 ? "0" : "") + std::to_string(month);
        return d_str + "." + m_str + "." + std::to_string(year);
    }

    std::string get_time()
    {
        int hour, min;

        time_t current_time = time(0);
        tm *ltm = localtime(&current_time);

        hour = ltm->tm_hour;
        min = ltm->tm_min;

        std::string h_str = (hour < 10 ? "0" : "") + std::to_string(hour);
        std::string min_str = (min < 10 ? "0" : "") + std::to_string(min);

        return h_str + ":" + min_str;
    }
}