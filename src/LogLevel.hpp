/**
 * @file LogLevel.hpp
 * @author Yann Le Masson
 * @brief Enumeration of the log levels
 * @version 0.1
 * @date 2024-10-31
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#pragma once
namespace phi
{
    /**
     * @brief Levels of logs from the weaker to the stronger
     * 
     */
    enum eLogLevel: unsigned int {
        debug = 0,
        info,
        warn,
        error
    };

} // namespace phi

