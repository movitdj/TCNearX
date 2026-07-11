#include "Logger.h"
#include "TCNearConnection.h"
#include "Version.h"

#include <iostream>

int main() {
    std::cout << TCNearX::ApplicationName << " version " << TCNearX::VersionString << std::endl;

    TCNearX::TCNearConnection connection;
    const bool opened = connection.Open();

    if (opened) {
        TCNearX::Logger::info("TC Near connection opened.");
    } else {
        TCNearX::Logger::warning("TC Near connection is not available yet.");
    }

    std::cout << "Open result: " << (opened ? "success" : "failure") << std::endl;

    return 0;
}
