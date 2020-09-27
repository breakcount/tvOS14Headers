/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GenerationalStorage/GenerationalStorage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GSDocumentIdentifier : NSObject <NSCopying, NSSecureCoding> {

	unsigned char volumeUUID[16];
	unsigned long long documentID;
	int deviceID;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDocumentIdentifier:(id)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 forItemAtURL:(id)arg2 allocateIfNone:(BOOL)arg3 error:(id*)arg4 ;
@end

