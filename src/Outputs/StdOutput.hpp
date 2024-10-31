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
        eLogLevel mMinimumLevel;
        bool mIsColored;

    public:
        StdOutput(eLogLevel inMinimumLevel = debug, bool inColored = false)
        : mMinimumLevel(inMinimumLevel),
          mIsColored(inColored)
        {

        }

        void Log(const std::string &inText, eLogLevel inLevel, const std::time_t &inDate) const override;

        void SetMinimumLevel(eLogLevel inLevel) {
            mMinimumLevel = inLevel;
        }
    };
    
} // namespace phi
