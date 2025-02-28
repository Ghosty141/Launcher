#pragma once

#include "../AccountData.h"

namespace Parsers
{
    bool getDateTime(QJsonValue value, QDateTime & out);
    bool getString(QJsonValue value, QString & out);
    bool getNumber(QJsonValue value, double & out);
    bool getNumber(QJsonValue value, int64_t & out);
    bool getBool(QJsonValue value, bool & out);

    bool parseXTokenResponse(QByteArray &data, Katabasis::Token &output, const char * name);
    bool parseMojangResponse(QByteArray &data, Katabasis::Token &output);

    bool parseMinecraftProfile(QByteArray &data, MinecraftProfile &output);
    bool parseMinecraftEntitlements(QByteArray &data, MinecraftEntitlement &output);
    bool parseRolloutResponse(QByteArray &data, bool& result);
}
