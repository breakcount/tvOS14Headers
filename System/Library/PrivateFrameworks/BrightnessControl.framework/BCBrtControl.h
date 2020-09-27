/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BrightnessControl.framework/BrightnessControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log, OS_dispatch_queue;
#import <BrightnessControl/BrightnessControl-Structs.h>
@class NSObject, NSString, NSMutableDictionary, NSUUID, NSDictionary;

@interface BCBrtControl : NSObject {

	NSObject*<OS_os_log> _logHandle;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _id;
	BOOL _isValid;
	NSMutableDictionary* _capabilities;
	double _maxNits;
	double _minNits;
	NSUUID* _containerID;
	const CFUUIDRef _cfContainerID;
	BOOL _multipleControlEnabled;
	/*^block*/id _displayInvalidHandler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) NSObject*<OS_os_log> logHandle; 
@property (readonly) NSObject*<OS_dispatch_queue> queue; 
@property (readonly) const CFUUIDRef cfContainerID; 
@property (readonly) NSUUID * containerID;                                  //@synthesize containerID=_containerID - In the implementation block
@property (readonly) double maxNits;                                        //@synthesize maxNits=_maxNits - In the implementation block
@property (readonly) double minNits;                                        //@synthesize minNits=_minNits - In the implementation block
@property (copy,readonly) id ID; 
@property (readonly) NSDictionary * capabilities;                           //@synthesize capabilities=_capabilities - In the implementation block
@property (assign) BOOL multipleControlEnabled;                             //@synthesize multipleControlEnabled=_multipleControlEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) BOOL isValid;                                          //@synthesize isValid=_isValid - In the implementation block
@property (copy) id displayInvalidHandler;                                  //@synthesize displayInvalidHandler=_displayInvalidHandler - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
+(id)newMonitorWithHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
+(id)copyAvailableControls;
+(id)newMonitorForAllControlsWithHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
+(id)copyAllAvailableControls;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_os_log>)logHandle;
-(NSDictionary *)capabilities;
-(NSUUID *)containerID;
-(id)ID;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)displayInvalidHandler;
-(void)_runOnCallbackQueue:(/*^block*/id)arg1 ;
-(BOOL)_checkIsValid:(id*)arg1 ;
-(id)copyModuleIdentifier;
-(BOOL)setNits:(double)arg1 error:(id*)arg2 ;
-(double)getNitsWithError:(id*)arg1 ;
-(BOOL)setProperty:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(id)copyProperty:(id)arg1 error:(id*)arg2 ;
-(const CFUUIDRef)cfContainerID;
-(void)setNitsAsync:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPropertyAync:(id)arg1 value:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(double)maxNits;
-(double)minNits;
-(BOOL)multipleControlEnabled;
-(void)setMultipleControlEnabled:(BOOL)arg1 ;
-(void)setDisplayInvalidHandler:(id)arg1 ;
@end

