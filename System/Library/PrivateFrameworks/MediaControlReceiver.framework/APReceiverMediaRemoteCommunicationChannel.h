/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaControlReceiver.framework/MediaControlReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class APReceiverMediaRemoteCommunicationChannelInternal, NSString;

@interface APReceiverMediaRemoteCommunicationChannel : NSObject {

	APReceiverMediaRemoteCommunicationChannelInternal* _commChannel;

}

@property (nonatomic,readonly) NSString * uuid; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectID;
-(NSString *)uuid;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

