/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SPSearchResultMarker;

@interface SPAdvertisementCacheSearchCriteria : NSObject <NSSecureCoding> {

	SPSearchResultMarker* _searchResultMarker;

}

@property (nonatomic,retain) SPSearchResultMarker * searchResultMarker;              //@synthesize searchResultMarker=_searchResultMarker - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSearchResultMarker:(SPSearchResultMarker *)arg1 ;
-(SPSearchResultMarker *)searchResultMarker;
@end

