/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivityRingsUI/ARUIRingsRenderPipelineFactory.h>

@class ARUIRingsEmptyState, ARUIRingsCountdownState, ARUIRingsAlphaReductionState;

@interface ARUICountdownRingsRenderPipelineFactory : ARUIRingsRenderPipelineFactory {

	ARUIRingsEmptyState* _emptyState;
	ARUIRingsCountdownState* _countdownState;
	ARUIRingsAlphaReductionState* _alphaReductionState;

}
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2 ;
-(id)pipelineForConfiguration:(id)arg1 ;
@end

