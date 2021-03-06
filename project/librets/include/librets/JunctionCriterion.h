/*
 * Copyright (C) 2005 National Association of REALTORS(R)
 *
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, and/or sell copies of the
 * Software, and to permit persons to whom the Software is furnished
 * to do so, provided that the above copyright notice(s) and this
 * permission notice appear in all copies of the Software and that
 * both the above copyright notice(s) and this permission notice
 * appear in supporting documentation.
 */

#ifndef LIBRETS_JUNCTION_CRITERION_H
#define LIBRETS_JUNCTION_CRITERION_H
/** 
 * @file JunctionCriterion.h
 * (Internal) Contains the JunctionCriterion parser class.
 */
 /// @cond MAINTAINER

#include <string>
#include <vector>
#include "librets/sql_forward.h"
#include "librets/DmqlCriterion.h"

namespace librets {

class JunctionCriterion : public DmqlCriterion
{
  public:
    JunctionCriterion();

    void add(DmqlCriterionPtr criterion);

    virtual std::ostream & ToDmql(std::ostream & outputStream) const;

    virtual std::ostream & Print(std::ostream & outputStream) const;

    bool Equals(const RetsObject * object) const;

  protected:
    typedef std::vector<DmqlCriterionPtr> CriterionList;

    void addAll(JunctionCriterionPtr junction);
    void addAll(const CriterionList & criteria);

    virtual std::string OperationName() const = 0;
    virtual std::string Operator() const = 0;

    CriterionList mCriteria;
};

};
/// @endcond
#endif

/* Local Variables: */
/* mode: c++ */
/* End: */
