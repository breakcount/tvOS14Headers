/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSURLRequest;

@interface MPStoreModelRequestConfiguration : NSObject {

	NSArray* _URLRequests;
	NSArray* _requestedItemIdentifiers;
	unsigned long long _itemMetadataRequestReason;
	long long _type;

}

@property (nonatomic,copy,readonly) NSURLRequest * URLRequest; 
@property (nonatomic,copy,readonly) NSArray * URLRequests;                                //@synthesize URLRequests=_URLRequests - In the implementation block
@property (nonatomic,readonly) NSArray * requestedItemIdentifiers;                        //@synthesize requestedItemIdentifiers=_requestedItemIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long itemMetadataRequestReason;              //@synthesize itemMetadataRequestReason=_itemMetadataRequestReason - In the implementation block
@property (nonatomic,readonly) long long type;                                            //@synthesize type=_type - In the implementation block
-(long long)type;
-(id)initWithURLRequest:(id)arg1 ;
-(NSURLRequest *)URLRequest;
-(id)initWithURLRequests:(id)arg1 ;
-(id)initWithRequestedItemIdentifiers:(id)arg1 reason:(unsigned long long)arg2 ;
-(NSArray *)URLRequests;
-(NSArray *)requestedItemIdentifiers;
-(unsigned long long)itemMetadataRequestReason;
@end

