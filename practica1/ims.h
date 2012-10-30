//gsoap ns service name: ims
//gsoap ns service style: rpc
//gsoap ns service encoding: encoded
//gsoap ns service namespace: urn:ims
#define IMS_MAX_MSG_SIZE 256

typedef char *xsd__string;

struct Message{
	xsd__string name;
	xsd__string msg;
};

int ims__sendMessage (struct Message myMessage, int *result);
int ims__receiveMessage (struct Message *myMessage);
