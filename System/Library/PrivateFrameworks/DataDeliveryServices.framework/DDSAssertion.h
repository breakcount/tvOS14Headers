/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDeliveryServices/DataDeliveryServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, DDSAssetQuery, NSMutableSet, DDSAssetPolicy, NSSet;

@interface DDSAssertion : NSObject <NSSecureCoding, NSCopying> {

	NSString* _description;
	NSDate* _lastUpdated;
	DDSAssetQuery* _query;
	NSMutableSet* _descriptors;

}

@property (nonatomic,retain) NSMutableSet * descriptors;                  //@synthesize descriptors=_descriptors - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                        //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,readonly) DDSAssetQuery * query;                     //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) DDSAssetPolicy * policy; 
@property (nonatomic,readonly) NSSet * assertionIdentifiers; 
@property (nonatomic,readonly) NSSet * clientIdentifiers; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DDSAssetQuery *)query;
-(NSMutableSet *)descriptors;
-(void)setDescriptors:(NSMutableSet *)arg1 ;
-(DDSAssetPolicy *)policy;
-(id)initWithQuery:(id)arg1 ;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSDate *)lastUpdated;
-(NSSet *)clientIdentifiers;
-(void)invalidateDescription;
-(id)assertionIDsForClientID:(id)arg1 ;
-(BOOL)isEqualToAssertion:(id)arg1 ;
-(void)addDescriptorWithAssertionID:(id)arg1 clientID:(id)arg2 policy:(id)arg3 ;
-(NSSet *)assertionIdentifiers;
-(void)removeDescriptorWithClientID:(id)arg1 ;
-(void)removeDescriptorWithAssertionID:(id)arg1 ;
@end

