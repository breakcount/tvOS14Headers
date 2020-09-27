/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/AFDictationDelegate.h>

@protocol WFDictateTextActionUserInterface;
@class AFDictationConnection, NSString;

@interface WFDictateTextAction : WFAction <AFDictationDelegate> {

	id<WFDictateTextActionUserInterface> _actionUserInterface;
	AFDictationConnection* _dictationConnection;
	NSString* _latestTranscription;

}

@property (nonatomic,retain) id<WFDictateTextActionUserInterface> actionUserInterface;              //@synthesize actionUserInterface=_actionUserInterface - In the implementation block
@property (nonatomic,retain) AFDictationConnection * dictationConnection;                           //@synthesize dictationConnection=_dictationConnection - In the implementation block
@property (nonatomic,copy) NSString * latestTranscription;                                          //@synthesize latestTranscription=_latestTranscription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userInterfaceProtocol;
-(void)cancel;
-(void)stopListening;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2 ;
-(void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3 ;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(id)recognitionError;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(void)runWithSiriUserInterface:(id)arg1 input:(id)arg2 ;
-(void)runWithRemoteUserInterface:(id)arg1 locale:(id)arg2 stopListeningValue:(id)arg3 ;
-(id<WFDictateTextActionUserInterface>)actionUserInterface;
-(void)setActionUserInterface:(id<WFDictateTextActionUserInterface>)arg1 ;
-(AFDictationConnection *)dictationConnection;
-(void)setDictationConnection:(AFDictationConnection *)arg1 ;
-(NSString *)latestTranscription;
-(void)setLatestTranscription:(NSString *)arg1 ;
@end

