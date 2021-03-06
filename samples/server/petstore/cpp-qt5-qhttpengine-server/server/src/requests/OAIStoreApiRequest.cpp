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

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QDebug>

#include "OAIHelpers.h"
#include "OAIStoreApiRequest.h"

namespace OpenAPI {

OAIStoreApiRequest::OAIStoreApiRequest(QHttpEngine::Socket *s, OAIStoreApiHandler* hdl) : QObject(s), socket(s), handler(hdl) {
}

OAIStoreApiRequest::~OAIStoreApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIStoreApiRequest::~OAIStoreApiRequest()";
}

QMap<QString, QString> 
OAIStoreApiRequest::getDefaultHeaders(){
    return defaultHeaders;
}

QHttpEngine::Socket* OAIStoreApiRequest::getRawSocket(){
    return socket;
}


void OAIStoreApiRequest::deleteOrderRequest(QString order_idstr){
    qDebug() << "/v2/store/order/{orderId}";
    connect(this, &OAIStoreApiRequest::deleteOrder, handler, &OAIStoreApiHandler::deleteOrder);
    
    
    QString order_id;
    fromStringValue(order_idstr, order_id);
    

    emit deleteOrder( order_id);
}


void OAIStoreApiRequest::getInventoryRequest(){
    qDebug() << "/v2/store/inventory";
    connect(this, &OAIStoreApiRequest::getInventory, handler, &OAIStoreApiHandler::getInventory);
    
    


    emit getInventory();
}


void OAIStoreApiRequest::getOrderByIdRequest(QString order_idstr){
    qDebug() << "/v2/store/order/{orderId}";
    connect(this, &OAIStoreApiRequest::getOrderById, handler, &OAIStoreApiHandler::getOrderById);
    
    
    qint64 order_id;
    fromStringValue(order_idstr, order_id);
    

    emit getOrderById( order_id);
}


void OAIStoreApiRequest::placeOrderRequest(){
    qDebug() << "/v2/store/order";
    connect(this, &OAIStoreApiRequest::placeOrder, handler, &OAIStoreApiHandler::placeOrder);
    
    
 
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIOrder oai_order;
    ::OpenAPI::fromJsonValue(oai_order, obj);
    

    emit placeOrder( oai_order);
}

  

void OAIStoreApiRequest::deleteOrderResponse(){
    socket->setStatusCode(QHttpEngine::Socket::OK);
    if(socket->isOpen()){
        socket->writeHeaders();
        socket->close();
    }
}
void OAIStoreApiRequest::getInventoryResponse(QMap<QString, qint32> res){
    socket->setStatusCode(QHttpEngine::Socket::OK);
    if(socket->isOpen()){
        socket->writeHeaders();
        socket->close();
    }
}
void OAIStoreApiRequest::getOrderByIdResponse(OAIOrder res){
    socket->setStatusCode(QHttpEngine::Socket::OK);
    if(socket->isOpen()){
        socket->writeHeaders();
        socket->close();
    }
}
void OAIStoreApiRequest::placeOrderResponse(OAIOrder res){
    socket->setStatusCode(QHttpEngine::Socket::OK);
    if(socket->isOpen()){
        socket->writeHeaders();
        socket->close();
    }
}


void OAIStoreApiRequest::deleteOrderError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type);
    Q_UNUSED(error_str);     
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    if(socket->isOpen()){
        socket->writeHeaders();
        socket->close();
    }
}
void OAIStoreApiRequest::getInventoryError(QMap<QString, qint32> res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type);
    Q_UNUSED(error_str);     
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    if(socket->isOpen()){
        socket->writeHeaders();
        socket->close();
    }
}
void OAIStoreApiRequest::getOrderByIdError(OAIOrder res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type);
    Q_UNUSED(error_str);     
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    if(socket->isOpen()){
        socket->writeHeaders();
        socket->close();
    }
}
void OAIStoreApiRequest::placeOrderError(OAIOrder res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type);
    Q_UNUSED(error_str);     
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    if(socket->isOpen()){
        socket->writeHeaders();
        socket->close();
    }
}




}
