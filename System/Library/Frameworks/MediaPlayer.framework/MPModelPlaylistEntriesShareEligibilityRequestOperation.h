/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelPlaylistEntriesShareEligibilityRequest;

@interface MPModelPlaylistEntriesShareEligibilityRequestOperation : MPAsyncOperation {

	MPModelPlaylistEntriesShareEligibilityRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPModelPlaylistEntriesShareEligibilityRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                   //@synthesize responseHandler=_responseHandler - In the implementation block
-(MPModelPlaylistEntriesShareEligibilityRequest *)request;
-(void)execute;
-(void)setRequest:(MPModelPlaylistEntriesShareEligibilityRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
@end

