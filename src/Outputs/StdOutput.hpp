#pragma once

#include "IOutput.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

namespace phi
{
    class StdOutput : public IOutput
    {
    private:
        eLogLevel mMinimumLevel = debug;

    public:
        void Log(const std::string &inText, eLogLevel inLevel, const std::time_t &inDate) const {
            if(inLevel >= mMinimumLevel) {
                std::tm* local_time = std::localtime(&inDate);

                std::ostringstream oss;
                oss << std::put_time(local_time, "%H:%M:%S");

                std::cout << "[" << sLogLevelNames[inLevel] << "] " << oss.str() << " - " << inText << std::endl;
            }
        }

        void SetMinimumLevel(eLogLevel inLevel) {
            mMinimumLevel = inLevel;
        }
    };
    
} // namespace phi
