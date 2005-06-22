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
#include "librets/CurlHttpResponse.h"

using namespace librets;
using namespace std;

CurlHttpResponse::CurlHttpResponse()
{
}   

CurlHttpResponse::~CurlHttpResponse()
{
}

void CurlHttpResponse::SetStream(iostreamPtr stream)
{
    mStream = stream;
}

void CurlHttpResponse::WriteData(const char * data, size_t bytes)
{
    mStream->write(data, bytes);
}

void CurlHttpResponse::SetUrl(string url)
{
}

int CurlHttpResponse::GetResponseCode() const
{
    return mResponseCode;
}

void CurlHttpResponse::SetResponseCode(int responseCode)
{
    mResponseCode = responseCode;
}

string CurlHttpResponse::GetHeader(string name) const
{
    StringMap::const_iterator i = mHeaders.find(name);
    if (i != mHeaders.end())
    {
        return i->second;
    }
    else
    {
        return "";
    }
}

void CurlHttpResponse::SetHeader(string name, string value)
{
    mHeaders[name] = value;
}

istreamPtr CurlHttpResponse::GetInputStream() const
{
    return mStream;
}
