/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/log/liblog_geo.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <liblog_geo.dylib/liblog_geo.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface Multipart : NSObject <NSCopying> {

	unsigned long long identifier;
	unsigned char partIndex;
	unsigned char partCount;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToMultipart:(id)arg1 ;
-(id)copyWithIndex:(unsigned char)arg1 ;
@end

