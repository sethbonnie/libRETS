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
#ifndef LIBRETS_METADATA_SYSTEM_H
#define LIBRETS_METADATA_SYSTEM_H

#include <string>
#include "librets/MetadataElement.h"

namespace librets {

/** A vector of MetadataResource objecst. */
typedef std::vector<MetadataResourcePtr> MetadataResourceList;
/** A smart pointer to MetadataResourceList. */
typedef boost::shared_ptr<MetadataResourceList> MetadataResourceListPtr;

/** A vector of MetadataForeignKey objects. */
typedef std::vector<MetadataForeignKeyPtr> MetadataForeignKeyList;
/** A smart pointer to MetadataForeignKeyList. */
typedef boost::shared_ptr<MetadataForeignKeyList> MetadataForeignKeyListPtr;

/**
 * System metadata.
 */
class MetadataSystem : public MetadataElement
{
  public:
    /**
     * Virtual destructor.
     */
    virtual ~MetadataSystem();

    /**
     * Returns SYSTEM.
     */
    virtual MetadataType GetType() const;

    /**
     * Returns the system ID.
     *
     * @return The system ID
     */
    std::string GetSystemID() const;

    /**
     * Returns the system description.
     *
     * @return The system description
     */
    std::string GetSystemDescription() const;

    /**
     * Returns the comments.
     *
     * @return The comments
     */
    std::string GetComments() const;

    /**
     * Returns all the child resources.
     *
     * @return All the child resources
     */
    MetadataResourceListPtr GetResources() const;

    /**
     * Returns all the child foreign keys.
     *
     * @return All the child foreign keys
     */
    MetadataForeignKeyListPtr GetForeignKeys() const;
};

};

#endif

/* Local Variables: */
/* mode: c++ */
/* End: */
