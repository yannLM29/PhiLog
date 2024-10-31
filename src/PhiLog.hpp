/**
 * @file PhiLog.hpp
 * @author Yann Le Masson
 * @brief Phi Logger Singleton Class 
 * @version 0.1
 * @date 2024-10-31
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#pragma once

#include "LogLevel.hpp"
#include "IOutput.hpp"

#include <string>
#include <mutex>
#include <vector>
#include <memory>

namespace phi
{
    /**
     * @brief Logger Singleton Class
     * 
     */
    class PhiLog
    {
    private:
        // Attributes
        mutable std::mutex mMutex;
        std::vector<std::unique_ptr<IOutput>> mOutputs;

        // Methods
        PhiLog() {
        }
        void Log(const std::string &inText, eLogLevel inLevel) const;

    public:
        ~PhiLog() {

        }

        /**
         * @brief Get singleton of the phi logger
         * 
         * @return PhiLog& Reference on the phi singleton
         */
        static PhiLog &Get() {
            static PhiLog me;
            return me;
        }

        /** @brief Log at debug level */
        inline void Debug(const std::string &inText) const {
            Log(inText, eLogLevel::debug);
        }

        /** @brief Log at info level */
        inline void Info(const std::string &inText) const {
            Log(inText, eLogLevel::info);
        }

        /** @brief Log at warning level */
        inline void Warn(const std::string &inText) const {
            Log(inText, eLogLevel::warn);
        }

        /** @brief Log at error level */
        inline void Error(const std::string &inText) const {
            Log(inText, eLogLevel::error);
        }

        inline void AddOutput(std::unique_ptr<IOutput> inNewOutput) {
            std::lock_guard lock(mMutex);
            
            mOutputs.emplace_back(std::move(inNewOutput));
        }
    };
} // namespace phi



