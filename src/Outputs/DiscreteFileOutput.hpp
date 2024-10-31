/**
 * @file DiscreteFileOutput.hpp
 * @author Yann Le Masson
 * @version 0.1
 * @date 2024-10-31
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once

#include "IOutput.hpp"
#include "Utilities.hpp"

#include <fstream>
#include <string>

namespace phi
{
    /** @brief Output implementation on .log files, reopen the file at every log*/
    class DiscreteFileOutput : public IOutput
    {
    private:
        eLogLevel mMinimumLevel;
        std::string mFileName;
    public:
        DiscreteFileOutput(eLogLevel inMinimumLevel = debug, const std::string &inProgName = "PhiLog", const std::string &inPath = "./Logs") 
        : mMinimumLevel(inMinimumLevel), 
          mFileName(inPath + inProgName + ".log") {
            
        }

        void Log(const std::string &inText, eLogLevel inLevel, const std::time_t &inDate) const override {
            if(inLevel >= mMinimumLevel) {
                std::ofstream log_file(mFileName, std::ios::app);
                if (log_file.is_open()) {
                    log_file <<  "[" << sLogLevelNames[inLevel] << "]" << " " << getTimeString(inDate) << " - " << inText << std::endl;
                    log_file.close();
                }
            }
        }

        void SetMinimumLevel(eLogLevel inLevel) {
            mMinimumLevel = inLevel;
        }
    };
    
    
} // namespace phi
