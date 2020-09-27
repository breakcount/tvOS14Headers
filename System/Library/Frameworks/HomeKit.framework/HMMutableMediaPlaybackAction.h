/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMMediaPlaybackAction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSNumber, MPPlaybackArchive;

@interface HMMutableMediaPlaybackAction : HMMediaPlaybackAction <NSCopying>

@property (nonatomic,copy) NSSet * mediaProfiles; 
@property (assign,nonatomic) long long state; 
@property (nonatomic,retain) NSNumber * volume; 
@property (nonatomic,retain) MPPlaybackArchive * playbackArchive; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)setVolume:(NSNumber *)arg1 ;
-(void)setMediaProfiles:(NSSet *)arg1 ;
-(void)setPlaybackArchive:(MPPlaybackArchive *)arg1 ;
@end

