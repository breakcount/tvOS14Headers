/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIStatusBarIdentifier : NSObject <NSCopying> {

	id _object;
	NSString* _string;

}

@property (nonatomic,copy,readonly) NSString * stringRepresentation; 
@property (nonatomic,copy) id object;                                             //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSString * string;                                     //@synthesize string=_string - In the implementation block
+(id)identifierForObject:(id)arg1 string:(id)arg2 ;
+(id)uninternedIdentifierForObject:(id)arg1 string:(id)arg2 ;
+(id)displayIdentifierFromStringRepresentation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)string;
-(void)setObject:(id)arg1 ;
-(id)object;
-(void)setString:(NSString *)arg1 ;
-(NSString *)stringRepresentation;
@end

