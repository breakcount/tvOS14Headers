/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface ACCAppLinksIconInfo : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)_init;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)getIconDataForBundleID:(id)arg1 forIconSize:(double)arg2 withReply:(/*^block*/id)arg3 ;
@end

