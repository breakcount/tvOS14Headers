/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>

@interface WFLocationParameter : WFParameter {

	BOOL _allowsTextOnlyLocations;
	BOOL _allowsCurrentLocation;
	BOOL _skipsProcessingCurrentLocation;
	BOOL _defaultToCurrentLocation;

}

@property (nonatomic,readonly) BOOL defaultToCurrentLocation;                    //@synthesize defaultToCurrentLocation=_defaultToCurrentLocation - In the implementation block
@property (nonatomic,readonly) BOOL allowsTextOnlyLocations;                     //@synthesize allowsTextOnlyLocations=_allowsTextOnlyLocations - In the implementation block
@property (nonatomic,readonly) BOOL allowsCurrentLocation;                       //@synthesize allowsCurrentLocation=_allowsCurrentLocation - In the implementation block
@property (nonatomic,readonly) BOOL skipsProcessingCurrentLocation;              //@synthesize skipsProcessingCurrentLocation=_skipsProcessingCurrentLocation - In the implementation block
@property (nonatomic,readonly) double currentLocationAccuracy; 
-(id)defaultSerializedRepresentation;
-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg1 ;
-(double)currentLocationAccuracy;
-(BOOL)allowsTextOnlyLocations;
-(BOOL)allowsCurrentLocation;
-(BOOL)skipsProcessingCurrentLocation;
-(BOOL)defaultToCurrentLocation;
@end
