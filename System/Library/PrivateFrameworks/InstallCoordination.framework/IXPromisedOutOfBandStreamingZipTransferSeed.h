/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <InstallCoordination/IXOpaqueDataPromiseSeed.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary;

@interface IXPromisedOutOfBandStreamingZipTransferSeed : IXOpaqueDataPromiseSeed <NSSecureCoding, NSCopying> {

	unsigned long long _archiveBytesConsumed;
	unsigned long long _archiveSizeBytes;
	NSURL* _extractionPath;
	NSDictionary* _szOptions;

}

@property (assign,nonatomic) unsigned long long archiveBytesConsumed;              //@synthesize archiveBytesConsumed=_archiveBytesConsumed - In the implementation block
@property (assign,nonatomic) unsigned long long archiveSizeBytes;                  //@synthesize archiveSizeBytes=_archiveSizeBytes - In the implementation block
@property (nonatomic,retain) NSURL * extractionPath;                               //@synthesize extractionPath=_extractionPath - In the implementation block
@property (nonatomic,copy) NSDictionary * szOptions;                               //@synthesize szOptions=_szOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)extractionPath;
-(void)setExtractionPath:(NSURL *)arg1 ;
-(Class)clientPromiseClass;
-(unsigned long long)archiveBytesConsumed;
-(unsigned long long)archiveSizeBytes;
-(NSDictionary *)szOptions;
-(void)setArchiveBytesConsumed:(unsigned long long)arg1 ;
-(void)setArchiveSizeBytes:(unsigned long long)arg1 ;
-(void)setSzOptions:(NSDictionary *)arg1 ;
@end

