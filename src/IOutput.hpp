/**
 * @file IOutput.hpp
 * @author Yann Le Masson
 * @brief Interface for outputs of the logger
 * @version 0.1
 * @date 2024-10-31
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once

#include "LogLevel.hpp"

#include <string>
#include <ctime>

namespace phi
{
    class IOutput
    {
    public:
        virtual ~IOutput() = default;

        /**
         * @brief Allows logger to log on output
         * 
         * @param inText Text of the log
         * @param inLevel Log level (see LogLevel.hpp)
         * @param inDate Time the log was written
         */
        virtual void Log(const std::string &inText, eLogLevel inLevel, const std::time_t &inDate) const = 0;

        /**
         * @brief Set the Minimum Level of log taken into account
         * 
         * @param inLevel 
         */
        virtual void SetMinimumLevel(eLogLevel inLevel) = 0;
    };

} // namespace phi


