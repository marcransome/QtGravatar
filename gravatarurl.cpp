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
#include <QString>
#include <QCryptographicHash>

GravatarURL::GravatarURL(QObject *parent) :
    QObject(parent)
{
}

QString GravatarURL::getProfileURL(QString email)
{
    // base url for gravatar
    QString gravBaseUrl = QString("http://www.gravatar.com/");

    // append hash to gravatar url
    gravBaseUrl.append(getHash(email));

    // return gravatar url
    return gravBaseUrl;
}

QString GravatarURL::getAvatarURL(QString email)
{
    // base url for gravatar
    QString gravAvatarUrl = QString("http://www.gravatar.com/avatar/");

    // append hash to gravatar url
    gravAvatarUrl.append(getHash(email));

    // return gravatar url
    return gravAvatarUrl;
}

QString GravatarURL::getHash(QString email)
{
    // remove unwanted spaces from email address
    email.replace(QString(" "), QString(""));

    // convert email address to lower case
    email = email.toLower();

    // byte array for hash function
    QByteArray bytes;
    bytes.append(email);

    // construct hash from md5
    QString hash = QString(QCryptographicHash::hash((bytes),QCryptographicHash::Md5).toHex());

    // return hashed value of email
    return hash;

}
