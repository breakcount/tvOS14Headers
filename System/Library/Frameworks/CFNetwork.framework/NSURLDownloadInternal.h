/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLAuthenticationChallenge, NSOperationQueue;

@interface NSURLDownloadInternal : NSObject {

	CFURLDownloadRef cfDownload;
	CFURLAuthChallengeRef currCFChallenge;
	NSURLAuthenticationChallenge* currNSChallenge;
	id delegate;
	BOOL downloadActive;
	NSOperationQueue* _targetQueue;

}
-(void)dealloc;
@end

