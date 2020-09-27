/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTrafficDevice/ATStoreDownloadOperation.h>

@class ICURLSession, ICURLRequest;

@interface ATPodcastEpisodeDownloadOperation : ATStoreDownloadOperation {

	ICURLSession* _session;
	ICURLRequest* _request;

}
-(void)cancel;
-(void)execute;
-(id)_urlSession;
-(void)finishWithError:(id)arg1 ;
-(id)_podcastsAppBundleID;
@end

