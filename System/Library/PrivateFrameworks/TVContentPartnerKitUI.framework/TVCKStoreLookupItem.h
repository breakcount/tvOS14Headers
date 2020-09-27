/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSSet, NSString, TVCKBookmark, NSDate;

@interface TVCKStoreLookupItem : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _ITunesStoreIdentifier;
	NSSet* _childrenIDs;
	NSSet* _childLookupItems;
	unsigned long long _itemKind;
	NSString* _seasonID;
	TVCKBookmark* _bookmark;
	NSDate* _releaseDate;
	double _duration;

}

@property (nonatomic,copy) NSNumber * ITunesStoreIdentifier;              //@synthesize ITunesStoreIdentifier=_ITunesStoreIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * childrenIDs;                           //@synthesize childrenIDs=_childrenIDs - In the implementation block
@property (nonatomic,copy) NSSet * childLookupItems;                      //@synthesize childLookupItems=_childLookupItems - In the implementation block
@property (assign,nonatomic) unsigned long long itemKind;                 //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,copy) NSString * seasonID;                           //@synthesize seasonID=_seasonID - In the implementation block
@property (nonatomic,copy) TVCKBookmark * bookmark;                       //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,copy) NSDate * releaseDate;                          //@synthesize releaseDate=_releaseDate - In the implementation block
@property (assign,nonatomic) double duration;                             //@synthesize duration=_duration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setITunesStoreIdentifier:(NSNumber *)arg1 ;
-(NSDate *)releaseDate;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(NSNumber *)ITunesStoreIdentifier;
-(unsigned long long)itemKind;
-(TVCKBookmark *)bookmark;
-(void)setBookmark:(TVCKBookmark *)arg1 ;
-(void)setItemKind:(unsigned long long)arg1 ;
-(NSSet *)childrenIDs;
-(void)setChildrenIDs:(NSSet *)arg1 ;
-(NSSet *)childLookupItems;
-(void)setChildLookupItems:(NSSet *)arg1 ;
-(NSString *)seasonID;
-(void)setSeasonID:(NSString *)arg1 ;
@end

