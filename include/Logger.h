#pragma once

#include <string>

namespace TCNearX {

class Logger {
public:
    static void info(const std::string& message);
    static void warning(const std::string& message);
    static void error(const std::string& message);

private:
    static void log(const std::string& level, const std::string& message);
    static std::string timestamp();
};

} // namespace TCNearX
