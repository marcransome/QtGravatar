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

#include <QtCore/QCoreApplication>
#include <iostream>

#include "gravatarurl.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    if(argc > 1)
    {   // ..an argument was provided

        // string variable for storing returned url
        QString profileUrl;
        QString avatarUrl;

        // object for constructing the gravatar url
        GravatarURL grav;

        // construct profile url
        profileUrl = grav.getProfileURL(argv[1]);

        // construct avatar url
        avatarUrl = grav.getAvatarURL(argv[1]);

        cout << "Profile URL: " << profileUrl.toLocal8Bit().constData() << endl;
        cout << "Avatar URL: " << avatarUrl.toLocal8Bit().constData() << endl;

        exit(0);
    }
    else
    {   // ..no argument was provided

        // output error and exit
        cout << "No email address provided, exiting.\n";
        exit(1);
    }

    return a.exec();
}
