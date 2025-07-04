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

#ifndef COLLECTIONMODELUPDATE_H
#define COLLECTIONMODELUPDATE_H

#include "core/song.h"

class CollectionModelUpdate {
 public:
  enum class Type {
    Reset,
    AddReAddOrUpdate,
    Add,
    Update,
    Remove,
  };
  explicit CollectionModelUpdate(const Type _type, const SongList &_songs = SongList());
  Type type;
  SongList songs;
};

#endif  // COLLECTIONMODELUPDATE_H
