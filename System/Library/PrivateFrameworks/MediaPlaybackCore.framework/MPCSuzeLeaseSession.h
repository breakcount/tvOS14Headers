/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICSuzeLeaseSession;

@interface MPCSuzeLeaseSession : NSObject {

	ICSuzeLeaseSession* _icSuzeLeaseSession;

}

@property (nonatomic,readonly) ICSuzeLeaseSession * icSuzeLeaseSession;              //@synthesize icSuzeLeaseSession=_icSuzeLeaseSession - In the implementation block
-(void)beginAutomaticallyRefreshingLease;
-(void)endAutomaticallyRefreshingLease;
-(ICSuzeLeaseSession *)icSuzeLeaseSession;
-(id)initWithICSuzeLeaseSession:(id)arg1 ;
@end

