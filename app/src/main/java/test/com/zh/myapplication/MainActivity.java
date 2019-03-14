package test.com.zh.myapplication;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.Toast;

import test.com.zh.myapplication.utils.JniUtils;

public class MainActivity extends AppCompatActivity {


    static {
        System.loadLibrary("Hello");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        JniUtils jniUtils = new JniUtils();
        Toast.makeText(MainActivity.this,jniUtils.testFromC(),Toast.LENGTH_LONG).show();
    }
}
