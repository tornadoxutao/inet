//
// Copyright (C) OpenSim Ltd.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see http://www.gnu.org/licenses/.
//

#include "inet/common/newqueue/ProtocolUsingBase.h"

namespace inet {

Define_Module(ProtocolUsingBase);

void ProtocolUsingBase::initialize()
{
    initializeQueue(getSubmodule("queue"), gate("in"));
}

void ProtocolUsingBase::handleMessage(cMessage *msg)
{
    if (msg == &timer) {
        send(packet, "out");
        packet = nullptr;
        startDequeingPacket();
    }
    else if (msg->isPacket()) {
        auto packet = check_and_cast<Packet *>(msg);
        handlePacket(packet);
    }
}

bool ProtocolUsingBase::isDequeingPacketEnabled()
{
    return timer.isScheduled();
}

void ProtocolUsingBase::processDequedPacket(Packet *packet)
{
    this->packet = packet;
    scheduleAt(simTime() + par("interval"), &timer);
}

} // namespace inet

