/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSArray;

@interface CAWindowServer : NSObject {

	CAWindowServerImpl* _impl;
	BOOL _mirroringEnabled;

}

@property (readonly) NSArray * displays; 
@property (getter=isMirroringEnabled) BOOL mirroringEnabled;              //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (assign) unsigned rendererFlags; 
@property (getter=isSecure) BOOL secure; 
+(id)context;
+(id)server;
+(void)stopServer;
+(id)serverIfRunning;
+(id)contextWithOptions:(id)arg1 ;
+(id)serverWithOptions:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)isSecure;
-(NSArray *)displays;
-(id)secureModeViolations;
-(id)displayWithDisplayId:(unsigned)arg1 ;
-(void)addDisplay:(id)arg1 ;
-(void)removeDisplay:(id)arg1 ;
-(void)removeAllDisplays;
-(id)displayWithName:(id)arg1 ;
-(id)displayWithUniqueId:(id)arg1 ;
-(void)_detectDisplays;
-(void)setRendererFlags:(unsigned)arg1 ;
-(unsigned)rendererFlags;
-(id)insecureProcessIds;
-(unsigned)clientPortOfContextId:(unsigned)arg1 ;
-(unsigned)taskNamePortOfContextId:(unsigned)arg1 ;
-(unsigned)contextIdHostingContextId:(unsigned)arg1 ;
-(BOOL)isMirroringEnabled;
-(void)setMirroringEnabled:(BOOL)arg1 ;
@end

