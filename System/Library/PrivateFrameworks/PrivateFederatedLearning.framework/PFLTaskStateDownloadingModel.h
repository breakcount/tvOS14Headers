/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PFLTaskState.h>

@class NSData, NSURLSessionDownloadTask;

@interface PFLTaskStateDownloadingModel : NSObject <PFLTaskState> {

	NSData* _resumeData;
	NSURLSessionDownloadTask* _downloadTask;

}

@property (nonatomic,retain) NSData * resumeData;                                  //@synthesize resumeData=_resumeData - In the implementation block
@property (nonatomic,retain) NSURLSessionDownloadTask * downloadTask;              //@synthesize downloadTask=_downloadTask - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)resumeData;
-(void)suspend;
-(unsigned long long)tag;
-(void)setResumeData:(NSData *)arg1 ;
-(void)resume:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURLSessionDownloadTask *)downloadTask;
-(void)setDownloadTask:(NSURLSessionDownloadTask *)arg1 ;
@end

