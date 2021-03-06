/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_activity;
@class NSString, NSObject;

@interface GKActivity : NSObject {

	unsigned _mode;
	NSString* _name;
	NSObject*<OS_os_activity> _parent;
	NSObject*<OS_os_activity> _activity;

}

@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned mode;                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_activity> parent;                //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_activity> activity;              //@synthesize activity=_activity - In the implementation block
+(void)execute:(/*^block*/id)arg1 ;
+(id)activity;
+(id)detached;
+(id)named:(id)arg1 ;
+(id)currentOrNew;
+(void)named:(id)arg1 execute:(/*^block*/id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(NSObject*<OS_os_activity>)parent;
-(void)execute:(/*^block*/id)arg1 ;
-(NSObject*<OS_os_activity>)activity;
-(void)setActivity:(NSObject*<OS_os_activity>)arg1 ;
-(void)setParent:(NSObject*<OS_os_activity>)arg1 ;
-(id)initWithName:(id)arg1 parent:(id)arg2 mode:(unsigned)arg3 ;
-(void)createActivity;
-(id)named:(id)arg1 ;
-(void)named:(id)arg1 execute:(/*^block*/id)arg2 ;
-(id)child;
@end

