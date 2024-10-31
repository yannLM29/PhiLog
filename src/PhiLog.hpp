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

namespace phi
{
    /**
     * @brief Logger Singleton Class
     * 
     */
    class PhiLog
    {
    private:
        PhiLog(/* args */) {

        }

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

    };
} // namespace phi



