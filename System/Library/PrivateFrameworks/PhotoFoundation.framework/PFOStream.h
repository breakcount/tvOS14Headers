/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:35 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PFOStream <NSObject,PFStream>
@required
-(BOOL)reserveLength:(long long)arg1;
-(BOOL)writeStream:(const char*)arg1 length:(unsigned long long)arg2 written:(unsigned long long*)arg3;
-(BOOL)writeStream:(id)arg1;
-(BOOL)writeStream:(id)arg1 blockSize:(unsigned long long)arg2;
-(BOOL)truncateLength:(long long)arg1;

@end

