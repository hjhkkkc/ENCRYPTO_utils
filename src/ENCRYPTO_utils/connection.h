/**
 \file 		connection.h
 \author 	michael.zohner@ec-spride.de
 \copyright	ABY - A Framework for Efficient Mixed-protocol Secure Two-party Computation
			Copyright (C) 2015 Engineering Cryptographic Protocols Group, TU Darmstadt
			This program is free software: you can redistribute it and/or modify
			it under the terms of the GNU Affero General Public License as published
			by the Free Software Foundation, either version 3 of the License, or
			(at your option) any later version.
			This program is distributed in the hope that it will be useful,
			but WITHOUT ANY WARRANTY; without even the implied warranty of
			MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
			GNU Affero General Public License for more details.
			You should have received a copy of the GNU Affero General Public License
			along with this program. If not, see <http://www.gnu.org/licenses/>.
 \brief		connection Implementation
 */

#ifndef __CONNECTION_H__
#define __CONNECTION_H__

#include "typedefs.h"
#include <memory>
#include <string>
#include <vector>

// forward declaration
class CSocket;

bool Connect(const std::string& address, uint16_t port,
		std::vector<std::unique_ptr<CSocket>> &sockets, int id);
bool Listen(const std::string& address, uint16_t port,
		std::vector<std::vector<std::unique_ptr<CSocket>>> &sockets,
		int numConnections, int myID);

std::unique_ptr<CSocket> Connect(const std::string& address, uint16_t port);
std::unique_ptr<CSocket> Listen(const std::string& address, uint16_t port);

#endif
