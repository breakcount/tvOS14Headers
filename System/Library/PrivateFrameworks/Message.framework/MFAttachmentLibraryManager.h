/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFAttachmentComposeManager.h>

@interface MFAttachmentLibraryManager : MFAttachmentComposeManager
-(void)dealloc;
-(void)removeProviderForBaseURL:(id)arg1 ;
-(id)_dataProviderForAttachmentURL:(id)arg1 error:(id*)arg2 ;
-(void)_messageAttachmentStorageLocationsDidChangeNotification:(id)arg1 ;
-(id)initWithPrimaryLibrary:(id)arg1 ;
-(id)attachmentsForMessage:(id)arg1 withSchemes:(id)arg2 ;
@end

