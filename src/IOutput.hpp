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

        virtual void Log(const std::string &inText, eLogLevel inLevel, const std::time_t &inDate);
        virtual void SetMinimumLevel(eLogLevel inLevel);
    };

} // namespace phi


