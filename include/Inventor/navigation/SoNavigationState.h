#ifndef COIN_SONAVIGATIONSTATE_H
#define COIN_SONAVIGATIONSTATE_H

/**************************************************************************\
 *
 *  This file is part of the Coin 3D visualization library.
 *  Copyright (C) 1998-2008 by Kongsberg SIM.  All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  ("GPL") version 2 as published by the Free Software Foundation.
 *  See the file LICENSE.GPL at the root directory of this source
 *  distribution for additional information about the GNU GPL.
 *
 *  For using Coin with software that can not be combined with the GNU
 *  GPL, and for taking advantage of the additional benefits of our
 *  support services, please contact Kongsberg SIM about acquiring
 *  a Coin Professional Edition License.
 *
 *  See http://www.coin3d.org/ for more information.
 *
 *  Kongsberg SIM, Postboks 1283, Pirsenteret, 7462 Trondheim, NORWAY.
 *  http://www.sim.no/  sales@sim.no  coin-support@coin3d.org
 *
\**************************************************************************/

// IMPORTANT NOTE: This class is part of a development DEAD END in
// Coin that WILL BE DEPRECATED and removed in a future version.
// It is only included because of 3rd party dependencies created towards
// the development branch of Coin before the Coin 3.0 release.
// Use ScXML-based navigation instead.  It's the way of the future.

#include <Inventor/SbBasic.h>

class SoEvent;
class SoNavigationMode;

class SoNavigationStateP;

class COIN_DLL_API SoNavigationState {
public:
  SoNavigationState(void);
  ~SoNavigationState(void);

  void push(SoNavigationMode * mode, const SoEvent * trigger);
  void pop(void);
  void reset(void);

  SoNavigationMode * getMode(void) const;
  const SoEvent * getTrigger(void) const;

private:
  SoNavigationStateP * pimpl;

}; // SoNavigationState

#endif // !COIN_SONAVIGATIONSTATE_H
