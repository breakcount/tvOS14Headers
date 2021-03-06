/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAutoLayout/_NSLayoutRuleNode.h>
#import <libobjc.A.dylib/_NSLayoutRuleNodeParent.h>

@class NSArray, NSMutableArray, NSString;

@interface _NSCompositeLayoutRuleNode : _NSLayoutRuleNode <_NSLayoutRuleNodeParent> {

	NSMutableArray* _childNodes;

}

@property (copy,readonly) NSArray * _childRuleNodes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(void)dealloc;
-(void)_addChildRuleNode:(id)arg1 ;
-(void)_removeChildRuleNode:(id)arg1 ;
-(NSArray *)_childRuleNodes;
@end

