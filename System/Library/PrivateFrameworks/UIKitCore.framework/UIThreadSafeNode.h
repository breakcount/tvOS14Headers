/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DOMNode;

@interface UIThreadSafeNode : NSObject {

	DOMNode* _node;

}
+(id)threadSafeNodeWithNode:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithNode:(id)arg1 ;
-(id)_realNode;
@end

