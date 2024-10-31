/**
 * @file StdOutput.cpp
 * @author Yann Le Masson
 * @version 0.1
 * @date 2024-10-31
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#pragma once

#include "IOutput.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

namespace phi
{
    /** @brief Output implementation in cpp standard output */
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

        void SetMinimumLevel(eLogLevel inLevel) override{
            mMinimumLevel = inLevel;
        }
    };
    
} // namespace phi
