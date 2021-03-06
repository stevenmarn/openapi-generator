/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef _OAI_OAIUserApiRequest_H_
#define _OAI_OAIUserApiRequest_H_

#include <QObject>
#include <QStringList>
#include <QNetworkReply>
#include <QSharedPointer>

#include <qhttpengine/socket.h>
#include "OAIUser.h"
#include <QList>
#include <QString>
#include "OAIUserApiHandler.h"

namespace OpenAPI {

class OAIUserApiRequest : public QObject
{
    Q_OBJECT
    
public:
    OAIUserApiRequest(QHttpEngine::Socket *s, OAIUserApiHandler* handler);
    virtual ~OAIUserApiRequest();

    void createUserRequest();
    void createUsersWithArrayInputRequest();
    void createUsersWithListInputRequest();
    void deleteUserRequest(QString username);
    void getUserByNameRequest(QString username);
    void loginUserRequest();
    void logoutUserRequest();
    void updateUserRequest(QString username);
    

    void createUserResponse();
    void createUsersWithArrayInputResponse();
    void createUsersWithListInputResponse();
    void deleteUserResponse();
    void getUserByNameResponse(OAIUser res);
    void loginUserResponse(QString res);
    void logoutUserResponse();
    void updateUserResponse();
    

    void createUserError(QNetworkReply::NetworkError error_type, QString& error_str);
    void createUsersWithArrayInputError(QNetworkReply::NetworkError error_type, QString& error_str);
    void createUsersWithListInputError(QNetworkReply::NetworkError error_type, QString& error_str);
    void deleteUserError(QNetworkReply::NetworkError error_type, QString& error_str);
    void getUserByNameError(OAIUser res, QNetworkReply::NetworkError error_type, QString& error_str);
    void loginUserError(QString res, QNetworkReply::NetworkError error_type, QString& error_str);
    void logoutUserError(QNetworkReply::NetworkError error_type, QString& error_str);
    void updateUserError(QNetworkReply::NetworkError error_type, QString& error_str);
    

    QMap<QString, QString> getDefaultHeaders();
    QHttpEngine::Socket* getRawSocket();

signals:
    void createUser(OAIUser oai_user);
    void createUsersWithArrayInput(QList<OAIUser> oai_user);
    void createUsersWithListInput(QList<OAIUser> oai_user);
    void deleteUser(QString username);
    void getUserByName(QString username);
    void loginUser(QString username, QString password);
    void logoutUser();
    void updateUser(QString username, OAIUser oai_user);
    

private:
    QMap<QString, QString> defaultHeaders;
    QHttpEngine::Socket  *socket;
    OAIUserApiHandler *handler;
};

}

#endif // _OAI_OAIUserApiRequest_H_
