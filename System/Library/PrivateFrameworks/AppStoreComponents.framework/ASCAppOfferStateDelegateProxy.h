/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASCAppOfferStateDelegate.h>

@protocol ASCAppOfferStateDelegate;
@class NSString;

@interface ASCAppOfferStateDelegateProxy : NSObject <ASCAppOfferStateDelegate> {

	id<ASCAppOfferStateDelegate> _target;

}

@property (nonatomic,__weak,readonly) id<ASCAppOfferStateDelegate> target;              //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ASCAppOfferStateDelegate>)target;
-(id)initWithTarget:(id)arg1 ;
-(void)offer:(id)arg1 didChangeState:(id)arg2 withMetadata:(id)arg3 flags:(long long)arg4 ;
-(void)offer:(id)arg1 didChangeStatusText:(id)arg2 ;
@end

