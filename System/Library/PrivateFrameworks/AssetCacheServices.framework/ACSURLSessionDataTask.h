/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssetCacheServices.framework/AssetCacheServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetCacheServices/ACSURLSessionTask.h>

@interface ACSURLSessionDataTask : ACSURLSessionTask {

	/*^block*/id __clientDataCompletionHandler;

}

@property (copy) id _clientDataCompletionHandler;              //@synthesize _clientDataCompletionHandler=__clientDataCompletionHandler - In the implementation block
-(id)initWithNSURLDataTaskCreator:(/*^block*/id)arg1 initialRequest:(id)arg2 forSession:(id)arg3 ;
-(BOOL)_isUpload;
-(id)_clientDataCompletionHandler;
-(void)set_clientDataCompletionHandler:(id)arg1 ;
@end

