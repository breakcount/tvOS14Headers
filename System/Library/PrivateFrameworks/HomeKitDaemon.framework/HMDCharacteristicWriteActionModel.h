/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDActionModel.h>

@class NSString, NSNumber;

@interface HMDCharacteristicWriteActionModel : HMDActionModel

@property (nonatomic,retain) NSString * accessory; 
@property (nonatomic,retain) NSNumber * serviceID; 
@property (nonatomic,retain) NSNumber * characteristicID; 
@property (nonatomic,retain) id targetValue; 
+(id)properties;
-(id)dependentUUIDs;
-(void)loadModelWithActionInformation:(id)arg1 ;
@end
