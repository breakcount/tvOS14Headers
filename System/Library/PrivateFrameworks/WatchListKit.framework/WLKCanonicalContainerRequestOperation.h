/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKCanonicalPlayablesRequestOperation.h>

@class WLKCanonicalContainerResponse;

@interface WLKCanonicalContainerRequestOperation : WLKCanonicalPlayablesRequestOperation {

	WLKCanonicalContainerResponse* _containerResponse;

}

@property (nonatomic,readonly) WLKCanonicalContainerResponse * containerResponse;              //@synthesize containerResponse=_containerResponse - In the implementation block
-(void)processResponse;
-(WLKCanonicalContainerResponse *)containerResponse;
@end

