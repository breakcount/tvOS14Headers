/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCopying, NSObject;
@interface ASKResourceRequest : NSObject {

	id<NSObject><NSCopying> _requestKey;
	id<NSObject> _cacheKey;

}

@property (nonatomic,copy) id<NSObject><NSCopying> requestKey;               //@synthesize requestKey=_requestKey - In the implementation block
@property (nonatomic,retain) id<NSObject> cacheKey;                          //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,readonly) unsigned long long cacheOptions; 
+(id)makeUniqueKey;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id<NSObject>)cacheKey;
-(void)setCacheKey:(id<NSObject>)arg1 ;
-(id<NSObject><NSCopying>)requestKey;
-(id)makeLoadOperation;
-(unsigned long long)cacheOptions;
-(void)didLoadResource:(id)arg1 error:(id)arg2 ;
-(void)setRequestKey:(id<NSObject><NSCopying>)arg1 ;
@end
