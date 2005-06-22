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
#include <iostream>
#include "librets/OrCriterion.h"

using namespace librets;
using std::string;
using std::ostream;

OrCriterion::OrCriterion(DmqlCriterionPtr first, DmqlCriterionPtr second)
    : JunctionCriterion()
{
    // Note that virtual methods are disabled during constructors, so
    // it is important to call add() from within scope of OrCriterion
    // to ensure the proper methods get called.
    add(first);
    add(second);
}

string OrCriterion::Operator() const
{
    return "|";
}

string OrCriterion::OperationName() const
{
    return "locical or";
}
