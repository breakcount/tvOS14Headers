/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VUIAppDocumentUpdateEventDescriptor : NSObject <NSCopying> {

	BOOL _animated;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL animated;                        //@synthesize animated=_animated - In the implementation block
+(id)entitlements;
+(id)settings;
+(id)restrictions;
+(id)purchases;
+(id)favorites;
+(id)preferredVideoFormat;
+(id)accountChanged;
+(id)utsk;
+(id)appDidBecomeActive;
+(id)playActivity;
+(id)postPlay;
+(id)upNext;
+(id)removeFromPlayHistory;
+(id)playHistoryUpdated;
+(id)clearPlayHistory;
+(id)appRefresh;
+(id)locationAuthorizationChanged;
+(id)locationRetrieved;
+(id)iamMessageReceived;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)initWithEventType:(unsigned long long)arg1 ;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
@end

