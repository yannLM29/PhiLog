/**
 * @file LogLevel.hpp
 * @author Yann Le Masson
 * @brief Enumeration of the log levels and string names of them
 * @version 0.1
 * @date 2024-10-31
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#pragma once

#include <array>
#include <string>
namespace phi
{
    /**
     * @brief Levels of logs from the weaker to the stronger
     * 
     */
    enum eLogLevel {
        debug = 0,
        info,
        warn,
        error
    };

    static std::array<std::string, 4> sLogLevelNames = {"debug", "info", "warn", "error"};
} // namespace phi

