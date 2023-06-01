/*
 * Strawberry Music Player
 * Copyright 2023, Jonas Kvinge <jonas@jkvinge.net>
 *
 * Strawberry is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Strawberry is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Strawberry.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef UWPDEVICEFINDER_H
#define UWPDEVICEFINDER_H

#include "config.h"

#include "devicefinder.h"

class UWPDeviceFinder : public DeviceFinder {
 public:
  explicit UWPDeviceFinder();

  virtual bool Initialize() { return true; }
  virtual QList<Device> ListDevices();
};

#endif  // UWPDEVICEFINDER_H
