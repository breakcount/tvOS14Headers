/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaEntity, NSString;

@interface _MPMediaLibraryEntityChange : NSObject {

	MPMediaEntity* _entity;
	NSString* _anchor;
	long long _deletionType;

}

@property (nonatomic,readonly) MPMediaEntity * entity;              //@synthesize entity=_entity - In the implementation block
@property (nonatomic,copy,readonly) NSString * anchor;              //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) long long deletionType;              //@synthesize deletionType=_deletionType - In the implementation block
-(MPMediaEntity *)entity;
-(NSString *)anchor;
-(id)initWithEntity:(id)arg1 anchor:(id)arg2 deletionType:(long long)arg3 ;
-(long long)deletionType;
@end

