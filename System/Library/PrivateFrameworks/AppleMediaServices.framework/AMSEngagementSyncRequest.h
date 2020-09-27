/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, NSString;

@interface AMSEngagementSyncRequest : NSObject <NSSecureCoding> {

	NSDictionary* _context;
	NSArray* _destinations;
	NSString* _logKey;
	double _timeout;

}

@property (nonatomic,retain) NSDictionary * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * destinations;              //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,retain) NSString * logKey;                   //@synthesize logKey=_logKey - In the implementation block
@property (assign,nonatomic) double timeout;                      //@synthesize timeout=_timeout - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)archiveClasses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(double)timeout;
-(NSArray *)destinations;
-(void)setDestinations:(NSArray *)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
@end

