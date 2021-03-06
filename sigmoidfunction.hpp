/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                         *
 *  Parallel Fully logic algoritm demo                                     *
 *  Copyright (C) 2017  Łukasz "Kuszki" Dróżdż  l.drozdz@openmailbox.org   *
 *                                                                         *
 *  This program is free software: you can redistribute it and/or modify   *
 *  it under the terms of the GNU General Public License as published by   *
 *  the  Free Software Foundation, either  version 3 of the  License, or   *
 *  (at your option) any later version.                                    *
 *                                                                         *
 *  This  program  is  distributed  in the hope  that it will be useful,   *
 *  but WITHOUT ANY  WARRANTY;  without  even  the  implied  warranty of   *
 *  MERCHANTABILITY  or  FITNESS  FOR  A  PARTICULAR  PURPOSE.  See  the   *
 *  GNU General Public License for more details.                           *
 *                                                                         *
 *  You should have  received a copy  of the  GNU General Public License   *
 *  along with this program. If not, see http://www.gnu.org/licenses/.     *
 *                                                                         *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef SIGMOIDFUNCTION_HPP
#define SIGMOIDFUNCTION_HPP

#include "membershipfunction.hpp"

class SigmoidFunction : public MembershipFunction
{

	protected:

		double beta;
		double offset;

		bool rising;

	public:

		SigmoidFunction(double _beta, double _offset, bool _rising = true);
		virtual ~SigmoidFunction(void) override;

		virtual FuzzyVariable value(double x) const override;

		double getBeta(void) const;
		void setBeta(double value);

		double getOffset(void) const;
		void setOffset(double value);

		bool getRising(void) const;
		void setRising(bool value);

};

#endif // SIGMOIDFUNCTION_HPP
