/*
 *  Copyright (c) 2011 Marc Ransome <marc.ransome@fidgetbox.co.uk>
 *
 *  This file is part of QtGravatar.
 *
 *  QtGravatar is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  QtGravatar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with QtGravatar.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "gravatarurl.h"

int main(int argc, char *argv[])
{
    // string variable for storing returned url
    QString profileUrl;
    QString avatarUrl;

    // object for constructing the gravatar url
    GravatarURL grav;

    // example 1 - obtain the gravatar profile url by invoking the
    // getProfileURL function which returns a QString containing the url
    profileUrl = grav.getProfileURL("some.email@address.com");

    // example 2 - obtain the avatar url by invoking the
    // getAvatarURL function which returns a string containing the url
    avatarUrl = grav.getAvatarURL("some.email@address.com");
}
