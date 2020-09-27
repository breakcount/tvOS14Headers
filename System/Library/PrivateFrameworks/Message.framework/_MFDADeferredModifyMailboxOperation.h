/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOfflineCacheOperation.h>
#import <libobjc.A.dylib/MFDADeferredFolderChangeOperation.h>

@class NSString;

@interface _MFDADeferredModifyMailboxOperation : MFOfflineCacheOperation <MFDADeferredFolderChangeOperation> {

	NSString* _folderID;
	NSString* _newParentFolderID;
	NSString* _newDisplayName;

}
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)performWithAccount:(id)arg1 offlineCache:(id)arg2 ;
-(id)folderChangeResult;
-(void)applyToFolderMap:(id)arg1 ;
-(id)initWithFolderID:(id)arg1 newParentFolderID:(id)arg2 newDisplayName:(id)arg3 ;
@end

