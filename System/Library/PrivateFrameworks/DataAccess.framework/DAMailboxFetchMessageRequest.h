/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAMailboxRequest.h>

@interface DAMailboxFetchMessageRequest : DAMailboxRequest {

	int _maxSize;

}

@property (assign,nonatomic) int maxSize;              //@synthesize maxSize=_maxSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)maxSize;
-(void)setMaxSize:(int)arg1 ;
-(id)initRequestForBodyFormat:(int)arg1 withMessageID:(id)arg2 withBodySizeLimit:(int)arg3 ;
@end

