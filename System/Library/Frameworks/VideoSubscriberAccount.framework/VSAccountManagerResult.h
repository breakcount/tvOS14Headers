/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperation;

@interface VSAccountManagerResult : NSObject {

	NSOperation* _operation;

}

@property (nonatomic,retain) NSOperation * operation;              //@synthesize operation=_operation - In the implementation block
-(id)init;
-(void)cancel;
-(NSOperation *)operation;
-(void)setOperation:(NSOperation *)arg1 ;
-(id)initWithOperation:(id)arg1 ;
@end

