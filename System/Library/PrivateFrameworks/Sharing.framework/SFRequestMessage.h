/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/SFMessage.h>

@interface SFRequestMessage : SFMessage {

	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) id responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)invalidate;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
@end

