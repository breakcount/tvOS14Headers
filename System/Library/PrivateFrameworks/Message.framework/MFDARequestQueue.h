/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFRequestQueue.h>

@class DAMailAccount, NSString;

@interface MFDARequestQueue : MFRequestQueue {

	DAMailAccount* _account;
	NSString* _folderID;

}
-(void)dealloc;
-(id)initWithAccount:(id)arg1 folderID:(id)arg2 ;
-(id)filterRequests:(id)arg1 consumers:(id)arg2 newConsumers:(id*)arg3 ;
-(void)processRequests:(id)arg1 consumers:(id)arg2 ;
@end
