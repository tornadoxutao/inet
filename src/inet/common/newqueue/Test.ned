//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

package inet.common.newqueue;

network TestSubmodule
{
    submodules:
        source: Source {
            @display("p=100,100");
        }
        protocol: ProtocolUsingAccessor {
            @display("p=200,100");
        }
        sink: Sink2 {
            @display("p=300,100");
        }
    connections:
        source.out --> protocol.in;
        protocol.out --> sink.in;
}

network TestConnected
{
    submodules:
        source: Source {
            @display("p=100,100");
        }
        queue: <> like IPacketQueue {
            @display("p=200,100");
        }
        protocol: ProtocolUsingAccessor {
            @display("p=300,100");
        }
        sink: Sink2 {
            @display("p=400,100");
        }
    connections:
        source.out --> queue.in;
        queue.out --> protocol.in;
        protocol.out --> sink.in;
}
