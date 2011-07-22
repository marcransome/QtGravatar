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

#ifndef GRAVATARURL_H
#define GRAVATARURL_H

#include <QObject>

class GravatarURL : public QObject
{
    Q_OBJECT
public:
    explicit GravatarURL(QObject *parent = 0);
    QString getProfileURL(QString email);
    QString getAvatarURL(QString email);

private:
    QString getHash(QString hash);
};

#endif // GRAVATARURL_H
