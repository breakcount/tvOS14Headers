/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, IDSOpportunisticOptions, NSMutableDictionary;

@interface IDSOpportunisticData : NSObject <NSSecureCoding> {

	NSData* _data;
	NSString* _identifier;
	NSString* _serviceName;
	NSString* _accountUniqueID;
	IDSOpportunisticOptions* _options;
	NSMutableDictionary* _sendCount;

}

@property (nonatomic,retain) NSMutableDictionary * sendCount;                //@synthesize sendCount=_sendCount - In the implementation block
@property (nonatomic,retain) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                         //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSString * accountUniqueID;                     //@synthesize accountUniqueID=_accountUniqueID - In the implementation block
@property (nonatomic,retain) IDSOpportunisticOptions * options;              //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copy;
-(id)description;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(IDSOpportunisticOptions *)options;
-(void)setOptions:(IDSOpportunisticOptions *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSString *)serviceName;
-(BOOL)isInvalid;
-(void)setServiceName:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 identifier:(id)arg2 serviceName:(id)arg3 accountUniqueID:(id)arg4 options:(id)arg5 sendCount:(id)arg6 ;
-(NSString *)accountUniqueID;
-(NSMutableDictionary *)sendCount;
-(id)initWithData:(id)arg1 identifier:(id)arg2 serviceName:(id)arg3 accountUniqueID:(id)arg4 options:(id)arg5 ;
-(void)markInvalid;
-(BOOL)shouldSendToDestination:(id)arg1 ;
-(void)incrementSendCountForDestination:(id)arg1 ;
-(long long)sendCountForURI:(id)arg1 ;
-(void)setAccountUniqueID:(NSString *)arg1 ;
-(void)setSendCount:(NSMutableDictionary *)arg1 ;
@end

