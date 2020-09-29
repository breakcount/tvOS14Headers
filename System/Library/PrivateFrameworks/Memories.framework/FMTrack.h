/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:27 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSArray, FMMixParameters;

@interface FMTrack : NSObject {

	NSArray* _clips;
	FMMixParameters* _mixParameters;

}

@property (nonatomic,retain) NSArray * clips;                              //@synthesize clips=_clips - In the implementation block
@property (nonatomic,retain) FMMixParameters * mixParameters;              //@synthesize mixParameters=_mixParameters - In the implementation block
-(id)description;
-(void)setClips:(NSArray *)arg1 ;
-(NSArray *)clips;
-(FMMixParameters *)mixParameters;
-(id)initWithClips:(id)arg1 mixParameters:(id)arg2 ;
-(void)setMixParameters:(FMMixParameters *)arg1 ;
@end
