/*.c for comments highlight by editors
https://console.aws.amazon.com/console/home?region=us-east-1
https://docs.aws.amazon.com/AmazonS3/latest/dev/delete-or-empty-bucket.html#delete-bucket-awscli
TODO no loop
alternative to bash : sed awk*/
//OK aws s3 rb s3://buck --force
//KO xargsaws s3 ls |grep 2019|xargs cut -c 2-1000
//KO   aws s3 ls |cut -c 20-1000 |xargs aws s3 rb s3://'{}'
//KO alias cmdd = `aws s3 rb s3://`;aws s3 ls |cut -c 20-1000 >>cmdd ; cmdd
//script = `aws s3 rb s3://$varr`;aws s3 ls |cut -c 20-1000 |tee -a sovPoub|xargs  script

//tee
//https://stackoverflow.com/questions/2559076/how-do-i-redirect-output-to-a-variable-in-shell
 //aws s3 ls |cut -c 20-1000 |xargs echo ( read varr ; echo $varr )
//KO listt= $(aws s3 ls |cut -c 20-1000 )
 aws s3 ls |cut -c 20-1000 >listt ; for f in $(cat listt); do aws s3 rm s3://$f --recursive ; done


