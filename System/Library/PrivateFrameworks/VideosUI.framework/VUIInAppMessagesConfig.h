/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface VUIInAppMessagesConfig : NSObject {

	double _minimumPresentationIntervalNormal;
	double _minimumPresentationIntervalRestricted;
	double _pageEventDelay;
	NSArray* _whitelistedFields;

}

@property (assign,nonatomic) double minimumPresentationIntervalNormal;                  //@synthesize minimumPresentationIntervalNormal=_minimumPresentationIntervalNormal - In the implementation block
@property (assign,nonatomic) double minimumPresentationIntervalRestricted;              //@synthesize minimumPresentationIntervalRestricted=_minimumPresentationIntervalRestricted - In the implementation block
@property (assign,nonatomic) double pageEventDelay;                                     //@synthesize pageEventDelay=_pageEventDelay - In the implementation block
@property (nonatomic,retain) NSArray * whitelistedFields;                               //@synthesize whitelistedFields=_whitelistedFields - In the implementation block
-(id)init;
-(void)setWhitelistedFields:(NSArray *)arg1 ;
-(NSArray *)whitelistedFields;
-(double)minimumPresentationIntervalNormal;
-(void)setMinimumPresentationIntervalNormal:(double)arg1 ;
-(double)minimumPresentationIntervalRestricted;
-(void)setMinimumPresentationIntervalRestricted:(double)arg1 ;
-(double)pageEventDelay;
-(void)setPageEventDelay:(double)arg1 ;
@end

