/**       GNU GENERAL PUBLIC LICENSE, Version 3
 * cpulimit - CPU usage limiter for windows (cygwin)
 * Copyright (C) 2012 Alexandre Quercia <alquerci@email.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

typedef struct ClSettings ClSettings;
struct ClSettings
{
    WCHAR *ExeName;
    DWORD pid;
    int nbTimeOn;
    int nbTimeOff;
    int isHighPriority;
    int isNtDll;
    int codeExePriority;
    int lazy;
};

ClSettings GetSettings();
