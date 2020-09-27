/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>

@protocol _CDUserContext;
@class NSMutableDictionary;

@interface REDuetContextStore : RESingleton {

	id<_CDUserContext> _context;
	NSMutableDictionary* _registrations;

}
-(id)_init;
-(id)isConnectedToCarQuery;
-(id)isConnectedToAudioBluetoothDeviceQuery;
-(void)registerForQuery:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(void)unregisterForQuery:(id)arg1 ;
@end

