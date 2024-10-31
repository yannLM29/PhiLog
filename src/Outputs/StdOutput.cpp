#include "StdOutput.hpp"

namespace phi
{
    void StdOutput::Log(const std::string &inText, eLogLevel inLevel, const std::time_t &inDate) const {
        if(inLevel >= mMinimumLevel) {

            // Date
            std::tm* local_time = std::localtime(&inDate);
            std::ostringstream oss;
            oss << std::put_time(local_time, "%H:%M:%S");
            
            // Color
            std::string begin_color = "";
            std::string end_color = "";

            if(mIsColored) {
                std::array<std::string, 4> color_codes = {"", "", "\033[1;33m", "\033[1;31m"};
                begin_color = color_codes[inLevel];
                end_color = "\033[0m";
            }

            std::cout << begin_color << "[" << sLogLevelNames[inLevel] << "]" << end_color << " " << oss.str() << " - " << inText << std::endl;
        }
    }
} // namespace phi
