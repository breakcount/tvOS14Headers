/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:11 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMethodSignature, NSString;

@interface CLIntersiloInterfaceSelectorInfo : NSObject {

	int _replyBlockIndex;
	int _returnAddressIndex;
	SEL _sel;
	NSMethodSignature* _sig;

}

@property (nonatomic,readonly) SEL sel;                                     //@synthesize sel=_sel - In the implementation block
@property (nonatomic,readonly) int replyBlockIndex;                         //@synthesize replyBlockIndex=_replyBlockIndex - In the implementation block
@property (nonatomic,readonly) int returnAddressIndex;                      //@synthesize returnAddressIndex=_returnAddressIndex - In the implementation block
@property (nonatomic,retain,readonly) NSMethodSignature * sig;              //@synthesize sig=_sig - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeStr; 
-(id)description;
-(NSMethodSignature *)sig;
-(SEL)sel;
-(id)initWithSelector:(SEL)arg1 andMethodSignature:(id)arg2 ;
-(NSString *)typeStr;
-(int)replyBlockIndex;
-(int)returnAddressIndex;
@end

