/* ***********************************************************************
 * Uptime library for Arduino boards and compatible systems
 * (C) 2020 by Harald ten Hoopen (https://github.com/haraldtux)
 *
 * This file is part of Uptime library for Arduino boards and compatible systems
 *
 * Uptime library for Arduino boards and compatible systems is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Uptime library for Arduino boards and compatible systems is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Uptime library for Arduino boards and compatible systems.  If not, see <http://www.gnu.org/licenses/>.
 * ***********************************************************************
 * Complete documentation for each function name exist
 * inside the implementation uptime_formatter.cpp file
 */
  

#include "WString.h"

class uptime_formatter2
{
  public:
    uptime_formatter2();
    
    static String getUptime();
    static String getUptimeWithMillis();
};
