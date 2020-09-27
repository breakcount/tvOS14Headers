/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVRoutingSessionDestinationInternal, NSArray;

@interface AVRoutingSessionDestination : NSObject {

	AVRoutingSessionDestinationInternal* _ivars;

}

@property (nonatomic,readonly) NSArray * outputDeviceDescriptions; 
@property (nonatomic,readonly) float probability; 
@property (nonatomic,readonly) BOOL providesExternalVideoPlayback; 
-(id)description;
-(id)init;
-(void)dealloc;
-(float)probability;
-(NSArray *)outputDeviceDescriptions;
-(BOOL)providesExternalVideoPlayback;
-(id)initWithFigRoutingSessionDestination:(const CFDictionaryRef)arg1 ;
-(BOOL)_canQueryOutputDeviceDescriptionsAndReturnCurrentValue:(id*)arg1 ;
@end

