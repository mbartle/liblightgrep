/*
  liblightgrep: not the worst forensics regexp engine
  Copyright (C) 2013, Lightbox Technologies, Inc

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <scope/test.h>

#include "config.h"
#include "dtest.h"

SCOPE_FIXTURE_CTOR(hundredPatternSearch, DTest, DTest(TDATDIR "/hectotest.dat")) { SCOPE_ASSERT(fixture); }

SCOPE_FIXTURE_CTOR(thousandPatternSearch, DTest, DTest(TDATDIR "/kilotest.dat")) { SCOPE_ASSERT(fixture); }
