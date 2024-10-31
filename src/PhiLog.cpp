/**
 * @file PhiLog.cpp
 * @author Yann Le Masson
 * @brief 
 * @version 0.1
 * @date 2024-10-31
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "PhiLog.hpp"
#include <chrono>
namespace phi
{
    void PhiLog::Log(const std::string &inText, eLogLevel inLevel) const {
        auto now = std::chrono::system_clock::now();                            // Get time
        std::time_t current_time = std::chrono::system_clock::to_time_t(now);

        std::lock_guard lock(mMutex);                                           // Thread safe outputs
        
        for(const auto &output : mOutputs) {
            output->Log(inText, inLevel, current_time);
        }
    }

} // namespace phi
