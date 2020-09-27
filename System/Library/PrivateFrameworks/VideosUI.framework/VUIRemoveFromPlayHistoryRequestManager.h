/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface VUIRemoveFromPlayHistoryRequestManager : NSObject {

	NSMutableDictionary* _ongoingDeleteIDOperationDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * ongoingDeleteIDOperationDictionary;              //@synthesize ongoingDeleteIDOperationDictionary=_ongoingDeleteIDOperationDictionary - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(NSMutableDictionary *)ongoingDeleteIDOperationDictionary;
-(void)sendRequestForDeleteID:(id)arg1 canonicalID:(id)arg2 isContinueWatching:(BOOL)arg3 ;
-(void)setOngoingDeleteIDOperationDictionary:(NSMutableDictionary *)arg1 ;
@end

