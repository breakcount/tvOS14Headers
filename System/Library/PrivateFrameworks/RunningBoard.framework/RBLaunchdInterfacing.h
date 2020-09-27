/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBLaunchdInterfacing <NSObject>
@required
-(id)propertiesForPid:(int)arg1 error:(out id*)arg2;
-(id)propertiesForJob:(id)arg1 error:(out id*)arg2;
-(id)currentDomain;
-(id)copyJobsManagedBy:(id)arg1 error:(out id*)arg2;
-(id)copyJobWithLabel:(id)arg1 domain:(id)arg2;
-(id)submitExtension:(id)arg1 overlay:(id)arg2 domain:(id)arg3 error:(out id*)arg4;
-(id)copyJobWithPid:(int)arg1;
-(id)domainForUser:(unsigned)arg1;
-(id)domainForPid:(int)arg1;
-(id)jobWithPlist:(id)arg1;
-(id)forJob:(id)arg1 createInstance:(unsigned char)arg2 error:(out id*)arg3;
-(id)jobWithPlist:(id)arg1 domain:(id)arg2;

@end

