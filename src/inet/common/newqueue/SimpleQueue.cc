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

#include "SimpleQueue.h"

namespace inet {

Define_Module(SimpleQueue);

void SimpleQueue::initialize()
{
    outputGate = gate("out");
}

void SimpleQueue::handleMessage(cMessage *msg)
{
    pushPacket(check_and_cast<Packet *>(msg));
}

int SimpleQueue::getNumPackets()
{
    return queue.getLength();
}

void SimpleQueue::pushPacket(Packet *packet)
{
    queue.insert(packet);
    if (hasPendingRequestPacket)
        handlePendingRequestPacket();
}

Packet *SimpleQueue::popPacket()
{
    return check_and_cast<Packet *>(queue.pop());
}

} // namespace inet
