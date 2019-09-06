#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

/* Here is a good place to include header files that are required across
your application. */

#define configUSE_PREEMPTION                    1               /**是否打开联合处理或者是先发制人的调度算法 */
#define configUSE_PORT_OPTIMISED_TASK_SELECTION 0               /** */
#define configUSE_TICKLESS_IDLE                 0
#define configCPU_CLOCK_HZ                      60000000
#define configTICK_RATE_HZ                      250             /**定义时间片的长度  即一秒钟脉冲次数*/
#define configMAX_PRIORITIES                    5               /**定义最高的优先级 */
/**定义栈的大小 */
#define configMINIMAL_STACK_SIZE                128
/**定义支持的最大任务名的长度 */
#define configMAX_TASK_NAME_LEN                 16              /**定义任务名称的长度 */
#define configUSE_16_BIT_TICKS                  0               /**定义每个事件组的事件位*/
#define configIDLE_SHOULD_YIELD                 1               /**防止空闲任务占用重要任务的运行时间 */
#define configUSE_TASK_NOTIFICATIONS            1               /**设置使用任务通知*/
#define configUSE_MUTEXES                       0               /**设置是否使用互斥量*/
#define configUSE_RECURSIVE_MUTEXES             0
#define configUSE_COUNTING_SEMAPHORES           0
#define configUSE_ALTERNATIVE_API               0               /** Deprecated! */
#define configQUEUE_REGISTRY_SIZE               10
#define configUSE_QUEUE_SETS                    0
#define configUSE_TIME_SLICING                  0
#define configUSE_NEWLIB_REENTRANT              0
#define configENABLE_BACKWARD_COMPATIBILITY     0
#define configNUM_THREAD_LOCAL_STORAGE_POINTERS 5
#define configSTACK_DEPTH_TYPE                  uint16_t
#define configMESSAGE_BUFFER_LENGTH_TYPE        size_t

/* Memory allocation related definitions. */
#define configSUPPORT_STATIC_ALLOCATION         1           /**是否支持静态内存空间 */
#define configSUPPORT_DYNAMIC_ALLOCATION        1           /**是否支持堆内存空间 */
#define configTOTAL_HEAP_SIZE                   10240       /**定义堆内存空间大小单位为字节 */
#define configAPPLICATION_ALLOCATED_HEAP        1

/* Hook function related definitions. */
#define configUSE_IDLE_HOOK                     0           /**设置启用空闲处理函数 */
#define configUSE_TICK_HOOK                     0           /**设置使用计时器钩子函数*/
#define configCHECK_FOR_STACK_OVERFLOW          0
#define configUSE_MALLOC_FAILED_HOOK            0       /**堆内存分配失败的钩子函数 */
#define configUSE_DAEMON_TASK_STARTUP_HOOK      0

/* Run time and task stats gathering related definitions. */
#define configGENERATE_RUN_TIME_STATS           0
#define configUSE_TRACE_FACILITY                0
#define configUSE_STATS_FORMATTING_FUNCTIONS    0

/* Co-routine related definitions. */
#define configUSE_CO_ROUTINES                   0
#define configMAX_CO_ROUTINE_PRIORITIES         1

/* Software timer related definitions. */
#define configUSE_TIMERS                        1           /**是否开启计时器功能*/
#define configTIMER_TASK_PRIORITY               3           /**守护进程的优先级*/
#define configTIMER_QUEUE_LENGTH                10          /**与守护进程通信的元素个数*/  
#define configTIMER_TASK_STACK_DEPTH            configMINIMAL_STACK_SIZE           /**定义守护进程的栈深度 */

/* Interrupt nesting behaviour configuration. */
#define configKERNEL_INTERRUPT_PRIORITY         [dependent of processor]                        /**设置的滴答计时器的中断优先级，设置为尽可能低的优先级，如果没有定义configMAX_SYSCALL_INTERRUPT_PRIORITY所有的中断安全的优先级运行在此优先级上*/
#define configMAX_SYSCALL_INTERRUPT_PRIORITY    [dependent on processor and application]        /**设置中断安全的API可以调用的最高优先级*/
#define configMAX_API_CALL_INTERRUPT_PRIORITY   [dependent on processor and application]        /**设置中断安全的API可以调用的最高优先级*/

/* Define to trap errors during development. */
//#define configASSERT((x))	if( ( x ) == 0 ) vAssertCalled( __FILE__, __LINE__ )
//#define configASSERT((x)) if((x)==0) vAssertCalled(__FILE__,__LINE__)
/* FreeRTOS MPU specific definitions. */
#define configINCLUDE_APPLICATION_DEFINED_PRIVILEGED_FUNCTIONS 0

/* Optional functions - most linkers will remove unused functions anyway. */
#define INCLUDE_vTaskPrioritySet                1
#define INCLUDE_uxTaskPriorityGet               1
#define INCLUDE_vTaskDelete                     1               /**设置是否具有删除任务的API */
#define INCLUDE_vTaskSuspend                    1
#define INCLUDE_xResumeFromISR                  1
#define INCLUDE_vTaskDelayUntil                 1
#define INCLUDE_vTaskDelay                      1               /**设置具有任务等待API */
#define INCLUDE_xTaskGetSchedulerState          1
#define INCLUDE_xTaskGetCurrentTaskHandle       1
#define INCLUDE_uxTaskGetStackHighWaterMark     0
#define INCLUDE_xTaskGetIdleTaskHandle          0
#define INCLUDE_eTaskGetState                   0
#define INCLUDE_xEventGroupSetBitFromISR        1
#define INCLUDE_xTimerPendFunctionCall          0
#define INCLUDE_xTaskAbortDelay                 0               /**设置使任务由阻塞态进入就绪态的函数可用*/
#define INCLUDE_xTaskGetHandle                  0
#define INCLUDE_xTaskResumeFromISR              1

/* A header file that defines trace macro can be included here. */

#endif /* FREERTOS_CONFIG_H */
