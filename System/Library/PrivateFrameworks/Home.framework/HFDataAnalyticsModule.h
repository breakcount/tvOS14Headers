/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemModule.h>

@protocol HFMediaProfileContainer;
@class HFDataAnalyticsLogItemProvider;

@interface HFDataAnalyticsModule : HFItemModule {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	HFDataAnalyticsLogItemProvider* _logItemProvider;

}

@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,readonly) HFDataAnalyticsLogItemProvider * logItemProvider;               //@synthesize logItemProvider=_logItemProvider - In the implementation block
-(id)itemProviders;
-(HFDataAnalyticsLogItemProvider *)logItemProvider;
-(id)initWithItemUpdater:(id)arg1 mediaProfileContainer:(id)arg2 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
@end

