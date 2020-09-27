/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSItemsRequest : HSRequest {

	BOOL _shouldParseResponse;
	BOOL _includeHiddenItems;

}

@property (assign,nonatomic) BOOL shouldParseResponse;              //@synthesize shouldParseResponse=_shouldParseResponse - In the implementation block
@property (assign,nonatomic) BOOL includeHiddenItems;               //@synthesize includeHiddenItems=_includeHiddenItems - In the implementation block
+(id)requestWithDatabaseID:(unsigned)arg1 ;
+(id)requestWithDatabaseID:(unsigned)arg1 containerID:(unsigned)arg2 ;
-(double)timeoutInterval;
-(id)initWithAction:(id)arg1 ;
-(id)initWithDatabaseID:(unsigned)arg1 ;
-(id)initWithDatabaseID:(unsigned)arg1 containerID:(unsigned)arg2 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(BOOL)shouldParseResponse;
-(void)setShouldParseResponse:(BOOL)arg1 ;
-(BOOL)includeHiddenItems;
-(void)setIncludeHiddenItems:(BOOL)arg1 ;
@end
