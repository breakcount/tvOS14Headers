/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface BBDismissalItem : NSObject {

	unsigned long long _feeds;
	NSDate* _expiration;

}

@property (nonatomic,readonly) unsigned long long feeds;              //@synthesize feeds=_feeds - In the implementation block
@property (nonatomic,readonly) NSDate * expiration;                   //@synthesize expiration=_expiration - In the implementation block
-(id)description;
-(BOOL)hasExpired;
-(NSDate *)expiration;
-(id)initWithFeeds:(unsigned long long)arg1 ;
-(void)addFeeds:(unsigned long long)arg1 ;
-(unsigned long long)feeds;
@end

