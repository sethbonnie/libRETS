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
#ifndef LIBRETS_RETS_XML_ATTRIBUTE_H
#define LIBRETS_RETS_XML_ATTRIBUTE_H

#include <string>
#include "librets/RetsObject.h"

namespace librets {

class RetsXmlAttribute : public RetsObject
{
  public:
    RetsXmlAttribute(std::string name, std::string value);

    std::string GetName() const;

    std::string GetValue() const;

    virtual std::ostream & Print(std::ostream & outputStream) const;

    virtual bool Equals(const RetsObject * rhs) const;

  private:
    std::string mName;
    std::string mValue;
};

};

#endif

/* Local Variables: */
/* mode: c++ */
/* End: */
