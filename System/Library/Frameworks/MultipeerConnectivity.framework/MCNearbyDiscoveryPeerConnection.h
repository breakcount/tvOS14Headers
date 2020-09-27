/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableData, NSInputStream, NSOutputStream, NSMutableArray, NSObject;

@interface MCNearbyDiscoveryPeerConnection : NSObject <NSStreamDelegate> {

	NSString* _remoteServiceName;
	NSString* _localServiceName;
	BOOL _connected;
	NSMutableData* _dataReceived;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	BOOL _shouldSendHello;
	BOOL _readyToWrite;
	NSMutableData* _dataToSend;
	unsigned _currentSequenceNumber;
	NSMutableData* _dataToSendHoldingQueue;
	NSMutableArray* _receivedDataHoldingQueue;
	NSMutableArray* _messageReceiptHandlerList;
	NSMutableArray* _messageReceiptHandlerHoldingQueue;
	/*^block*/id _receiveDataHandler;
	/*^block*/id _connectedHandler;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_queue> _targetQueue;

}

@property (nonatomic,copy) NSString * remoteServiceName;                            //@synthesize remoteServiceName=_remoteServiceName - In the implementation block
@property (nonatomic,copy) NSString * localServiceName;                             //@synthesize localServiceName=_localServiceName - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                           //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                         //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,copy) id receiveDataHandler;                                   //@synthesize receiveDataHandler=_receiveDataHandler - In the implementation block
@property (nonatomic,copy) id connectedHandler;                                     //@synthesize connectedHandler=_connectedHandler - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> syncQueue;                //@synthesize syncQueue=_syncQueue - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> targetQueue;              //@synthesize targetQueue=_targetQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(NSOutputStream *)outputStream;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSInputStream *)inputStream;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)setReceiveDataHandler:(id)arg1 ;
-(void)sendData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setConnectedHandler:(id)arg1 ;
-(id)receiveDataHandler;
-(NSString *)localServiceName;
-(id)initWithLocalServiceName:(id)arg1 ;
-(id)connectedHandler;
-(void)setLocalServiceName:(NSString *)arg1 ;
-(void)syncSendHello;
-(void)syncReceivedData:(id)arg1 error:(id)arg2 ;
-(NSString *)remoteServiceName;
-(void)syncCloseConnectionNow;
-(void)syncSendMessage:(int)arg1 data:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setRemoteServiceName:(NSString *)arg1 ;
-(void)syncSendMessageReceipt:(int)arg1 sequenceNumber:(unsigned)arg2 ;
-(BOOL)shouldDecideAboutConnection;
-(void)syncSendAccept;
-(void)syncAcceptedConnection;
-(void)syncProcessMessage:(int)arg1 data:(id)arg2 sequenceNumber:(unsigned)arg3 ;
-(void)syncSendData;
-(void)setupInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)syncAppendDataToSend:(id)arg1 ;
-(int)socketForStream:(id)arg1 ;
-(void)syncHandleStreamEventOpenCompleted:(id)arg1 ;
-(void)syncReadFromInputStream;
-(id)stringForStreamEventCode:(unsigned long long)arg1 ;
-(void)syncHandleInputStreamEvent:(unsigned long long)arg1 ;
-(void)syncHandleOutputStreamEvent:(unsigned long long)arg1 ;
-(void)connectToNetService:(id)arg1 ;
-(void)attachInputStream:(id)arg1 outputStream:(id)arg2 ;
@end

