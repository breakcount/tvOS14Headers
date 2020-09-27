/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, WLKBasicContentMetadata, NSURL, NSString, NSDate;

@interface WLKContinuationMetadataBase : NSObject {

	BOOL _isRental;
	BOOL _isPurchase;
	NSDictionary* _dictionary;
	WLKBasicContentMetadata* _movieOrShowContent;
	NSURL* _contentTVAppDeeplinkURL;
	long long _contextEnum;
	NSString* _context;
	NSString* _localizedContext;
	NSDate* _timestamp;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionary;                            //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * movieOrShowContent;              //@synthesize movieOrShowContent=_movieOrShowContent - In the implementation block
@property (nonatomic,readonly) NSURL * contentTVAppDeeplinkURL;                           //@synthesize contentTVAppDeeplinkURL=_contentTVAppDeeplinkURL - In the implementation block
@property (nonatomic,readonly) long long contextEnum;                                     //@synthesize contextEnum=_contextEnum - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedContext;                          //@synthesize localizedContext=_localizedContext - In the implementation block
@property (nonatomic,readonly) BOOL isRental;                                             //@synthesize isRental=_isRental - In the implementation block
@property (nonatomic,readonly) BOOL isPurchase;                                           //@synthesize isPurchase=_isPurchase - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
+(void)add:(id)arg1 toCollection:(id)arg2 ;
+(void)remove:(id)arg1 fromCollection:(id)arg2 ;
+(long long)_contextForString:(id)arg1 ;
-(id)description;
-(id)init;
-(NSDictionary *)dictionary;
-(NSString *)context;
-(NSDate *)timestamp;
-(BOOL)isRental;
-(BOOL)isPurchase;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(WLKBasicContentMetadata *)movieOrShowContent;
-(id)_mergingIdentifier;
-(NSURL *)contentTVAppDeeplinkURL;
-(long long)contextEnum;
-(NSString *)localizedContext;
@end
