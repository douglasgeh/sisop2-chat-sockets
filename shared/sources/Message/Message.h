#ifndef SISOP2_T1_MESSAGE_H
#define SISOP2_T1_MESSAGE_H

#include "SharedDefinitions.h"
#include <string>

using std::string;

class Message {
public:
    PacketType packetType;
    uint16_t timestamp;
    string groupName;
    string username;
    string text;

    Message(PacketType packetType, uint16_t timestamp, string groupName, string username, string text);
    explicit Message(Packet packet);

    const Packet asPacket();
};

#endif //SISOP2_T1_MESSAGE_H