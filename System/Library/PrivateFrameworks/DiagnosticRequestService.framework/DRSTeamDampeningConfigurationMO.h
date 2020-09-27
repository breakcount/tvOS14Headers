/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, DRSDampeningConfigurationMO, DRSDampeningManagerMO;

@interface DRSTeamDampeningConfigurationMO : NSManagedObject

@property (nonatomic,copy) NSString * teamID; 
@property (nonatomic,retain) NSSet * categoryConfigurations; 
@property (nonatomic,retain) DRSDampeningConfigurationMO * defaultConfiguration; 
@property (nonatomic,retain) DRSDampeningManagerMO * parentDampeningManager; 
+(id)fetchRequest;
@end

