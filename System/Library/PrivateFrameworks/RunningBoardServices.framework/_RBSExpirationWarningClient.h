/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RBSInvalidatable.h>

@class NSString;

@interface _RBSExpirationWarningClient : NSObject <RBSInvalidatable> {

	/*^block*/id _block;
	/*^block*/id _invalidationBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
@end

