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

#include "inet/common/newqueue/Classifier.h"

namespace inet {

Define_Module(Classifier);

void Classifier::initialize()
{
    for (int i = 0; i < gateSize("out"); i++) {
        auto outputGate = gate("out", i);
        auto outputQueue = check_and_cast<IPacketQueue *>(outputGate->getPathEndGate()->getOwnerModule());
        outputGates.push_back(outputGate);
        outputQueues.push_back(outputQueue);
    }
}

int Classifier::classifyPacket(Packet *packet)
{
    return packet->getTotalLength().get() % gateSize("out");
}

int Classifier::getNumPackets()
{
    return 0;
}

void Classifier::pushPacket(Packet *packet)
{
    int index = classifyPacket(packet);
    animateSend(packet, outputGates[index]);
    outputQueues[index]->pushPacket(packet);
}

Packet *Classifier::popPacket()
{
    throw cRuntimeError("Invalid operation");
}

} // namespace inet
