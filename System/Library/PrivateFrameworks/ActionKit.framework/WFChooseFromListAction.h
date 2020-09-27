/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ActionKit-Structs.h>
#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFChooseFromListAction : WFHandleCustomIntentAction
+(id)userInterfaceProtocol;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2 ;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)getOutputFromIntentResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldCreateIntentAvailableResource;
-(id)itemsFromDictionaryItem:(id)arg1 ;
-(id)contentItemsFromSelectedItem:(id)arg1 ;
-(void)presentAlertWithUserInterface:(id)arg1 input:(id)arg2 ;
-(BOOL)populatesInputFromInputParameter;
-(id)roundedImageFromWFImage:(id)arg1 roundingStyle:(unsigned long long)arg2 desiredSize:(CGSize)arg3 desiredScale:(double)arg4 ;
@end

