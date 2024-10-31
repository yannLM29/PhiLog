#pragma once

#include "IOutput.hpp"
#include <iostream>
#include <string>

namespace phi
{
    class StdOutput : public IOutput
    {
    private:
        eLogLevel mMinimumLevel = debug;

    public:
        void Log(const std::string &inText, eLogLevel inLevel, const std::time_t &inDate) const {
            if(inLevel >= mMinimumLevel) {
                
                std::cout << "[" << sLogLevelNames[inLevel] << "] " << inText << std::endl;
            }
            
        }

        void SetMinimumLevel(eLogLevel inLevel) {
            mMinimumLevel = inLevel;
        }
    };
    
} // namespace phi
