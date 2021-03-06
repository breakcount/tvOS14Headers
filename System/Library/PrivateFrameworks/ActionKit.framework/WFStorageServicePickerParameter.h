/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFiCloudDriveAccessResource;

@interface WFStorageServicePickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	WFiCloudDriveAccessResource* _iCloudDriveAccessResource;

}

@property (nonatomic,retain) WFiCloudDriveAccessResource * iCloudDriveAccessResource;              //@synthesize iCloudDriveAccessResource=_iCloudDriveAccessResource - In the implementation block
+(id)referencedActionResourceClasses;
-(BOOL)isHidden;
-(id)defaultSerializedRepresentation;
-(id)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)setActionResources:(id)arg1 ;
-(id)accessoryIconForPossibleState:(id)arg1 ;
-(id)defaultSupportedVariableTypes;
-(WFiCloudDriveAccessResource *)iCloudDriveAccessResource;
-(void)setICloudDriveAccessResource:(WFiCloudDriveAccessResource *)arg1 ;
@end

