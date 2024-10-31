/**
 * @file Utilities.hpp
 * @author Yann Le Masson
 * @brief Utilities static functions
 * @version 0.1
 * @date 2024-10-31
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once

#include <string>
#include <iomanip>
#include <ctime>
#include <array>

namespace phi
{
    /**
     * @brief Convert std::time_t to string following inFormat
     * 
     * @param inDate 
     * @param inFormat Text format
     * @return std::string 
     */
    static std::string getTimeString(const std::time_t &inDate, const std::string &inFormat = "%H:%M:%S") {
        std::tm* local_time = std::localtime(&inDate);
        std::ostringstream oss;
        oss << std::put_time(local_time, inFormat.c_str());

        return oss.str();
    }

} // namespace phi

