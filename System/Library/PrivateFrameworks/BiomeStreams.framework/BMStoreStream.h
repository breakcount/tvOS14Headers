/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BMSourceStream.h>
#import <libobjc.A.dylib/BMStream.h>

@class NSString, BMStoreConfig, BMStoreSource, BMStoreValidator, BMStreamsAccessClient;

@interface BMStoreStream : NSObject <BMSourceStream, BMStream> {

	NSString* _streamIdentifier;
	BMStoreConfig* _storeConfig;
	BMStoreSource* _source;
	BMStoreValidator* _validator;
	BOOL _isPublic;
	BMStreamsAccessClient* _accessClient;

}

@property (nonatomic,readonly) NSString * identifier; 
-(id)init;
-(NSString *)identifier;
-(id)source;
-(id)publisher;
-(id)_publisher;
-(id)validator;
-(id)initWithPublicStream:(long long)arg1 storeConfig:(id)arg2 ;
-(id)publisherFromStartTime:(double)arg1 ;
-(id)initWithStreamIdentifier:(id)arg1 storeConfig:(id)arg2 ;
-(id)initWithStreamIdentifier:(id)arg1 storeConfig:(id)arg2 isPublic:(BOOL)arg3 ;
-(void)pruneWithPredicateBlock:(/*^block*/id)arg1 ;
@end

