/*****************************************************************************
 *   Copyright (C) 2004-2009 The PaGMO development team,                     *
 *   Advanced Concepts Team (ACT), European Space Agency (ESA)               *
 *   http://apps.sourceforge.net/mediawiki/pagmo                             *
 *   http://apps.sourceforge.net/mediawiki/pagmo/index.php?title=Developers  *
 *   http://apps.sourceforge.net/mediawiki/pagmo/index.php?title=Credits     *
 *   act@esa.int                                                             *
 *                                                                           *
 *   This program is free software; you can redistribute it and/or modify    *
 *   it under the terms of the GNU General Public License as published by    *
 *   the Free Software Foundation; either version 2 of the License, or       *
 *   (at your option) any later version.                                     *
 *                                                                           *
 *   This program is distributed in the hope that it will be useful,         *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 *   GNU General Public License for more details.                            *
 *                                                                           *
 *   You should have received a copy of the GNU General Public License       *
 *   along with this program; if not, write to the                           *
 *   Free Software Foundation, Inc.,                                         *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.               *
 *****************************************************************************/

// 30/01/10 Created by Francesco Biscani.

#ifndef PAGMO_TYPES_H
#define PAGMO_TYPES_H

#include <iostream>
#include <vector>

#include "config.h"

namespace pagmo
{
	/// Decision vector type.
	typedef std::vector<double> decision_vector;
	/// Fitness vector type.
	typedef std::vector<double> fitness_vector;
}

namespace std
{
	/// Overload stream insertion operator for std::vector<double>.
	inline ostream &operator<<(ostream &os, const vector<double> &v)
	{
		os << '[';
		for (std::vector<double>::size_type i = 0; i < v.size(); ++i) {
			os << v[i];
			if (i != v.size() - 1) {
				os << ", ";
			}
		}
		os << ']';
		return os;
	}
}

#endif
