void Z_dR_Bj1_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_16/Z_dR_Bj1_both_16
//=========  (Mon Jul 24 10:12:20 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_16 = new TCanvas("Z_dR_Bj1_both_16", "Z_dR_Bj1_both_16",0,0,600,600);
   Z_dR_Bj1_both_16->SetHighLightColor(2);
   Z_dR_Bj1_both_16->Range(0,0,1,1);
   Z_dR_Bj1_both_16->SetFillColor(0);
   Z_dR_Bj1_both_16->SetFillStyle(4000);
   Z_dR_Bj1_both_16->SetBorderMode(0);
   Z_dR_Bj1_both_16->SetBorderSize(2);
   Z_dR_Bj1_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1473.941,6.314516,1472477);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(1261983);
   
   TH1F *st_stack_245 = new TH1F("st_stack_245","",30,0,6);
   st_stack_245->SetMinimum(0.01);
   st_stack_245->SetMaximum(1325082);
   st_stack_245->SetDirectory(0);
   st_stack_245->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_245->SetLineColor(ci);
   st_stack_245->GetXaxis()->SetRange(1,30);
   st_stack_245->GetXaxis()->SetLabelFont(42);
   st_stack_245->GetXaxis()->SetLabelSize(0.035);
   st_stack_245->GetXaxis()->SetTitleSize(0.035);
   st_stack_245->GetXaxis()->SetTitleFont(42);
   st_stack_245->GetYaxis()->SetTitle("Events/0.2");
   st_stack_245->GetYaxis()->SetLabelFont(42);
   st_stack_245->GetYaxis()->SetLabelSize(0.05);
   st_stack_245->GetYaxis()->SetTitleSize(0.057);
   st_stack_245->GetYaxis()->SetTitleOffset(1.2);
   st_stack_245->GetYaxis()->SetTitleFont(42);
   st_stack_245->GetZaxis()->SetLabelFont(42);
   st_stack_245->GetZaxis()->SetLabelSize(0.035);
   st_stack_245->GetZaxis()->SetTitleSize(0.035);
   st_stack_245->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_245);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,105324.9);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,525186.5);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,412410.5);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,335640);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,218692.5);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,190084.2);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,141081);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,108417.5);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,92805.12);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,78134.94);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,76978.64);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,77207.93);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,59538.74);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,50474.92);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,50032.9);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,49417.75);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,30445.08);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,31172.01);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,28392.16);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,19415.61);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,17543.35);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,15771.29);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,10384.45);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,8094.086);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,7585.581);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,5426.132);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(27,3333.998);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(28,2628.156);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(29,673.5679);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(30,294.4032);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(31,1991.209);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,3052.663);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,30602.58);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,10683.44);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,22630.97);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,7808.382);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,7930.238);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,6181.488);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,5626.059);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,5250.834);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,4260.49);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,4967.628);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,5371.278);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,3635.781);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,3352.942);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,3673.226);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,4849.915);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,2851.737);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,3462.164);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,3144.45);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,2161.83);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,2108.42);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,2434.949);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,1206.2);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,1037.925);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,1096.744);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,873.5238);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(27,568.6853);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(28,667.6881);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(29,95.47528);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(30,61.05843);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(31,610.5367);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(182810);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,522.8028);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,2685.01);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,3692.115);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,3588.723);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,3056.329);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,2477.908);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,2045.206);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,1730.944);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,1513.63);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,1299.31);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,1169.505);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,1084.691);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,969.042);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,835.9355);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,731.5764);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,624.9098);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,516.8916);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,438.0523);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,360.1044);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,284.3713);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,238.9605);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,170.1757);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,131.4068);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,103.399);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,77.65585);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,60.52025);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,38.60903);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,22.92388);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(29,17.54624);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(30,13.86921);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(31,19.29254);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,9.50813);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,20.26147);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,23.5616);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,23.1432);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,21.35162);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,19.15472);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,17.48539);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,16.04575);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,15.09608);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,13.93088);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,13.1024);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,12.81844);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,12.1008);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,11.16092);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,10.51017);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,9.77466);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,8.802255);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,8.30464);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,7.479181);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,6.687261);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,6.145783);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,5.142064);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,4.600973);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,4.109879);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,3.603475);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,3.246558);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,2.544973);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,1.939668);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(29,1.744485);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(30,1.675245);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(31,1.833612);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(401943);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(1,4806.291);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(2,33970.47);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(3,56384.34);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(4,59567.23);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(5,51943.06);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(6,41652.22);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(7,33489.03);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(8,27843.24);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(9,24199.72);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(10,21719.53);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(11,19961.97);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(12,18358.26);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(13,16602.99);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(14,14415.66);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(15,12313.97);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(16,10255.22);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(17,8348.654);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(18,6694.194);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(19,5331.18);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(20,4149.74);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(21,3175.227);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(22,2370.761);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(23,1742.592);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(24,1250.52);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(25,890.4251);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(26,590.3118);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(27,394.6906);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(28,249.1274);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(29,168.7328);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(30,104.7272);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(31,183.5123);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(1,17.28024);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(2,45.9326);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(3,59.27965);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(4,60.98107);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(5,56.94597);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(6,50.981);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(7,45.70605);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(8,41.67709);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(9,38.85665);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(10,36.82078);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(11,35.3064);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(12,33.87479);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(13,32.22207);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(14,30.0167);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(15,27.7337);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(16,25.30378);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(17,22.83212);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(18,20.44298);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(19,18.22436);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(20,16.08017);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(21,14.06377);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(22,12.13732);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(23,10.40396);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(24,8.813962);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(25,7.435878);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(26,6.047365);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(27,4.94106);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(28,3.926946);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(29,3.236462);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(30,2.548751);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(31,3.360118);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetEntries(7926175);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(1,1156.492);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(2,3718.496);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(3,3936.926);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(4,2849.377);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(5,1740.346);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(6,1143.317);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(7,880.3226);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(8,696.5001);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(9,647.1841);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(10,530.9465);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(11,483.897);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(12,412.2463);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(13,394.9088);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(14,381.4106);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(15,323.7806);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(16,276.8964);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(17,245.6536);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(18,204.3338);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(19,171.9804);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(20,162.029);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(21,127.6353);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(22,114.6705);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(23,95.03687);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(24,73.34389);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(25,59.08788);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(26,44.76648);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(27,33.33274);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(28,16.12784);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(29,6.424695);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(30,11.25673);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(31,7.237764);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(1,12.56827);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(2,34.7892);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(3,44.83437);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(4,46.3344);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(5,37.4187);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(6,27.62157);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(7,24.12257);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(8,21.88481);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(9,22.33106);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(10,18.52878);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(11,17.19578);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(12,14.22672);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(13,15.67702);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(14,16.50184);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(15,14.20115);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(16,12.64457);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(17,11.92169);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(18,11.29513);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(19,9.096026);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(20,10.34487);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(21,7.837337);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(22,7.693557);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(23,5.985671);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(24,4.228772);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(25,4.735379);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(26,4.476166);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(27,4.193627);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(28,1.373828);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(29,0.8955935);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(30,3.899536);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(31,1.077113);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetEntries(171964);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(1,737.7744);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(2,2226.382);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(3,1826.873);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(4,1212.712);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(5,932.2391);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(6,745.0259);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(7,605.7354);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(8,504.2714);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(9,440.2541);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(10,374.7642);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(11,307.2228);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(12,346.8394);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(13,260.3138);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(14,255.3699);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(15,226.2328);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(16,212.5624);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(17,151.3637);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(18,159.9797);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(19,121.0361);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(20,96.24023);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(21,80.99097);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(22,84.89495);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(23,49.25459);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(24,45.28307);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(25,34.17593);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(26,26.04288);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(27,16.95178);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(28,10.40872);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(29,14.54623);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(30,3.57184);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(31,8.350332);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(1,20.50827);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(2,48.84487);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(3,49.02839);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(4,42.89991);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(5,37.87569);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(6,33.86258);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(7,30.60065);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(8,26.78012);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(9,24.06294);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(10,23.01886);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(11,17.54685);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(12,25.08714);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(13,15.92078);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(14,19.0209);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(15,18.59612);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(16,17.65678);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(17,13.25098);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(18,16.03301);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(19,12.81155);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(20,6.691732);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(21,8.399586);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(22,12.06944);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(23,4.391773);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(24,4.63207);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(25,4.018232);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(26,3.387646);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(27,2.441205);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(28,1.756209);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(29,6.517055);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(30,1.179483);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(31,2.179548);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetEntries(118385);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(1,3.264936);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(2,10.56808);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(3,8.677857);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(4,5.756598);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(5,5.584759);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(6,4.295969);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(7,3.436775);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(8,3.694533);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(9,2.491662);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(10,2.233904);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(11,3.007178);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(12,1.890226);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(13,2.233904);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(14,1.890226);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(15,1.288791);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(16,1.031033);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(17,1.202871);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(18,0.687355);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(19,1.288791);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(20,0.3436775);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(21,0.3436775);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(22,0.5155163);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(23,0.2577581);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(24,0.5155163);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(25,0.08591938);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(27,0.08591938);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(28,0.08591938);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(1,0.5296426);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(2,0.952892);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(3,0.863479);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(4,0.7032804);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(5,0.6927041);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(6,0.6075417);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(7,0.5434018);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(8,0.563411);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(9,0.46269);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(10,0.4381046);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(11,0.5083059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(12,0.4029976);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(13,0.4381046);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(14,0.4029976);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(15,0.3327643);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(16,0.2976334);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(17,0.3214809);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(18,0.2430167);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(19,0.3327643);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(20,0.1718388);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(21,0.1718388);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(22,0.2104586);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(23,0.1488167);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(24,0.2104586);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(25,0.08591938);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(27,0.08591938);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(28,0.08591938);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetEntries(777);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(1,11.14997);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(2,37.71874);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(3,36.38075);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(4,24.91221);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(5,10.51283);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(6,5.861697);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(7,4.969699);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(8,3.822846);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(9,3.121991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(10,3.504275);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(11,3.249419);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(12,1.847709);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(13,2.102565);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(14,1.911423);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(15,1.911423);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(16,1.592852);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(17,1.592852);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(18,1.337996);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(19,0.7008551);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(20,1.08314);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(21,1.08314);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(22,0.7645692);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(23,0.7645692);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(24,0.1911423);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(25,0.3822846);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(26,0.2548564);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(27,0.1911423);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(1,0.8428583);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(2,1.550231);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(3,1.522487);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(4,1.259865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(5,0.8184224);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(6,0.6111241);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(7,0.5627077);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(8,0.4935273);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(9,0.4459987);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(10,0.4725164);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(11,0.4550097);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(12,0.3431109);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(13,0.3660096);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(14,0.3489765);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(15,0.3489765);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(16,0.3185705);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(17,0.3185705);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(18,0.2919747);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(19,0.2113157);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(20,0.2626999);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(21,0.2626999);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(22,0.2207121);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(23,0.2207121);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(24,0.1103561);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(25,0.156067);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(26,0.1274282);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(27,0.1103561);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetEntries(2557);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(1,6.995964);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(2,33.90352);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(3,29.59831);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(4,21.16728);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(5,11.12179);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(6,7.713499);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(7,6.278429);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(8,5.740278);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(9,3.228907);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(10,4.125825);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(11,3.228907);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(12,2.152604);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(13,3.228907);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(14,4.305209);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(15,2.511372);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(16,1.614453);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(17,2.511372);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(18,1.43507);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(19,0.8969185);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(20,0.8969185);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(21,0.3587674);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(22,0.8969185);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(23,0.3587674);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(24,0.3587674);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(25,0.7175348);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(26,0.3587674);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(1,1.120251);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(2,2.466118);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(3,2.304225);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(4,1.948606);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(5,1.412469);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(6,1.176298);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(7,1.061248);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(8,1.014747);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(9,0.7610606);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(10,0.860294);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(11,0.7610606);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(12,0.6214034);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(13,0.7610606);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(14,0.8787971);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(15,0.6711923);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(16,0.5381511);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(17,0.6711923);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(18,0.5073737);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(19,0.4011141);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(20,0.4011141);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(21,0.2536869);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(22,0.4011141);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(23,0.2536869);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(24,0.2536869);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(25,0.3587674);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(26,0.2536869);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetEntries(868);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(1,3.364326);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(2,14.5484);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(3,18.16929);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(4,15.29741);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(5,10.92613);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(6,6.905213);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(7,4.808544);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(8,3.594684);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(9,3.074655);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(10,2.699461);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(11,2.419446);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(12,2.423584);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(13,2.073219);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(14,1.804239);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(15,1.514567);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(16,1.230414);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(17,1.102131);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(18,0.8538408);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(19,0.7462486);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(20,0.6290007);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(21,0.5145115);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(22,0.4248513);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(23,0.3958842);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(24,0.2689805);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(25,0.195873);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(26,0.1393181);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(27,0.08000447);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(28,0.03724346);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(29,0.02069081);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(30,0.004138162);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(31,0.008276324);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(1,0.06812275);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(2,0.1416611);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(3,0.1583114);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(4,0.145262);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(5,0.1227655);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(6,0.09759592);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(7,0.08144228);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(8,0.07041634);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(9,0.06512403);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(10,0.06102133);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(11,0.05776982);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(12,0.05781921);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(13,0.05347684);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(14,0.04988731);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(15,0.0457075);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(16,0.04119729);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(17,0.03899058);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(18,0.03431876);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(19,0.03208373);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(20,0.02945565);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(21,0.0266404);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(22,0.02420815);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(23,0.0233683);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(24,0.0192621);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(25,0.0164373);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(26,0.01386267);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(27,0.0105051);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(28,0.007167507);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(29,0.005342344);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(30,0.002389169);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(31,0.003378795);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetEntries(72695);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(1,2.094928);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(2,7.895993);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(3,9.201788);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(4,7.474931);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(5,5.034488);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(6,3.209884);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(7,2.190527);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(8,1.650235);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(9,1.388503);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(10,1.212703);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(11,1.057668);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(12,0.9599219);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(13,0.8822259);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(14,0.7866275);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(15,0.6409027);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(16,0.5460205);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(17,0.4926716);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(18,0.4232106);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(19,0.387048);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(20,0.3326249);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(21,0.2975364);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(22,0.247768);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(23,0.209457);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(24,0.1686398);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(25,0.13928);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(26,0.08163454);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(27,0.05907762);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(28,0.02649542);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(29,0.01109943);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(30,0.006444832);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(31,0.004654601);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(1,0.02738761);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(2,0.05317077);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(3,0.05739917);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(4,0.05173365);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(5,0.04245679);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(6,0.03390113);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(7,0.02800553);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(8,0.02430762);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(9,0.02229682);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(10,0.02083755);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(11,0.01946007);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(12,0.01853905);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(13,0.01777295);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(14,0.0167824);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(15,0.01514836);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(16,0.01398215);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(17,0.01328154);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(18,0.01230971);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(19,0.01177205);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(20,0.01091307);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(21,0.01032142);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(22,0.009418725);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(23,0.008659982);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(24,0.00777051);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(25,0.007061775);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(26,0.005406379);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(27,0.004599187);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(28,0.00308003);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(29,0.001993517);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(30,0.001519061);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(31,0.001290954);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(1,0.1066653);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(2,0.5387965);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(3,0.6345217);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(4,0.3446109);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(5,0.1969205);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(6,0.08205022);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(7,0.08478523);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(8,0.05743516);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(9,0.04923013);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(10,0.05743516);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(11,0.05196514);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(12,0.05470015);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(13,0.03282009);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(14,0.04376012);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(15,0.01367504);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(16,0.01641004);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(17,0.02188006);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(18,0.01641004);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(19,0.008205022);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(20,0.01367504);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(21,0.008205022);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(22,0.01094003);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(23,0.01094003);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(24,0.005470015);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(25,0.008205022);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(26,0.01367504);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(27,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(28,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(1,0.01708012);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(2,0.03838766);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(3,0.04165839);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(4,0.03070038);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(5,0.02320731);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(6,0.01498025);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(7,0.01522788);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(8,0.01253338);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(9,0.01160365);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(10,0.01253338);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(11,0.01192162);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(12,0.01223133);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(13,0.009474344);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(14,0.01094003);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(15,0.006115663);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(16,0.006699373);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(17,0.007735769);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(18,0.006699373);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(19,0.004737172);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(20,0.006115663);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(21,0.004737172);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(22,0.005470015);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(23,0.005470015);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(24,0.003867885);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(25,0.004737172);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(26,0.006115663);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(27,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(28,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetEntries(910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(1,0.06252152);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(2,0.2575887);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(3,0.2604468);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(4,0.1561252);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(5,0.07859849);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(6,0.05001722);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(7,0.03251119);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(8,0.02750947);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(9,0.02679494);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(10,0.01857782);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(11,0.02536588);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(12,0.01714876);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(13,0.0146479);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(14,0.01500517);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(15,0.01536243);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(16,0.007859849);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(17,0.01071798);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(18,0.009288912);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(19,0.009646178);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(20,0.006788051);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(21,0.007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(22,0.006430785);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(23,0.005001722);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(24,0.002858127);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(25,0.002500861);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(26,0.002143595);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(27,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(28,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(30,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(1,0.004726183);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(2,0.009593104);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(3,0.009646178);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(4,0.00746848);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(5,0.005299109);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(6,0.004227227);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(7,0.003408099);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(8,0.003134995);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(9,0.003094013);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(10,0.002576281);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(11,0.003010376);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(12,0.00247521);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(13,0.002287618);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(14,0.002315347);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(15,0.002342749);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(16,0.001675725);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(17,0.001956826);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(18,0.001821706);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(19,0.001856408);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(20,0.001557286);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(21,0.001597741);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(22,0.001515751);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(23,0.001336766);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(24,0.0010105);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(25,0.0009452366);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(26,0.000875119);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(27,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(28,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(30,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetEntries(3163);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj1__489 = new TH1D("VbbHcc_both_Z_dR_Bj1__489","",30,0,6);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(1,77710);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(2,259902);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(3,230429);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(4,171108);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(5,133423);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(6,104697);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(7,84283);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(8,70095);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(9,60027);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(10,52938);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(11,47971);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(12,43774);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(13,40323);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(14,35544);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(15,31961);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(16,28000);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(17,23272);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(18,19618);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(19,16444);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(20,14037);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(21,11692);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(22,9776);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(23,7867);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(24,6402);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(25,4930);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(26,3784);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(27,2646);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(28,1672);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(29,1036);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(30,617);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(31,1024);
   VbbHcc_both_Z_dR_Bj1__489->SetEntries(1597031);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1__489->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1__489->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj1__489->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj1__489->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj1__489->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1__489->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__489->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__489->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__489->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__489->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__489->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__489->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__489->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1__489->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__489->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__489->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__489->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__489->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__489->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fx1489[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fy1489[30] = {
   112575.3,
   567892.3,
   478353.7,
   402933.2,
   276408,
   236130.8,
   178123.1,
   139211.1,
   119619.3,
   102073.3,
   98914.27,
   97419.31,
   77776.57,
   66374.05,
   63636.36,
   60793.38,
   39714.58,
   38673.34,
   34380.49,
   24111.3,
   21168.78,
   18514.66,
   12404.74,
   9568.143,
   8648.458,
   6148.623,
   3818.002,
   2926.897,
   880.8496,
   427.8391};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fex1489[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fey1489[30] = {
   3052.822,
   30602.68,
   10683.84,
   22631.15,
   7808.8,
   7930.546,
   6181.805,
   5626.342,
   5251.102,
   4260.775,
   4967.831,
   5371.478,
   3636.013,
   3353.19,
   3673.42,
   4850.04,
   2851.897,
   3462.29,
   3144.551,
   2161.935,
   2108.508,
   2435.026,
   1206.277,
   1037.989,
   1096.793,
   873.5689,
   568.7332,
   667.7062,
   95.77224,
   61.27016};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj1_fx1489,Graph_from_VbbHcc_both_Z_dR_Bj1_fy1489,Graph_from_VbbHcc_both_Z_dR_Bj1_fex1489,Graph_from_VbbHcc_both_Z_dR_Bj1_fey1489);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetMinimum(329.9121);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetMaximum(658307.8);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj1","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_both_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__490 = new TH1D("data_mc_ratio__490","",30,0,6);
   data_mc_ratio__490->SetBinContent(1,0.6902936);
   data_mc_ratio__490->SetBinContent(2,0.4576607);
   data_mc_ratio__490->SetBinContent(3,0.4817126);
   data_mc_ratio__490->SetBinContent(4,0.424656);
   data_mc_ratio__490->SetBinContent(5,0.4827032);
   data_mc_ratio__490->SetBinContent(6,0.4433856);
   data_mc_ratio__490->SetBinContent(7,0.4731727);
   data_mc_ratio__490->SetBinContent(8,0.503516);
   data_mc_ratio__490->SetBinContent(9,0.501817);
   data_mc_ratio__490->SetBinContent(10,0.5186271);
   data_mc_ratio__490->SetBinContent(11,0.4849755);
   data_mc_ratio__490->SetBinContent(12,0.449336);
   data_mc_ratio__490->SetBinContent(13,0.5184466);
   data_mc_ratio__490->SetBinContent(14,0.5355105);
   data_mc_ratio__490->SetBinContent(15,0.5022443);
   data_mc_ratio__490->SetBinContent(16,0.4605765);
   data_mc_ratio__490->SetBinContent(17,0.5859813);
   data_mc_ratio__490->SetBinContent(18,0.5072746);
   data_mc_ratio__490->SetBinContent(19,0.4782945);
   data_mc_ratio__490->SetBinContent(20,0.5821752);
   data_mc_ratio__490->SetBinContent(21,0.5523228);
   data_mc_ratio__490->SetBinContent(22,0.528014);
   data_mc_ratio__490->SetBinContent(23,0.6341929);
   data_mc_ratio__490->SetBinContent(24,0.6690954);
   data_mc_ratio__490->SetBinContent(25,0.5700438);
   data_mc_ratio__490->SetBinContent(26,0.6154223);
   data_mc_ratio__490->SetBinContent(27,0.6930327);
   data_mc_ratio__490->SetBinContent(28,0.5712534);
   data_mc_ratio__490->SetBinContent(29,1.176137);
   data_mc_ratio__490->SetBinContent(30,1.442131);
   data_mc_ratio__490->SetBinContent(31,0.4634291);
   data_mc_ratio__490->SetBinError(1,0.002476255);
   data_mc_ratio__490->SetBinError(2,0.0008977157);
   data_mc_ratio__490->SetBinError(3,0.001003505);
   data_mc_ratio__490->SetBinError(4,0.001026602);
   data_mc_ratio__490->SetBinError(5,0.001321493);
   data_mc_ratio__490->SetBinError(6,0.001370296);
   data_mc_ratio__490->SetBinError(7,0.001629858);
   data_mc_ratio__490->SetBinError(8,0.001901821);
   data_mc_ratio__490->SetBinError(9,0.002048199);
   data_mc_ratio__490->SetBinError(10,0.002254091);
   data_mc_ratio__490->SetBinError(11,0.002214269);
   data_mc_ratio__490->SetBinError(12,0.002147648);
   data_mc_ratio__490->SetBinError(13,0.00258183);
   data_mc_ratio__490->SetBinError(14,0.002840435);
   data_mc_ratio__490->SetBinError(15,0.002809343);
   data_mc_ratio__490->SetBinError(16,0.002752471);
   data_mc_ratio__490->SetBinError(17,0.0038412);
   data_mc_ratio__490->SetBinError(18,0.003621727);
   data_mc_ratio__490->SetBinError(19,0.003729852);
   data_mc_ratio__490->SetBinError(20,0.004913789);
   data_mc_ratio__490->SetBinError(21,0.005107973);
   data_mc_ratio__490->SetBinError(22,0.00534029);
   data_mc_ratio__490->SetBinError(23,0.007150177);
   data_mc_ratio__490->SetBinError(24,0.008362386);
   data_mc_ratio__490->SetBinError(25,0.008118668);
   data_mc_ratio__490->SetBinError(26,0.01000455);
   data_mc_ratio__490->SetBinError(27,0.01347283);
   data_mc_ratio__490->SetBinError(28,0.01397046);
   data_mc_ratio__490->SetBinError(29,0.03654081);
   data_mc_ratio__490->SetBinError(30,0.058058);
   data_mc_ratio__490->SetBinError(31,0.1288695);
   data_mc_ratio__490->SetMinimum(0.4);
   data_mc_ratio__490->SetMaximum(1.6);
   data_mc_ratio__490->SetEntries(2213.814);
   data_mc_ratio__490->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__490->SetLineColor(ci);
   data_mc_ratio__490->SetLineWidth(2);
   data_mc_ratio__490->SetMarkerStyle(20);
   data_mc_ratio__490->SetMarkerSize(1.2);
   data_mc_ratio__490->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__490->GetXaxis()->SetRange(1,30);
   data_mc_ratio__490->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__490->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__490->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__490->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__490->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__490->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__490->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__490->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__490->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__490->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__490->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__490->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__490->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__490->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__490->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__490->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__490->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1490[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1490[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1490[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1490[30] = {
   0.02711804,
   0.05388818,
   0.02233459,
   0.05616602,
   0.028251,
   0.0335854,
   0.03470523,
   0.04041591,
   0.04389846,
   0.04174229,
   0.05022361,
   0.05513772,
   0.04674947,
   0.05051959,
   0.05772518,
   0.07977908,
   0.07180983,
   0.08952654,
   0.09146323,
   0.08966481,
   0.09960459,
   0.1315188,
   0.09724318,
   0.1084839,
   0.1268194,
   0.1420755,
   0.148961,
   0.2281277,
   0.1087271,
   0.1432084};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1490,Graph_from_mc_statistical_error_fy1490,Graph_from_mc_statistical_error_fex1490,Graph_from_mc_statistical_error_fey1490);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1490 = new TH1F("Graph_Graph_from_mc_statistical_error1490","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1490->SetMinimum(0.7262468);
   Graph_Graph_from_mc_statistical_error1490->SetMaximum(1.273753);
   Graph_Graph_from_mc_statistical_error1490->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1490->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1490->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1490);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_both_16->cd();
   Z_dR_Bj1_both_16->Modified();
   Z_dR_Bj1_both_16->cd();
   Z_dR_Bj1_both_16->SetSelected(Z_dR_Bj1_both_16);
}
