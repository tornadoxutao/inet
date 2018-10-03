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

module CompoundQueue like IPacketQueue
{
    parameters:
	    @class(CompoundQueue);
    gates:
        input in;
        output out;
    submodules:
        classifier: Classifier {
            @display("p=100,100");
        }
        queue1: SimpleQueue {
            @display("p=200,50");
        }
        queue2: SimpleQueue {
            @display("p=200,150");
        }
        prioritizer: Prioritizer {
            @display("p=300,100");
        }
    connections:
        in --> { @display("m=w"); } --> classifier.in;
        classifier.out++ --> queue1.in;
        classifier.out++ --> queue2.in;
        queue1.out --> prioritizer.in++;
        queue2.out --> prioritizer.in++;
        prioritizer.out --> { @display("m=e"); } --> out;
}
