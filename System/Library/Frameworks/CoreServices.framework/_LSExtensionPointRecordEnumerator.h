/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSRecordEnumerator.h>

@interface _LSExtensionPointRecordEnumerator : _LSRecordEnumerator {

	vector<unsigned int, std::__1::allocator<unsigned int> >* _extensionIDs;

}
-(BOOL)_prepareWithContext:(LSContext*)arg1 error:(id*)arg2 ;
-(BOOL)_getObject:(id*)arg1 atIndex:(unsigned long long)arg2 context:(LSContext*)arg3 ;
@end

