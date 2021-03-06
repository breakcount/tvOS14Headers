/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/BPSPublisher.h>

@class BPSPublisher;

@interface BPSFilter : BPSPublisher {

	/*^block*/id _isIncluded;
	BPSPublisher* _upstream;

}

@property (nonatomic,retain) BPSPublisher * upstream;              //@synthesize upstream=_upstream - In the implementation block
@property (nonatomic,readonly) id isIncluded;                      //@synthesize isIncluded=_isIncluded - In the implementation block
-(id)init;
-(void)subscribe:(id)arg1 ;
-(BPSPublisher *)upstream;
-(id)isIncluded;
-(id)initWithUpstream:(id)arg1 isIncluded:(/*^block*/id)arg2 ;
-(void)setUpstream:(BPSPublisher *)arg1 ;
@end

