package com.tsumuchan.jnitest;

/**
 * Created by tsumu on 16/02/14.
 */
public class Const {
    static {
        System.load("libConst.so");
    }

    public static native String getSecretKey();

    public static native String stringFromJNI();
}
