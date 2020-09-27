/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivityScheduler/DuetActivityScheduler-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding> {

	NSString* _fileProtection;

}

@property (nonatomic,copy) NSString * fileProtection;              //@synthesize fileProtection=_fileProtection - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)complete;
+(id)completeUnlessOpen;
+(id)none;
+(id)completeUntilFirstUserAuthentication;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileProtection:(NSString *)arg1 ;
-(NSString *)fileProtection;
-(BOOL)indicatesProtection;
-(id)initWithProtection:(id)arg1 ;
@end
