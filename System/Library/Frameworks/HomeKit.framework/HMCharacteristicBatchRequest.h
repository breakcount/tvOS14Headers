/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface HMCharacteristicBatchRequest : NSObject {

	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;
	NSArray* _requests;

}

@property (nonatomic,retain) NSArray * requests;              //@synthesize requests=_requests - In the implementation block
@property (nonatomic,copy) id progressHandler;                //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(BOOL)validateRequestTypes:(id)arg1 requestClass:(Class)arg2 ;
+(id)characteristicBatchRequestWithReadRequests:(id)arg1 ;
+(id)characteristicBatchRequestWithWriteRequests:(id)arg1 ;
-(NSArray *)requests;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setRequests:(NSArray *)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(id)initWithRequests:(id)arg1 requestClass:(Class)arg2 ;
@end

