/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSString, NSArray;

@interface ASCLockupBatchRequest : NSObject <NSSecureCoding, NSCopying> {

	NSSet* _ids;
	NSString* _kind;
	NSString* _context;

}

@property (nonatomic,copy,readonly) NSSet * ids;                     //@synthesize ids=_ids - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind;                 //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requests; 
+(BOOL)supportsSecureCoding;
+(id)lockupBatchRequestsFromRequests:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)ids;
-(NSString *)context;
-(NSString *)kind;
-(NSArray *)requests;
-(id)lockupBatchRequestWithIDs:(id)arg1 ;
-(id)initWithIDs:(id)arg1 kind:(id)arg2 context:(id)arg3 ;
@end

