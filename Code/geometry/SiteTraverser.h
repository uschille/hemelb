// 
// Copyright (C) University College London, 2007-2012, all rights reserved.
// 
// This file is part of HemeLB and is CONFIDENTIAL. You may not work 
// with, install, use, duplicate, modify, redistribute or share this
// file, or any part thereof, other than as allowed by any agreement
// specifically made by you with University College London.
// 

#ifndef HEMELB_GEOMETRY_SITETRAVERSER_H
#define HEMELB_GEOMETRY_SITETRAVERSER_H

#include "geometry/VolumeTraverser.h"

namespace hemelb
{
  namespace geometry
  {
    class LatticeData;

    /**
     * SiteTraverser is used to traverse the sites in a speficied block
     * within the lattice data
     */
    class SiteTraverser : public VolumeTraverser
    {
      public:
        SiteTraverser(const LatticeData & iLatticeDat);

        virtual ~SiteTraverser();

        site_t GetXCount() const;

        site_t GetYCount() const;

        site_t GetZCount() const;

      private:
        //Returns the block size in number of sites
        site_t GetBlockSize() const;

        const LatticeData & mLatticeData;
    };

  }
}

#endif // HEMELB_GEOMETRY_SITETRAVERSER_H
