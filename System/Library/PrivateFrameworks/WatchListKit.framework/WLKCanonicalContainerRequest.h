/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKRequest.h>

@class NSString;

@interface WLKCanonicalContainerRequest : WLKRequest {

	NSString* _canonicalID;

}

@property (nonatomic,copy,readonly) NSString * canonicalID;              //@synthesize canonicalID=_canonicalID - In the implementation block
-(NSString *)canonicalID;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCanonicalID:(id)arg1 ;
@end

