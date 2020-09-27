/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSArray, NSNumber, NSURL;

@interface AMSLookupItem : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _itemDictionary;

}

@property (nonatomic,copy,readonly) NSString * artistName; 
@property (nonatomic,copy,readonly) NSArray * artwork; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSArray * categoryNames; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * itemKind; 
@property (nonatomic,copy,readonly) NSNumber * iTunesStoreIdentifier; 
@property (nonatomic,copy,readonly) NSString * offerName; 
@property (nonatomic,copy,readonly) NSArray * offers; 
@property (getter=isPOIBased,nonatomic,readonly) BOOL POIBased; 
@property (nonatomic,copy,readonly) NSURL * productPageURL; 
@property (nonatomic,readonly) long long numberOfUserRatings; 
@property (nonatomic,readonly) float userRating; 
@property (nonatomic,readonly) long long numberOfUserRatingsForCurrentVersion; 
@property (nonatomic,readonly) float userRatingForCurrentVersion; 
@property (nonatomic,readonly) NSDictionary * itemDictionary;                               //@synthesize itemDictionary=_itemDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)displayName;
-(NSArray *)artwork;
-(NSArray *)offers;
-(NSString *)artistName;
-(NSNumber *)iTunesStoreIdentifier;
-(NSString *)itemKind;
-(long long)numberOfUserRatings;
-(NSDictionary *)itemDictionary;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSArray *)categoryNames;
-(BOOL)isPOIBased;
-(long long)numberOfUserRatingsForCurrentVersion;
-(NSURL *)productPageURL;
-(float)userRating;
-(float)userRatingForCurrentVersion;
-(NSString *)offerName;
@end

