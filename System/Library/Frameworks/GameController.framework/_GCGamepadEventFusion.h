/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCGamepadEventSource.h>

@class _GCGamepadEventFusionConfig, NSArray, NSString;

@interface _GCGamepadEventFusion : NSObject <_GCGamepadEventSource> {

	_GCGamepadEventFusionConfig* _config;
	SCD_Struct_GC18 _fusedData;
	NSArray* _observations;
	NSArray* _observers;

}

@property (nonatomic,retain) NSArray * observations;                //@synthesize observations=_observations - In the implementation block
@property (copy) NSArray * observers;                               //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setObservations:(NSArray *)arg1 ;
-(NSArray *)observations;
-(NSArray *)observers;
-(void)setObservers:(NSArray *)arg1 ;
-(id)observeGamepadEvents:(/*^block*/id)arg1 ;
-(id)initWithConfiguration:(id)arg1 sources:(id)arg2 ;
@end

