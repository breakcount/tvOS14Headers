/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOKeyBagNotification : NSObject {

	int _currentState;
	int _notifyToken;

}

@property (nonatomic,readonly) int state; 
+(id)sharedObject;
-(id)init;
-(void)dealloc;
-(int)state;
-(void)removeObserver:(id)arg1 ;
-(BOOL)canAccessFilesWithProtection:(unsigned long long)arg1 ;
-(void)updateState;
-(void)_statusChanged;
-(BOOL)addDataDidBecomeAvailableObserver:(id)arg1 ifTypeIsNotCurrentlyAccessible:(unsigned long long)arg2 ;
@end

