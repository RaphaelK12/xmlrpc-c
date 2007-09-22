// InteropEchoProxy.h - xmlrpc-c C++ proxy class
// Auto-generated by xml-rpc-api2cpp.

#ifndef _InteropEchoProxy_H_
#define _InteropEchoProxy_H_ 1

#include <XmlRpcCpp.h>

class InteropEchoProxy {
    XmlRpcClient mClient;

public:
    InteropEchoProxy (const XmlRpcClient& client)
        : mClient(client) {}
    InteropEchoProxy (const string& server_url)
        : mClient(XmlRpcClient(server_url)) {}
    InteropEchoProxy (const InteropEchoProxy& o)
        : mClient(o.mClient) {}

    InteropEchoProxy& operator= (const InteropEchoProxy& o) {
        if (this != &o) mClient = o.mClient;
        return *this;
    }

    /* Echo an arbitrary XML-RPC string. */
    string echoString (string string1);

    /* Echo an arbitrary XML-RPC integer. */
    XmlRpcValue::int32 echoInteger (XmlRpcValue::int32 int1);

    /* Echo an arbitrary XML-RPC float. */
    double echoFloat (double double1);

    /* Echo an arbitrary XML-RPC struct. */
    XmlRpcValue /*struct*/ echoStruct (XmlRpcValue /*struct*/ struct1);

    /* Echo an array of arbitrary XML-RPC strings. */
    XmlRpcValue /*array*/ echoStringArray (XmlRpcValue /*array*/ array1);

    /* Echo an array of arbitrary XML-RPC integers. */
    XmlRpcValue /*array*/ echoIntegerArray (XmlRpcValue /*array*/ array1);

    /* Echo an array of arbitrary XML-RPC floats. */
    XmlRpcValue /*array*/ echoFloatArray (XmlRpcValue /*array*/ array1);

    /* Echo an array of arbitrary XML-RPC structs. */
    XmlRpcValue /*array*/ echoStructArray (XmlRpcValue /*array*/ array1);
};

#endif /* _InteropEchoProxy_H_ */