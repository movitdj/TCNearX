#pragma once

namespace TCNearX {

class TCNearConnection {
public:
    TCNearConnection() = default;
    ~TCNearConnection() = default;

    bool Open();
    void Close();
    bool IsConnected() const;
};

} // namespace TCNearX
