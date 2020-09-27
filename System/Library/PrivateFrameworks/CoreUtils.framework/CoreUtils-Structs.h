/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __SecCertificate* SecCertificateRef;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct __CFBitVector* CFBitVectorRef;

typedef struct {
	unsigned char bytes[3];
} SCD_Struct_CU3;

typedef struct BTSessionImpl* BTSessionImplRef;

typedef struct BTDeviceImpl* BTDeviceImplRef;

typedef struct {
	unsigned char bytes[6];
} SCD_Struct_CU6;

typedef struct {
	/*function pointer*/void* accessoryEvent;
	/*function pointer*/void* accessorySetupCommand;
	/*function pointer*/void* accessoryRelayMsgRecv;
	/*function pointer*/void* accessoryCommandStatus;
} SCD_Struct_CU7;

typedef struct BTAccessoryManagerImpl* BTAccessoryManagerImplRef;

typedef struct BTLocalDeviceImpl* BTLocalDeviceImplRef;

typedef struct {
	/*function pointer*/void* statusEvent;
	/*function pointer*/void* leTestStopped;
	/*function pointer*/void* afhMapChanged;
} SCD_Struct_CU10;

typedef struct BTPairingAgentImpl* BTPairingAgentImplRef;

typedef struct channel* channelRef;

typedef struct channel_ring_desc* channel_ring_descRef;

typedef struct BonjourAdvertiserPrivate* BonjourAdvertiserPrivateRef;

typedef struct BonjourBrowser* BonjourBrowserRef;

typedef union {
	unsigned char __u6_addr8[16];
	unsigned short __u6_addr16[8];
	unsigned __u6_addr32[4];
} SCD_Union_CU16;

typedef struct sockaddr {
	unsigned char sa_len;
	unsigned char sa_family;
	char sa_data[14];
} sockaddr;

typedef struct in_addr {
	unsigned s_addr;
} in_addr;

typedef struct in6_addr {
	SCD_Union_CU16 __u6_addr;
} in6_addr;

typedef struct sockaddr_in6 {
	unsigned char sin6_len;
	unsigned char sin6_family;
	unsigned short sin6_port;
	unsigned sin6_flowinfo;
	in6_addr sin6_addr;
	unsigned sin6_scope_id;
} sockaddr_in6;

typedef struct sockaddr_in {
	unsigned char sin_len;
	unsigned char sin_family;
	unsigned short sin_port;
	in_addr sin_addr;
	char sin_zero[8];
} sockaddr_in;

typedef union {
	sockaddr sa;
	sockaddr_in v4;
	sockaddr_in6 v6;
} SCD_Union_CU22;

typedef struct {
	int field1;
	long long field2;
	long long field3;
	char* field4;
	int field5;
	long long field6;
	long long field7;
	int field8;
	_opaque_pthread_mutex_t field9;
	_ field10;
	t field11;
	e field12;
	long field13;
	long field14;
	double field15;
	int field16;
	const  field17;
} SCD_Struct_CU23;

typedef struct iovec {
	void iov_base;
	unsigned long long iov_len;
} iovec;

typedef struct cdb {
	char* map;
	int fd;
	unsigned size;
	unsigned loop;
	unsigned khash;
	unsigned kpos;
	unsigned hpos;
	unsigned hslots;
	unsigned dpos;
	unsigned dlen;
} cdb;

typedef struct buffer {
	char* x;
	unsigned p;
	unsigned n;
	int fd;
	/*function pointer*/void* op;
} buffer;

typedef struct cdb_make {
	char bspace[8192];
	char final[2048];
	unsigned count[256];
	unsigned start[256];
	cdb_hplist head;
	cdb_hp split;
	cdb_hp hash;
	unsigned numentries;
	buffer b;
	unsigned pos;
	int fd;
} cdb_make;

typedef struct _NSZone* NSZoneRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct PairingSessionPrivate* PairingSessionPrivateRef;

typedef struct CryptoAEADPrivate* CryptoAEADPrivateRef;

typedef struct OpaqueIOPSPowerSourceID* OpaqueIOPSPowerSourceIDRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct AsyncConnection* AsyncConnectionRef;

typedef struct {
	double startTime;
	unsigned char userChangedFriendlyName;
	unsigned char playPasswordSet;
	unsigned char adminPasswordSet;
	unsigned char destinationNetworkRecommendationUsed;
	double secondsToGetLinkUpOnSWAP;
	int wifiJoinSWAPError;
	unsigned char hitJoiningTargetSWAPTimeout;
	int rssiOfSWAP;
	unsigned snrOfSWAP;
	unsigned channelOfSWAP;
} SCD_Struct_CU38;

typedef struct {
	double secondsToGetLinkUpOnDestination;
	int wifiJoinDestinationAPError;
	unsigned char destinationNetworkPSKInKeychain;
	unsigned char hitJoiningDestinationAPTimeout;
	int rssiOfDestinationAP;
	unsigned snrOfDestinationAP;
	unsigned channelOfDestinationAP;
} SCD_Struct_CU39;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __WiFiDeviceClient* WiFiDeviceClientRef;

typedef struct __WiFiNetwork* WiFiNetworkRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

