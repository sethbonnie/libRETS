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
#ifndef LIBRETS_NOT_CRITERION_H
#define LIBRETS_NOT_CRITERION_H

#include <string>
#include "librets/sql_forward.h"
#include "librets/DmqlCriterion.h"

namespace librets {

class NotCriterion : public DmqlCriterion
{
  public:
    NotCriterion(DmqlCriterionPtr criterion);

    virtual std::ostream & ToDmql(std::ostream & out) const;

    virtual std::ostream & Print(std::ostream & out) const;

    virtual bool Equals(const RetsObject * object) const;

  private:
    DmqlCriterionPtr mCriterion;
};

};

#endif

/* Local Variables: */
/* mode: c++ */
/* End: */
