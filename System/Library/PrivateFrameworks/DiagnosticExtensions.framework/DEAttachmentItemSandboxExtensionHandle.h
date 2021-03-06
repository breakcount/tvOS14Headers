/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface DEAttachmentItemSandboxExtensionHandle : NSObject {

	BOOL _didInit;
	NSURL* _itemURL;
	long long __handle;

}

@property (assign,nonatomic) BOOL didInit;                 //@synthesize didInit=_didInit - In the implementation block
@property (readonly) long long _handle;                    //@synthesize _handle=__handle - In the implementation block
@property (nonatomic,retain) NSURL * itemURL;              //@synthesize itemURL=_itemURL - In the implementation block
-(void)dealloc;
-(long long)_handle;
-(NSURL *)itemURL;
-(void)setItemURL:(NSURL *)arg1 ;
-(id)initWithSandboxExtensionToken:(id)arg1 itemURL:(id)arg2 errorOut:(id*)arg3 ;
-(BOOL)didInit;
-(void)setDidInit:(BOOL)arg1 ;
@end

