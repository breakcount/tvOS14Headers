/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, DEExtensionHostContext, NSExtension, NSRecursiveLock;

@interface DEExtension : NSObject {

	BOOL _isLoggingEnabled;
	BOOL _allowUserAttachmentSelection;
	NSString* _attachmentsName;
	NSString* _identifier;
	DEExtensionHostContext* _context;
	NSString* _loggingConsent;
	NSExtension* _extension;
	NSRecursiveLock* _extensionHostLoadingLock;

}

@property (nonatomic,retain) NSExtension * extension;                        //@synthesize extension=_extension - In the implementation block
@property (retain) NSRecursiveLock * extensionHostLoadingLock;               //@synthesize extensionHostLoadingLock=_extensionHostLoadingLock - In the implementation block
@property (nonatomic,retain) NSString * attachmentsName;                     //@synthesize attachmentsName=_attachmentsName - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) DEExtensionHostContext * context;               //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL isLoggingEnabled;                          //@synthesize isLoggingEnabled=_isLoggingEnabled - In the implementation block
@property (nonatomic,retain) NSString * loggingConsent;                      //@synthesize loggingConsent=_loggingConsent - In the implementation block
@property (assign,nonatomic) BOOL allowUserAttachmentSelection;              //@synthesize allowUserAttachmentSelection=_allowUserAttachmentSelection - In the implementation block
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(DEExtensionHostContext *)context;
-(void)setContext:(DEExtensionHostContext *)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(BOOL)checkAndTeardown;
-(void)attachmentListWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isLoggingEnabled;
-(NSRecursiveLock *)extensionHostLoadingLock;
-(void)setExtensionHostLoadingLock:(NSRecursiveLock *)arg1 ;
-(void)createExtensionHostContextCompletion:(/*^block*/id)arg1 ;
-(void)endUsingExtension;
-(void)performWithHostContext:(/*^block*/id)arg1 ;
-(void)setupWithParameters:(id)arg1 session:(id)arg2 expirationDate:(id)arg3 ;
-(Class)extensionTrackerClass;
-(id)initWithNSExtension:(id)arg1 ;
-(void)attachmentsForParameters:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(void)setupWithParameters:(id)arg1 session:(id)arg2 ;
-(void)teardownWithParameters:(id)arg1 session:(id)arg2 ;
-(NSString *)attachmentsName;
-(void)setAttachmentsName:(NSString *)arg1 ;
-(void)setIsLoggingEnabled:(BOOL)arg1 ;
-(NSString *)loggingConsent;
-(void)setLoggingConsent:(NSString *)arg1 ;
-(BOOL)allowUserAttachmentSelection;
-(void)setAllowUserAttachmentSelection:(BOOL)arg1 ;
@end

