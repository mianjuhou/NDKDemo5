package com.fs.ndk5;

/**
 * Created by fangdean on 2016/4/18.
 */
public class NDKTest {
    static {
        System.loadLibrary("NDKTest");
    }
    public static native String getStringName();
    public static native int getSum(int a,int b);
}
