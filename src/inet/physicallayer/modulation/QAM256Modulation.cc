//
// Copyright (C) 2014 OpenSim Ltd.
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
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#include "inet/physicallayer/modulation/QAM256Modulation.h"

namespace inet {

namespace physicallayer {

const double k = 1 / sqrt(170);

// generated by a small script according to http://patentimages.storage.googleapis.com/WO2003058904A1/imgf000014_0001.png
const std::vector<APSKSymbol> QAM256Modulation::constellation = {
    k * APSKSymbol(-15, -15),
    k * APSKSymbol(-15, -13),
    k * APSKSymbol(-15, -9),
    k * APSKSymbol(-15, -11),
    k * APSKSymbol(-15, -1),
    k * APSKSymbol(-15, -3),
    k * APSKSymbol(-15, -7),
    k * APSKSymbol(-15, -5),
    k * APSKSymbol(-15, 15),
    k * APSKSymbol(-15, 13),
    k * APSKSymbol(-15, 9),
    k * APSKSymbol(-15, 11),
    k * APSKSymbol(-15, 1),
    k * APSKSymbol(-15, 3),
    k * APSKSymbol(-15, 7),
    k * APSKSymbol(-15, 5),
    k * APSKSymbol(-13, -15),
    k * APSKSymbol(-13, -13),
    k * APSKSymbol(-13, -9),
    k * APSKSymbol(-13, -11),
    k * APSKSymbol(-13, -1),
    k * APSKSymbol(-13, -3),
    k * APSKSymbol(-13, -7),
    k * APSKSymbol(-13, -5),
    k * APSKSymbol(-13, 15),
    k * APSKSymbol(-13, 13),
    k * APSKSymbol(-13, 9),
    k * APSKSymbol(-13, 11),
    k * APSKSymbol(-13, 1),
    k * APSKSymbol(-13, 3),
    k * APSKSymbol(-13, 7),
    k * APSKSymbol(-13, 5),
    k * APSKSymbol(-9, -15),
    k * APSKSymbol(-9, -13),
    k * APSKSymbol(-9, -9),
    k * APSKSymbol(-9, -11),
    k * APSKSymbol(-9, -1),
    k * APSKSymbol(-9, -3),
    k * APSKSymbol(-9, -7),
    k * APSKSymbol(-9, -5),
    k * APSKSymbol(-9, 15),
    k * APSKSymbol(-9, 13),
    k * APSKSymbol(-9, 9),
    k * APSKSymbol(-9, 11),
    k * APSKSymbol(-9, 1),
    k * APSKSymbol(-9, 3),
    k * APSKSymbol(-9, 7),
    k * APSKSymbol(-9, 5),
    k * APSKSymbol(-11, -15),
    k * APSKSymbol(-11, -13),
    k * APSKSymbol(-11, -9),
    k * APSKSymbol(-11, -11),
    k * APSKSymbol(-11, -1),
    k * APSKSymbol(-11, -3),
    k * APSKSymbol(-11, -7),
    k * APSKSymbol(-11, -5),
    k * APSKSymbol(-11, 15),
    k * APSKSymbol(-11, 13),
    k * APSKSymbol(-11, 9),
    k * APSKSymbol(-11, 11),
    k * APSKSymbol(-11, 1),
    k * APSKSymbol(-11, 3),
    k * APSKSymbol(-11, 7),
    k * APSKSymbol(-11, 5),
    k * APSKSymbol(-1, -15),
    k * APSKSymbol(-1, -13),
    k * APSKSymbol(-1, -9),
    k * APSKSymbol(-1, -11),
    k * APSKSymbol(-1, -1),
    k * APSKSymbol(-1, -3),
    k * APSKSymbol(-1, -7),
    k * APSKSymbol(-1, -5),
    k * APSKSymbol(-1, 15),
    k * APSKSymbol(-1, 13),
    k * APSKSymbol(-1, 9),
    k * APSKSymbol(-1, 11),
    k * APSKSymbol(-1, 1),
    k * APSKSymbol(-1, 3),
    k * APSKSymbol(-1, 7),
    k * APSKSymbol(-1, 5),
    k * APSKSymbol(-3, -15),
    k * APSKSymbol(-3, -13),
    k * APSKSymbol(-3, -9),
    k * APSKSymbol(-3, -11),
    k * APSKSymbol(-3, -1),
    k * APSKSymbol(-3, -3),
    k * APSKSymbol(-3, -7),
    k * APSKSymbol(-3, -5),
    k * APSKSymbol(-3, 15),
    k * APSKSymbol(-3, 13),
    k * APSKSymbol(-3, 9),
    k * APSKSymbol(-3, 11),
    k * APSKSymbol(-3, 1),
    k * APSKSymbol(-3, 3),
    k * APSKSymbol(-3, 7),
    k * APSKSymbol(-3, 5),
    k * APSKSymbol(-7, -15),
    k * APSKSymbol(-7, -13),
    k * APSKSymbol(-7, -9),
    k * APSKSymbol(-7, -11),
    k * APSKSymbol(-7, -1),
    k * APSKSymbol(-7, -3),
    k * APSKSymbol(-7, -7),
    k * APSKSymbol(-7, -5),
    k * APSKSymbol(-7, 15),
    k * APSKSymbol(-7, 13),
    k * APSKSymbol(-7, 9),
    k * APSKSymbol(-7, 11),
    k * APSKSymbol(-7, 1),
    k * APSKSymbol(-7, 3),
    k * APSKSymbol(-7, 7),
    k * APSKSymbol(-7, 5),
    k * APSKSymbol(-5, -15),
    k * APSKSymbol(-5, -13),
    k * APSKSymbol(-5, -9),
    k * APSKSymbol(-5, -11),
    k * APSKSymbol(-5, -1),
    k * APSKSymbol(-5, -3),
    k * APSKSymbol(-5, -7),
    k * APSKSymbol(-5, -5),
    k * APSKSymbol(-5, 15),
    k * APSKSymbol(-5, 13),
    k * APSKSymbol(-5, 9),
    k * APSKSymbol(-5, 11),
    k * APSKSymbol(-5, 1),
    k * APSKSymbol(-5, 3),
    k * APSKSymbol(-5, 7),
    k * APSKSymbol(-5, 5),
    k * APSKSymbol(15, -15),
    k * APSKSymbol(15, -13),
    k * APSKSymbol(15, -9),
    k * APSKSymbol(15, -11),
    k * APSKSymbol(15, -1),
    k * APSKSymbol(15, -3),
    k * APSKSymbol(15, -7),
    k * APSKSymbol(15, -5),
    k * APSKSymbol(15, 15),
    k * APSKSymbol(15, 13),
    k * APSKSymbol(15, 9),
    k * APSKSymbol(15, 11),
    k * APSKSymbol(15, 1),
    k * APSKSymbol(15, 3),
    k * APSKSymbol(15, 7),
    k * APSKSymbol(15, 5),
    k * APSKSymbol(13, -15),
    k * APSKSymbol(13, -13),
    k * APSKSymbol(13, -9),
    k * APSKSymbol(13, -11),
    k * APSKSymbol(13, -1),
    k * APSKSymbol(13, -3),
    k * APSKSymbol(13, -7),
    k * APSKSymbol(13, -5),
    k * APSKSymbol(13, 15),
    k * APSKSymbol(13, 13),
    k * APSKSymbol(13, 9),
    k * APSKSymbol(13, 11),
    k * APSKSymbol(13, 1),
    k * APSKSymbol(13, 3),
    k * APSKSymbol(13, 7),
    k * APSKSymbol(13, 5),
    k * APSKSymbol(9, -15),
    k * APSKSymbol(9, -13),
    k * APSKSymbol(9, -9),
    k * APSKSymbol(9, -11),
    k * APSKSymbol(9, -1),
    k * APSKSymbol(9, -3),
    k * APSKSymbol(9, -7),
    k * APSKSymbol(9, -5),
    k * APSKSymbol(9, 15),
    k * APSKSymbol(9, 13),
    k * APSKSymbol(9, 9),
    k * APSKSymbol(9, 11),
    k * APSKSymbol(9, 1),
    k * APSKSymbol(9, 3),
    k * APSKSymbol(9, 7),
    k * APSKSymbol(9, 5),
    k * APSKSymbol(11, -15),
    k * APSKSymbol(11, -13),
    k * APSKSymbol(11, -9),
    k * APSKSymbol(11, -11),
    k * APSKSymbol(11, -1),
    k * APSKSymbol(11, -3),
    k * APSKSymbol(11, -7),
    k * APSKSymbol(11, -5),
    k * APSKSymbol(11, 15),
    k * APSKSymbol(11, 13),
    k * APSKSymbol(11, 9),
    k * APSKSymbol(11, 11),
    k * APSKSymbol(11, 1),
    k * APSKSymbol(11, 3),
    k * APSKSymbol(11, 7),
    k * APSKSymbol(11, 5),
    k * APSKSymbol(1, -15),
    k * APSKSymbol(1, -13),
    k * APSKSymbol(1, -9),
    k * APSKSymbol(1, -11),
    k * APSKSymbol(1, -1),
    k * APSKSymbol(1, -3),
    k * APSKSymbol(1, -7),
    k * APSKSymbol(1, -5),
    k * APSKSymbol(1, 15),
    k * APSKSymbol(1, 13),
    k * APSKSymbol(1, 9),
    k * APSKSymbol(1, 11),
    k * APSKSymbol(1, 1),
    k * APSKSymbol(1, 3),
    k * APSKSymbol(1, 7),
    k * APSKSymbol(1, 5),
    k * APSKSymbol(3, -15),
    k * APSKSymbol(3, -13),
    k * APSKSymbol(3, -9),
    k * APSKSymbol(3, -11),
    k * APSKSymbol(3, -1),
    k * APSKSymbol(3, -3),
    k * APSKSymbol(3, -7),
    k * APSKSymbol(3, -5),
    k * APSKSymbol(3, 15),
    k * APSKSymbol(3, 13),
    k * APSKSymbol(3, 9),
    k * APSKSymbol(3, 11),
    k * APSKSymbol(3, 1),
    k * APSKSymbol(3, 3),
    k * APSKSymbol(3, 7),
    k * APSKSymbol(3, 5),
    k * APSKSymbol(7, -15),
    k * APSKSymbol(7, -13),
    k * APSKSymbol(7, -9),
    k * APSKSymbol(7, -11),
    k * APSKSymbol(7, -1),
    k * APSKSymbol(7, -3),
    k * APSKSymbol(7, -7),
    k * APSKSymbol(7, -5),
    k * APSKSymbol(7, 15),
    k * APSKSymbol(7, 13),
    k * APSKSymbol(7, 9),
    k * APSKSymbol(7, 11),
    k * APSKSymbol(7, 1),
    k * APSKSymbol(7, 3),
    k * APSKSymbol(7, 7),
    k * APSKSymbol(7, 5),
    k * APSKSymbol(5, -15),
    k * APSKSymbol(5, -13),
    k * APSKSymbol(5, -9),
    k * APSKSymbol(5, -11),
    k * APSKSymbol(5, -1),
    k * APSKSymbol(5, -3),
    k * APSKSymbol(5, -7),
    k * APSKSymbol(5, -5),
    k * APSKSymbol(5, 15),
    k * APSKSymbol(5, 13),
    k * APSKSymbol(5, 9),
    k * APSKSymbol(5, 11),
    k * APSKSymbol(5, 1),
    k * APSKSymbol(5, 3),
    k * APSKSymbol(5, 7),
    k * APSKSymbol(5, 5)
};

const QAM256Modulation QAM256Modulation::singleton;

QAM256Modulation::QAM256Modulation() : MQAMModulationBase(&constellation)
{
}

} // namespace physicallayer

} // namespace inet
