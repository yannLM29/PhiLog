#pragma once

#include <string>
#include <iomanip>
#include <ctime>
#include <array>

namespace phi
{

    static std::string getTimeString(const std::time_t &inDate, const std::string &inFormat = "%H:%M:%S") {
        std::tm* local_time = std::localtime(&inDate);
        std::ostringstream oss;
        oss << std::put_time(local_time, inFormat.c_str());

        return oss.str();
    }

} // namespace phi

