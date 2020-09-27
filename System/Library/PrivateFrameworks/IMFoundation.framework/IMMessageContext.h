/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_voucher;
@class NSObject, IMLocalObject;

@interface IMMessageContext : NSObject {

	NSObject*<OS_xpc_object> _xpcMessage;
	BOOL _boost;
	BOOL _shouldBoost;
	BOOL _sync;
	BOOL _reply;
	BOOL _needReply;
	IMLocalObject* _localObject;
	id _context;
	NSObject*<OS_voucher> _voucher;

}

@property (retain) IMLocalObject * localObject;                      //@synthesize localObject=_localObject - In the implementation block
@property (retain) id context;                                       //@synthesize context=_context - In the implementation block
@property (assign) BOOL shouldBoost;                                 //@synthesize shouldBoost=_shouldBoost - In the implementation block
@property (assign,nonatomic) BOOL sync;                              //@synthesize sync=_sync - In the implementation block
@property (assign,nonatomic) BOOL reply;                             //@synthesize reply=_reply - In the implementation block
@property (assign,nonatomic) BOOL needReply;                         //@synthesize needReply=_needReply - In the implementation block
@property (retain) NSObject*<OS_xpc_object> xpcMessage;              //@synthesize xpcMessage=_xpcMessage - In the implementation block
@property (retain) NSObject*<OS_voucher> voucher;                    //@synthesize voucher=_voucher - In the implementation block
-(id)init;
-(id)context;
-(void)setContext:(id)arg1 ;
-(BOOL)sync;
-(void)setSync:(BOOL)arg1 ;
-(NSObject*<OS_voucher>)voucher;
-(void)setVoucher:(NSObject*<OS_voucher>)arg1 ;
-(void)setXpcMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setLocalObject:(IMLocalObject *)arg1 ;
-(BOOL)shouldBoost;
-(BOOL)isSync;
-(BOOL)needReply;
-(BOOL)isReply;
-(NSObject*<OS_xpc_object>)xpcMessage;
-(IMLocalObject *)localObject;
-(void)setReply:(BOOL)arg1 ;
-(void)setShouldBoost:(BOOL)arg1 ;
-(BOOL)reply;
-(void)setNeedReply:(BOOL)arg1 ;
@end

