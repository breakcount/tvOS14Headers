/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSWorkspaceDelegate;
@class FBSSerialQueue;

@interface FBSWorkspaceInitializationOptions : NSObject {

	BOOL _startsInactive;
	id<FBSWorkspaceDelegate> _delegate;
	FBSSerialQueue* _callOutQueue;

}

@property (assign,setter=_setStartsInactive:,nonatomic) BOOL _startsInactive;              //@synthesize startsInactive=_startsInactive - In the implementation block
@property (nonatomic,readonly) id<FBSWorkspaceDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBSSerialQueue * callOutQueue;                                //@synthesize callOutQueue=_callOutQueue - In the implementation block
+(id)optionsWithDelegate:(id)arg1 ;
-(id)init;
-(id<FBSWorkspaceDelegate>)delegate;
-(void)setCallOutQueue:(FBSSerialQueue *)arg1 ;
-(void)_setStartsInactive:(BOOL)arg1 ;
-(FBSSerialQueue *)callOutQueue;
-(BOOL)_startsInactive;
-(id)_initWithDelegate:(id)arg1 ;
@end

