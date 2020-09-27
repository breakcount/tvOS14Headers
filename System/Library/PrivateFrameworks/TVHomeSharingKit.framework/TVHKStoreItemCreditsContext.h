/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVHKStoreItemCreditsOperation, NSMutableArray;

@interface TVHKStoreItemCreditsContext : NSObject {

	TVHKStoreItemCreditsOperation* _operation;
	NSMutableArray* _requests;

}

@property (nonatomic,retain) TVHKStoreItemCreditsOperation * operation;              //@synthesize operation=_operation - In the implementation block
@property (nonatomic,readonly) NSMutableArray * requests;                            //@synthesize requests=_requests - In the implementation block
-(id)init;
-(TVHKStoreItemCreditsOperation *)operation;
-(void)setOperation:(TVHKStoreItemCreditsOperation *)arg1 ;
-(NSMutableArray *)requests;
@end
