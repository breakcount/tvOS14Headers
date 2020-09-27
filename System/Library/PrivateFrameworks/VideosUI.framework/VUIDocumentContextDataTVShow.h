/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIDocumentContextData.h>

@class NSString;

@interface VUIDocumentContextDataTVShow : VUIDocumentContextData {

	NSString* _showID;
	NSString* _episodeID;

}

@property (nonatomic,copy,readonly) NSString * showID;                 //@synthesize showID=_showID - In the implementation block
@property (nonatomic,copy,readonly) NSString * episodeID;              //@synthesize episodeID=_episodeID - In the implementation block
-(id)jsonData;
-(NSString *)showID;
-(id)initWithShowID:(id)arg1 episodeID:(id)arg2 ;
-(NSString *)episodeID;
@end
