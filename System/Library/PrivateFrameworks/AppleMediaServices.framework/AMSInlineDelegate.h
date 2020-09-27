/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, Protocol;

@interface AMSInlineDelegate : NSObject {

	NSMutableSet* _implementations;
	Protocol* _protocol;

}

@property (nonatomic,retain) NSMutableSet * implementations;              //@synthesize implementations=_implementations - In the implementation block
@property (nonatomic,retain) Protocol * protocol;                         //@synthesize protocol=_protocol - In the implementation block
-(void)dealloc;
-(Protocol *)protocol;
-(void)setProtocol:(Protocol *)arg1 ;
-(id)initWithProtocol:(id)arg1 ;
-(BOOL)implementOptionalInstanceMethodWithSelector:(SEL)arg1 block:(id)arg2 ;
-(id)_initWithProtocol:(id)arg1 ;
-(BOOL)_implementMethodWithSelector:(SEL)arg1 isRequired:(BOOL)arg2 isInstance:(BOOL)arg3 block:(id)arg4 ;
-(NSMutableSet *)implementations;
-(BOOL)implementOptionalClassMethodWithSelector:(SEL)arg1 block:(id)arg2 ;
-(BOOL)implementRequiredClassMethodWithSelector:(SEL)arg1 block:(id)arg2 ;
-(BOOL)implementRequiredInstanceMethodWithSelector:(SEL)arg1 block:(id)arg2 ;
-(void)setImplementations:(NSMutableSet *)arg1 ;
@end

