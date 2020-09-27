/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ENTProtocol <NSObject>
@required
-(double)readDouble;
-(id)readString;
-(id)transport;
-(void)writeString:(id)arg1;
-(void)readMessageBeginReturningName:(id*)arg1 type:(int*)arg2 sequenceID:(int*)arg3;
-(void)readMessageEnd;
-(void)readStructBeginReturningName:(id*)arg1;
-(void)readStructEnd;
-(void)readFieldBeginReturningName:(id*)arg1 type:(int*)arg2 fieldID:(int*)arg3;
-(void)readFieldEnd;
-(BOOL)readBool;
-(unsigned char)readByte;
-(short)readI16;
-(int)readI32;
-(long long)readI64;
-(id)readBinary;
-(void)readMapBeginReturningKeyType:(int*)arg1 valueType:(int*)arg2 size:(int*)arg3;
-(void)readMapEnd;
-(void)readSetBeginReturningElementType:(int*)arg1 size:(int*)arg2;
-(void)readSetEnd;
-(void)readListBeginReturningElementType:(int*)arg1 size:(int*)arg2;
-(void)readListEnd;
-(void)writeMessageBeginWithName:(id)arg1 type:(int)arg2 sequenceID:(int)arg3;
-(void)writeMessageEnd;
-(void)writeStructBeginWithName:(id)arg1;
-(void)writeStructEnd;
-(void)writeFieldBeginWithName:(id)arg1 type:(int)arg2 fieldID:(int)arg3;
-(void)writeI32:(int)arg1;
-(void)writeI64:(long long)arg1;
-(void)writeI16:(short)arg1;
-(void)writeByte:(unsigned char)arg1;
-(void)writeDouble:(double)arg1;
-(void)writeBool:(BOOL)arg1;
-(void)writeBinary:(id)arg1;
-(void)writeFieldStop;
-(void)writeFieldEnd;
-(void)writeMapBeginWithKeyType:(int)arg1 valueType:(int)arg2 size:(int)arg3;
-(void)writeMapEnd;
-(void)writeSetBeginWithElementType:(int)arg1 size:(int)arg2;
-(void)writeSetEnd;
-(void)writeListBeginWithElementType:(int)arg1 size:(int)arg2;
-(void)writeListEnd;

@end

