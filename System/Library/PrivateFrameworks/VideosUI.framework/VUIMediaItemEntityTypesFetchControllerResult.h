/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VUIMediaItemEntityTypesFetchResponse, VUIMediaItemEntityTypesFetchResponseChanges;

@interface VUIMediaItemEntityTypesFetchControllerResult : NSObject {

	long long _fetchReason;
	VUIMediaItemEntityTypesFetchResponse* _fetchResponse;
	VUIMediaItemEntityTypesFetchResponseChanges* _fetchChanges;

}

@property (assign,nonatomic) long long fetchReason;                                                   //@synthesize fetchReason=_fetchReason - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponse * fetchResponse;                    //@synthesize fetchResponse=_fetchResponse - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponseChanges * fetchChanges;              //@synthesize fetchChanges=_fetchChanges - In the implementation block
-(id)description;
-(id)init;
-(long long)fetchReason;
-(void)setFetchReason:(long long)arg1 ;
-(void)setFetchChanges:(VUIMediaItemEntityTypesFetchResponseChanges *)arg1 ;
-(VUIMediaItemEntityTypesFetchResponseChanges *)fetchChanges;
-(VUIMediaItemEntityTypesFetchResponse *)fetchResponse;
-(id)initWithFetchReason:(long long)arg1 fetchResponse:(id)arg2 ;
-(void)setFetchResponse:(VUIMediaItemEntityTypesFetchResponse *)arg1 ;
@end

