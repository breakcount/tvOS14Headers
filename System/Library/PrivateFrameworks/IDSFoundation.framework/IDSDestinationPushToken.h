/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSDestination.h>

@class NSString, NSData;

@interface IDSDestinationPushToken : IDSDestination {

	NSString* _alias;
	NSData* _pushToken;

}

@property (nonatomic,readonly) NSString * alias;                //@synthesize alias=_alias - In the implementation block
@property (nonatomic,readonly) NSData * pushToken;              //@synthesize pushToken=_pushToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)pushToken;
-(NSString *)alias;
-(id)groupID;
-(id)destinationURIs;
-(id)initWithAlias:(id)arg1 pushToken:(id)arg2 ;
@end

