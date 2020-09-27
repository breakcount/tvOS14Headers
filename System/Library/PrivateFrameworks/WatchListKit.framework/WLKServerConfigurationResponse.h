/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WatchListKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSDate, NSString, NSURL, NSNumber;

@interface WLKServerConfigurationResponse : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _responseDictionary;
	NSDate* _expirationDate;
	unsigned long long _environmentHash;
	NSDictionary* _endpointsDictionary;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;                                  //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long environmentHash;                                 //@synthesize environmentHash=_environmentHash - In the implementation block
@property (nonatomic,readonly) NSDictionary * endpointsDictionary;                                 //@synthesize endpointsDictionary=_endpointsDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * requiredRequestKeyValuePairsDictionary; 
@property (nonatomic,readonly) NSString * vppaStatusString; 
@property (nonatomic,readonly) long long vppaStatus; 
@property (nonatomic,readonly) NSURL * playActivityURL; 
@property (nonatomic,readonly) NSDictionary * features; 
@property (nonatomic,copy,readonly) NSString * utsk; 
@property (getter=isActiveUser,nonatomic,readonly) BOOL activeUser; 
@property (nonatomic,copy,readonly) NSNumber * vppaSessionDurationInMillis; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)expirationDate;
-(id)dictionaryRepresentation;
-(NSDictionary *)features;
-(NSDictionary *)responseDictionary;
-(id)initWithServerResponseDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3 ;
-(NSDictionary *)requiredRequestKeyValuePairsDictionary;
-(unsigned long long)environmentHash;
-(NSString *)vppaStatusString;
-(long long)vppaStatus;
-(NSURL *)playActivityURL;
-(NSString *)utsk;
-(BOOL)isActiveUser;
-(NSNumber *)vppaSessionDurationInMillis;
-(BOOL)isValidIgnoringExpiration;
-(id)utsc;
-(NSDictionary *)endpointsDictionary;
@end

