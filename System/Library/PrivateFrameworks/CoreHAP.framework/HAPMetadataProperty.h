/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber;

@interface HAPMetadataProperty : HMFObject {

	NSString* _propertyDescription;
	NSString* _propertyType;
	NSNumber* _bitPosition;

}

@property (nonatomic,retain) NSString * propertyType;              //@synthesize propertyType=_propertyType - In the implementation block
@property (nonatomic,retain) NSNumber * bitPosition;               //@synthesize bitPosition=_bitPosition - In the implementation block
@property (copy) NSString * propertyDescription;                   //@synthesize propertyDescription=_propertyDescription - In the implementation block
+(id)init:(id)arg1 withDictionary:(id)arg2 ;
-(id)description;
-(void)dump;
-(NSString *)propertyDescription;
-(NSString *)propertyType;
-(void)setPropertyDescription:(NSString *)arg1 ;
-(void)setPropertyType:(NSString *)arg1 ;
-(id)generateDictionary;
-(id)initWithType:(id)arg1 bitPosition:(id)arg2 description:(id)arg3 ;
-(NSNumber *)bitPosition;
-(void)setBitPosition:(NSNumber *)arg1 ;
@end

