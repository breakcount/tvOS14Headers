/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/BPSPublisher.h>

@class BPSPublisher;

@interface BPSFlatMap : BPSPublisher {

	long long _maxPublishers;
	/*^block*/id _transform;
	BPSPublisher* _upstream;

}

@property (nonatomic,readonly) long long maxPublishers;              //@synthesize maxPublishers=_maxPublishers - In the implementation block
@property (nonatomic,readonly) id transform;                         //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) BPSPublisher * upstream;              //@synthesize upstream=_upstream - In the implementation block
-(id)transform;
-(void)subscribe:(id)arg1 ;
-(BPSPublisher *)upstream;
-(long long)maxPublishers;
-(id)initWithUpstream:(id)arg1 maxPublishers:(long long)arg2 transform:(/*^block*/id)arg3 ;
@end
