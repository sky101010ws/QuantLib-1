
/*
 * Copyright (C) 2000-2001 QuantLib Group
 *
 * This file is part of QuantLib.
 * QuantLib is a C++ open source library for financial quantitative
 * analysts and developers --- http://quantlib.sourceforge.net/
 *
 * QuantLib is free software and you are allowed to use, copy, modify, merge,
 * publish, distribute, and/or sell copies of it under the conditions stated
 * in the QuantLib License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the license for more details.
 *
 * You should have received a copy of the license along with this file;
 * if not, contact ferdinando@ametrano.net
 * The license is also available at http://quantlib.sourceforge.net/LICENSE.TXT
 *
 * The members of the QuantLib Group are listed in the Authors.txt file, also
 * available at http://quantlib.sourceforge.net/Authors.txt
*/

/*! \file avgpriceasianpathpricer.hpp

    $Source$
    $Name$
    $Log$
    Revision 1.3  2001/05/24 11:34:07  nando
    smoothing #include xx.hpp

    Revision 1.2  2001/05/23 19:30:27  nando
    smoothing #include xx.hpp

    Revision 1.1  2001/04/09 14:05:48  nando
    all the *.hpp moved below the Include/ql level

    Revision 1.2  2001/04/06 18:46:20  nando
    changed Authors, Contributors, Licence and copyright header

    Revision 1.1  2001/04/04 11:07:22  nando
    Headers policy part 1:
    Headers should have a .hpp (lowercase) filename extension
    All *.h renamed to *.hpp

    Revision 1.1  2001/02/13 15:05:23  lballabio
    Trimmed a couple of long file names for Mac compatibility

*/

#ifndef quantlib_montecarlo_average_price_asian_path_pricer_h
#define quantlib_montecarlo_average_price_asian_path_pricer_h

#include "ql/MonteCarlo/europeanpathpricer.hpp"

namespace QuantLib {

    namespace MonteCarlo {

        class AveragePriceAsianPathPricer : public EuropeanPathPricer {
        public:
            AveragePriceAsianPathPricer(): EuropeanPathPricer() {}
            AveragePriceAsianPathPricer(Option::Type type,
                double underlying, double strike, double discount);
            virtual double value(const Path &path) const;
        };

    }

}


#endif
