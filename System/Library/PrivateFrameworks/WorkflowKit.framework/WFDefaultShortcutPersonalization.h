/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFDefaultShortcutPersonalizationContext;

@interface WFDefaultShortcutPersonalization : NSObject {

	WFDefaultShortcutPersonalizationContext* _context;

}

@property (nonatomic,readonly) WFDefaultShortcutPersonalizationContext * context;              //@synthesize context=_context - In the implementation block
-(WFDefaultShortcutPersonalizationContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)generateDefaultShortcutsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)personalizeDefaultShortcuts:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

