/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSManager;

@interface IMDNDList : NSObject {

	NPSManager* _syncManager;

}

@property (nonatomic,retain) NPSManager * syncManager;              //@synthesize syncManager=_syncManager - In the implementation block
+(id)sharedList;
-(id)init;
-(void)dealloc;
-(NPSManager *)syncManager;
-(id)unmuteDateForChat:(id)arg1 ;
-(id)unmuteDateForIdentifier:(id)arg1 ;
-(id)groupHashForHandleIDs:(id)arg1 ;
-(id)groupHashForChat:(id)arg1 ;
-(id)currentList;
-(void)muteChat:(id)arg1 untilDate:(id)arg2 syncToPairedDevice:(BOOL)arg3 ;
-(void)muteChat:(id)arg1 usingIdentifier:(id)arg2 untilDate:(id)arg3 syncToPairedDevice:(BOOL)arg4 ;
-(void)syncToPairedDeviceIncludingVersion:(BOOL)arg1 ;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(BOOL)isMutedChat:(id)arg1 ;
-(BOOL)isMutedChatIdentifier:(id)arg1 handleIDs:(id)arg2 style:(unsigned char)arg3 isSMS:(BOOL)arg4 ;
-(void)muteChat:(id)arg1 untilDate:(id)arg2 ;
-(void)_handleDNDListChanged;
@end

