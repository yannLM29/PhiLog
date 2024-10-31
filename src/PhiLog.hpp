#pragma once

namespace phi
{
    class PhiLog
    {
    private:
        PhiLog(/* args */) {

        }

    public:
        ~PhiLog() {
            
        }

        static PhiLog &Get() {
            static PhiLog me;
            return me;
        }
    };
} // namespace phi



