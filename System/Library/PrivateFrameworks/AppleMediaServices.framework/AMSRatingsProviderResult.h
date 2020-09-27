/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AMSRatingsProviderResult : NSObject {

	NSArray* _ratingsStoreFronts;

}

@property (nonatomic,readonly) NSArray * ratingsStoreFronts;              //@synthesize ratingsStoreFronts=_ratingsStoreFronts - In the implementation block
-(id)initWithDictionaries:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(id)_mapRatingsDictionaries:(id)arg1 withMediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(unsigned long long)_ratingInfoMediaTypeForTaskMediaType:(unsigned long long)arg1 ;
-(id)initWithURLResult:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(id)initWithData:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(NSArray *)ratingsStoreFronts;
@end

