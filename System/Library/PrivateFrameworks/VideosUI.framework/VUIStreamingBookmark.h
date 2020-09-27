/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSDate;

@interface VUIStreamingBookmark : NSObject {

	NSNumber* _resumeTime;
	NSDate* _bookmarkTimestamp;

}

@property (nonatomic,retain) NSNumber * resumeTime;                   //@synthesize resumeTime=_resumeTime - In the implementation block
@property (nonatomic,retain) NSDate * bookmarkTimestamp;              //@synthesize bookmarkTimestamp=_bookmarkTimestamp - In the implementation block
-(void)setResumeTime:(NSNumber *)arg1 ;
-(NSNumber *)resumeTime;
-(void)setBookmarkTimestamp:(NSDate *)arg1 ;
-(NSDate *)bookmarkTimestamp;
-(id)initWithResumeTime:(id)arg1 timeStamp:(id)arg2 ;
@end

