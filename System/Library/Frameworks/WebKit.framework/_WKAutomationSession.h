/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString, _WKAutomationSessionConfiguration;

@interface _WKAutomationSession : NSObject <WKObject> {

	ObjectStorage<WebKit::WebAutomationSession> _session;
	RetainPtr<_WKAutomationSessionConfiguration>* _configuration;
	WeakObjCPtr<id<_WKAutomationSessionDelegate> > _delegate;

}

@property (nonatomic,copy) NSString * sessionIdentifier; 
@property (nonatomic,copy,readonly) _WKAutomationSessionConfiguration * configuration; 
@property (assign,nonatomic,__weak) id<_WKAutomationSessionDelegate> delegate; 
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (getter=isSimulatingUserInteraction,nonatomic,readonly) BOOL simulatingUserInteraction; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<_WKAutomationSessionDelegate>)delegate;
-(void)setDelegate:(id<_WKAutomationSessionDelegate>)arg1 ;
-(_WKAutomationSessionConfiguration *)configuration;
-(void)terminate;
-(id)initWithConfiguration:(id)arg1 ;
-(NSString *)sessionIdentifier;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(BOOL)isPaired;
-(Object*)_apiObject;
-(BOOL)isSimulatingUserInteraction;
@end

