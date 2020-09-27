/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BPSBiomeStorePublisher;

@interface BMStoreValidator : NSObject {

	NSString* _identifier;
	BPSBiomeStorePublisher* _publisher;

}
-(id)init;
-(id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2 ;
-(int)isChronologicallyValidWithPublisher:(id)arg1 shouldContinue:(/*^block*/id)arg2 ;
-(int)isChronologicallyValidFromTimestamp:(double)arg1 ;
-(int)isChronologicallyValidFromBookmark:(id)arg1 shouldContinue:(/*^block*/id)arg2 ;
-(int)isChronologicallyValidFromTimestamp:(double)arg1 shouldContinue:(/*^block*/id)arg2 ;
@end

