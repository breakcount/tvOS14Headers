/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSString;

@interface HMDHAPMetadataCategory : HMFObject {

	NSNumber* _identifier;
	NSString* _uuidStr;
	NSString* _name;
	NSString* _catDescription;

}

@property (nonatomic,retain) NSNumber * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * uuidStr;                     //@synthesize uuidStr=_uuidStr - In the implementation block
@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * catDescription;              //@synthesize catDescription=_catDescription - In the implementation block
-(NSString *)name;
-(id)description;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)identifier;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(NSString *)uuidStr;
-(void)setUuidStr:(NSString *)arg1 ;
-(NSString *)catDescription;
-(id)initWithIdentifier:(id)arg1 uuid:(id)arg2 name:(id)arg3 description:(id)arg4 ;
-(void)setCatDescription:(NSString *)arg1 ;
@end

