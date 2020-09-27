/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKPlayActivityDecorateEBSOperation : WLKUTSNetworkRequestOperation {

	NSString* _channelID;
	NSString* _externalContentID;

}

@property (nonatomic,copy,readonly) NSString * channelID;                      //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalContentID;              //@synthesize externalContentID=_externalContentID - In the implementation block
-(NSString *)channelID;
-(id)initWithChannelID:(id)arg1 externalContentID:(id)arg2 ;
-(NSString *)externalContentID;
@end

