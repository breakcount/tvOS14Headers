/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:59 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface PBSIRVolumeButtonConfiguration : NSObject <NSCopying> {

	BOOL _isBuiltIn;
	NSString* _configurationName;
	NSUUID* _configurationUUID;

}

@property (nonatomic,readonly) NSString * configurationName;              //@synthesize configurationName=_configurationName - In the implementation block
@property (nonatomic,readonly) NSUUID * configurationUUID;                //@synthesize configurationUUID=_configurationUUID - In the implementation block
@property (nonatomic,readonly) BOOL isBuiltIn;                            //@synthesize isBuiltIn=_isBuiltIn - In the implementation block
+(id)offConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)init;
-(NSString *)configurationName;
-(NSUUID *)configurationUUID;
-(BOOL)isBuiltIn;
-(id)initWithUUID:(id)arg1 andName:(id)arg2 isBuiltIn:(BOOL)arg3 ;
@end

