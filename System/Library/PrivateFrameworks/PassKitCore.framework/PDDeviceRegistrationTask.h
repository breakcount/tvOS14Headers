/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface PDDeviceRegistrationTask : NSObject {

	BOOL _shouldForceApplePay;
	BOOL _shouldForcePeerPayment;
	NSMutableArray* _completionHandlers;
	NSString* _reason;

}

@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,copy) NSString * reason;                                  //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL shouldForceApplePay;                         //@synthesize shouldForceApplePay=_shouldForceApplePay - In the implementation block
@property (assign,nonatomic) BOOL shouldForcePeerPayment;                      //@synthesize shouldForcePeerPayment=_shouldForcePeerPayment - In the implementation block
-(id)init;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(NSMutableArray *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(BOOL)shouldForceApplePay;
-(void)setShouldForceApplePay:(BOOL)arg1 ;
-(BOOL)shouldForcePeerPayment;
-(void)setShouldForcePeerPayment:(BOOL)arg1 ;
@end

