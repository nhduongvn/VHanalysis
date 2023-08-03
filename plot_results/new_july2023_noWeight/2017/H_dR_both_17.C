void H_dR_both_17()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Thu Aug  3 10:21:44 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(0,0,1,1);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetFillStyle(4000);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-67.18133,6.525,67124.14);
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
   st->SetMaximum(57528.58);
   
   TH1F *st_stack_214 = new TH1F("st_stack_214","",30,0,6);
   st_stack_214->SetMinimum(0.01);
   st_stack_214->SetMaximum(60405.01);
   st_stack_214->SetDirectory(0);
   st_stack_214->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_214->SetLineColor(ci);
   st_stack_214->GetXaxis()->SetRange(1,31);
   st_stack_214->GetXaxis()->SetLabelFont(42);
   st_stack_214->GetXaxis()->SetLabelSize(0.035);
   st_stack_214->GetXaxis()->SetTitleSize(0.035);
   st_stack_214->GetXaxis()->SetTitleFont(42);
   st_stack_214->GetYaxis()->SetTitle("Events/0.2");
   st_stack_214->GetYaxis()->SetLabelFont(42);
   st_stack_214->GetYaxis()->SetLabelSize(0.05);
   st_stack_214->GetYaxis()->SetTitleSize(0.057);
   st_stack_214->GetYaxis()->SetTitleOffset(1.2);
   st_stack_214->GetYaxis()->SetTitleFont(42);
   st_stack_214->GetZaxis()->SetLabelFont(42);
   st_stack_214->GetZaxis()->SetLabelSize(0.035);
   st_stack_214->GetZaxis()->SetTitleSize(0.035);
   st_stack_214->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_214);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,6.808747);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,25205.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,11430.36);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,8852.262);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,7944.704);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,6523.475);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,7266.78);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,6330.931);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,23597.13);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,9649.206);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,9492.783);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,11767.86);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,15028.47);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,16158.81);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,18819.52);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,8821.768);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,9008.05);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,6849.497);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,2422.383);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,2263.626);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1119.069);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,1126.638);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,751.5002);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,165.8196);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,321.169);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,6.808747);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,14865.74);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,1344.735);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,1195.082);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,1130.696);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,957.8486);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,1033.003);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,883.672);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,14858.17);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,1598.493);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1171.786);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,1322.138);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,1552.369);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,1558.909);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,2030.301);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,1076.311);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,1252.309);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,1123.853);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,556.6829);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,611.7719);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,391.7069);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,469.8241);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,384.424);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,52.45741);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,270.1844);
   VbbHcc_both_H_dR_stack_1->SetEntries(10822);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,27.02138);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,37.22601);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,41.01712);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,44.88361);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,40.94499);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,51.87606);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,55.46557);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,63.2423);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,67.75931);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,73.00064);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,81.00716);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,82.89123);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,99.42875);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,103.0386);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,60.69964);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,40.34613);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,26.07712);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,18.90025);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,13.15832);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,7.568472);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,5.337022);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,2.541332);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,1.986667);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.5421503);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.05188141);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,0.04712387);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,2.047515);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,2.37572);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,2.528423);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,2.705278);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,2.438135);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,2.837832);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,2.974578);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,3.183084);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,3.338907);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,3.408833);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,3.515279);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,3.486083);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,3.908999);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,4.028774);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,3.117721);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,2.454928);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,1.907234);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,1.70171);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,1.371979);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.9060866);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.9086665);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.590183);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.5149688);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.1636532);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.05188141);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.04712387);
   VbbHcc_both_H_dR_stack_2->SetEntries(12820);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_stack_3 = new TH1D("VbbHcc_both_H_dR_stack_3","",30,0,6);
   VbbHcc_both_H_dR_stack_3->SetBinContent(2,0.485481);
   VbbHcc_both_H_dR_stack_3->SetBinContent(3,517.0398);
   VbbHcc_both_H_dR_stack_3->SetBinContent(4,831.2735);
   VbbHcc_both_H_dR_stack_3->SetBinContent(5,956.6717);
   VbbHcc_both_H_dR_stack_3->SetBinContent(6,1071.126);
   VbbHcc_both_H_dR_stack_3->SetBinContent(7,1099.552);
   VbbHcc_both_H_dR_stack_3->SetBinContent(8,1130.252);
   VbbHcc_both_H_dR_stack_3->SetBinContent(9,1141.868);
   VbbHcc_both_H_dR_stack_3->SetBinContent(10,1208.961);
   VbbHcc_both_H_dR_stack_3->SetBinContent(11,1322.185);
   VbbHcc_both_H_dR_stack_3->SetBinContent(12,1451.727);
   VbbHcc_both_H_dR_stack_3->SetBinContent(13,1595.02);
   VbbHcc_both_H_dR_stack_3->SetBinContent(14,1718.399);
   VbbHcc_both_H_dR_stack_3->SetBinContent(15,1848.831);
   VbbHcc_both_H_dR_stack_3->SetBinContent(16,1854.03);
   VbbHcc_both_H_dR_stack_3->SetBinContent(17,1065.329);
   VbbHcc_both_H_dR_stack_3->SetBinContent(18,668.0929);
   VbbHcc_both_H_dR_stack_3->SetBinContent(19,431.88);
   VbbHcc_both_H_dR_stack_3->SetBinContent(20,278.3952);
   VbbHcc_both_H_dR_stack_3->SetBinContent(21,174.193);
   VbbHcc_both_H_dR_stack_3->SetBinContent(22,107.1109);
   VbbHcc_both_H_dR_stack_3->SetBinContent(23,61.78832);
   VbbHcc_both_H_dR_stack_3->SetBinContent(24,35.87497);
   VbbHcc_both_H_dR_stack_3->SetBinContent(25,15.6543);
   VbbHcc_both_H_dR_stack_3->SetBinContent(26,7.511755);
   VbbHcc_both_H_dR_stack_3->SetBinContent(27,2.94795);
   VbbHcc_both_H_dR_stack_3->SetBinContent(28,1.095235);
   VbbHcc_both_H_dR_stack_3->SetBinContent(29,0.07035638);
   VbbHcc_both_H_dR_stack_3->SetBinError(2,0.1752386);
   VbbHcc_both_H_dR_stack_3->SetBinError(3,5.683402);
   VbbHcc_both_H_dR_stack_3->SetBinError(4,7.233916);
   VbbHcc_both_H_dR_stack_3->SetBinError(5,7.800855);
   VbbHcc_both_H_dR_stack_3->SetBinError(6,8.254595);
   VbbHcc_both_H_dR_stack_3->SetBinError(7,8.336535);
   VbbHcc_both_H_dR_stack_3->SetBinError(8,8.444148);
   VbbHcc_both_H_dR_stack_3->SetBinError(9,8.465576);
   VbbHcc_both_H_dR_stack_3->SetBinError(10,8.677797);
   VbbHcc_both_H_dR_stack_3->SetBinError(11,9.080859);
   VbbHcc_both_H_dR_stack_3->SetBinError(12,9.499534);
   VbbHcc_both_H_dR_stack_3->SetBinError(13,9.973049);
   VbbHcc_both_H_dR_stack_3->SetBinError(14,10.34883);
   VbbHcc_both_H_dR_stack_3->SetBinError(15,10.75957);
   VbbHcc_both_H_dR_stack_3->SetBinError(16,10.77611);
   VbbHcc_both_H_dR_stack_3->SetBinError(17,8.13646);
   VbbHcc_both_H_dR_stack_3->SetBinError(18,6.449209);
   VbbHcc_both_H_dR_stack_3->SetBinError(19,5.162663);
   VbbHcc_both_H_dR_stack_3->SetBinError(20,4.128826);
   VbbHcc_both_H_dR_stack_3->SetBinError(21,3.26393);
   VbbHcc_both_H_dR_stack_3->SetBinError(22,2.55838);
   VbbHcc_both_H_dR_stack_3->SetBinError(23,1.948323);
   VbbHcc_both_H_dR_stack_3->SetBinError(24,1.481633);
   VbbHcc_both_H_dR_stack_3->SetBinError(25,0.977725);
   VbbHcc_both_H_dR_stack_3->SetBinError(26,0.6816007);
   VbbHcc_both_H_dR_stack_3->SetBinError(27,0.4277919);
   VbbHcc_both_H_dR_stack_3->SetBinError(28,0.2581168);
   VbbHcc_both_H_dR_stack_3->SetBinError(29,0.07035638);
   VbbHcc_both_H_dR_stack_3->SetEntries(345543);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_stack_4 = new TH1D("VbbHcc_both_H_dR_stack_4","",30,0,6);
   VbbHcc_both_H_dR_stack_4->SetBinContent(3,117.8395);
   VbbHcc_both_H_dR_stack_4->SetBinContent(4,165.6358);
   VbbHcc_both_H_dR_stack_4->SetBinContent(5,146.7824);
   VbbHcc_both_H_dR_stack_4->SetBinContent(6,109.6494);
   VbbHcc_both_H_dR_stack_4->SetBinContent(7,104.1594);
   VbbHcc_both_H_dR_stack_4->SetBinContent(8,102.6118);
   VbbHcc_both_H_dR_stack_4->SetBinContent(9,124.8869);
   VbbHcc_both_H_dR_stack_4->SetBinContent(10,112.0749);
   VbbHcc_both_H_dR_stack_4->SetBinContent(11,139.6922);
   VbbHcc_both_H_dR_stack_4->SetBinContent(12,172.1688);
   VbbHcc_both_H_dR_stack_4->SetBinContent(13,173.1338);
   VbbHcc_both_H_dR_stack_4->SetBinContent(14,207.2948);
   VbbHcc_both_H_dR_stack_4->SetBinContent(15,222.2601);
   VbbHcc_both_H_dR_stack_4->SetBinContent(16,234.0565);
   VbbHcc_both_H_dR_stack_4->SetBinContent(17,121.451);
   VbbHcc_both_H_dR_stack_4->SetBinContent(18,86.75134);
   VbbHcc_both_H_dR_stack_4->SetBinContent(19,44.73114);
   VbbHcc_both_H_dR_stack_4->SetBinContent(20,27.13557);
   VbbHcc_both_H_dR_stack_4->SetBinContent(21,19.19515);
   VbbHcc_both_H_dR_stack_4->SetBinContent(22,11.74828);
   VbbHcc_both_H_dR_stack_4->SetBinContent(23,5.93083);
   VbbHcc_both_H_dR_stack_4->SetBinContent(24,2.488118);
   VbbHcc_both_H_dR_stack_4->SetBinContent(25,2.419363);
   VbbHcc_both_H_dR_stack_4->SetBinContent(26,0.8814548);
   VbbHcc_both_H_dR_stack_4->SetBinContent(27,0.1746112);
   VbbHcc_both_H_dR_stack_4->SetBinError(3,6.72245);
   VbbHcc_both_H_dR_stack_4->SetBinError(4,7.349308);
   VbbHcc_both_H_dR_stack_4->SetBinError(5,8.170645);
   VbbHcc_both_H_dR_stack_4->SetBinError(6,5.558561);
   VbbHcc_both_H_dR_stack_4->SetBinError(7,6.551907);
   VbbHcc_both_H_dR_stack_4->SetBinError(8,5.897995);
   VbbHcc_both_H_dR_stack_4->SetBinError(9,9.442471);
   VbbHcc_both_H_dR_stack_4->SetBinError(10,6.163476);
   VbbHcc_both_H_dR_stack_4->SetBinError(11,8.058609);
   VbbHcc_both_H_dR_stack_4->SetBinError(12,10.26634);
   VbbHcc_both_H_dR_stack_4->SetBinError(13,8.40978);
   VbbHcc_both_H_dR_stack_4->SetBinError(14,10.28369);
   VbbHcc_both_H_dR_stack_4->SetBinError(15,8.652406);
   VbbHcc_both_H_dR_stack_4->SetBinError(16,9.454378);
   VbbHcc_both_H_dR_stack_4->SetBinError(17,6.850801);
   VbbHcc_both_H_dR_stack_4->SetBinError(18,7.699496);
   VbbHcc_both_H_dR_stack_4->SetBinError(19,4.000751);
   VbbHcc_both_H_dR_stack_4->SetBinError(20,2.27197);
   VbbHcc_both_H_dR_stack_4->SetBinError(21,2.001292);
   VbbHcc_both_H_dR_stack_4->SetBinError(22,1.615129);
   VbbHcc_both_H_dR_stack_4->SetBinError(23,1.084591);
   VbbHcc_both_H_dR_stack_4->SetBinError(24,0.6982782);
   VbbHcc_both_H_dR_stack_4->SetBinError(25,0.7674977);
   VbbHcc_both_H_dR_stack_4->SetBinError(26,0.5156938);
   VbbHcc_both_H_dR_stack_4->SetBinError(27,0.1269889);
   VbbHcc_both_H_dR_stack_4->SetEntries(17765);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,11.50566);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,14.16195);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,12.08554);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,7.296926);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,19.17112);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,10.59232);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,12.57925);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,20.35762);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,15.85788);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,14.17358);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,15.04429);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,23.47272);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,26.19981);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,20.47125);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,10.19946);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,7.363529);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,5.481668);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,6.461184);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,4.03202);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,2.892249);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,0.9557553);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,0.4752623);
   VbbHcc_both_H_dR_stack_5->SetBinContent(27,0.1763629);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,1.638048);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,2.587196);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,2.290362);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,0.9252759);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,6.959989);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,2.216943);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,2.753838);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,6.943995);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,3.083303);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,2.108704);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,2.106605);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,3.546443);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,3.37429);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,2.794947);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,1.899442);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,0.9978776);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,0.8840157);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,1.827211);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,1.346814);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,1.281337);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,0.3577228);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,0.1877653);
   VbbHcc_both_H_dR_stack_5->SetBinError(27,0.1763629);
   VbbHcc_both_H_dR_stack_5->SetEntries(2446);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_stack_6 = new TH1D("VbbHcc_both_H_dR_stack_6","",30,0,6);
   VbbHcc_both_H_dR_stack_6->SetBinContent(3,0.3153059);
   VbbHcc_both_H_dR_stack_6->SetBinContent(16,0.6306118);
   VbbHcc_both_H_dR_stack_6->SetBinContent(19,0.3153059);
   VbbHcc_both_H_dR_stack_6->SetBinContent(24,0.3153059);
   VbbHcc_both_H_dR_stack_6->SetBinError(3,0.3153059);
   VbbHcc_both_H_dR_stack_6->SetBinError(16,0.4459099);
   VbbHcc_both_H_dR_stack_6->SetBinError(19,0.3153059);
   VbbHcc_both_H_dR_stack_6->SetBinError(24,0.3153059);
   VbbHcc_both_H_dR_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_stack_7 = new TH1D("VbbHcc_both_H_dR_stack_7","",30,0,6);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,0.2479422);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,0.9917687);
   VbbHcc_both_H_dR_stack_7->SetBinContent(6,0.4958844);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,0.2479422);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,0.2479422);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,0.7438266);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,1.239711);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,0.7438266);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,0.7438266);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,0.2479422);
   VbbHcc_both_H_dR_stack_7->SetBinContent(19,0.2479422);
   VbbHcc_both_H_dR_stack_7->SetBinContent(21,0.2479422);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,0.2479422);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,0.4958844);
   VbbHcc_both_H_dR_stack_7->SetBinError(6,0.3506432);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,0.2479422);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,0.2479422);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,0.4294485);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,0.5544156);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,0.4294485);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,0.4294485);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,0.2479422);
   VbbHcc_both_H_dR_stack_7->SetBinError(19,0.2479422);
   VbbHcc_both_H_dR_stack_7->SetBinError(21,0.2479422);
   VbbHcc_both_H_dR_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,4.811287);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,4.05161);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,6.33064);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,3.291933);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,2.025805);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,0.5064512);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,0.5064512);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,1.012902);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,1.012902);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,2.025805);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,0.2532256);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,3.798384);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,5.824189);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,7.343543);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,1.519354);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,1.012902);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_both_H_dR_stack_8->SetBinContent(20,0.7596768);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,1.103785);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,1.012902);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.266128);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,0.9130179);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.7162302);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.3581151);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.3581151);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.5064512);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,0.5064512);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,0.7162302);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,0.2532256);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,0.9807386);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.214427);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,1.363662);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,0.6202735);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.5064512);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.3581151);
   VbbHcc_both_H_dR_stack_8->SetBinError(20,0.4385996);
   VbbHcc_both_H_dR_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_stack_9 = new TH1D("VbbHcc_both_H_dR_stack_9","",30,0,6);
   VbbHcc_both_H_dR_stack_9->SetBinContent(3,2.708551);
   VbbHcc_both_H_dR_stack_9->SetBinContent(4,5.124766);
   VbbHcc_both_H_dR_stack_9->SetBinContent(5,5.278202);
   VbbHcc_both_H_dR_stack_9->SetBinContent(6,4.215455);
   VbbHcc_both_H_dR_stack_9->SetBinContent(7,3.023499);
   VbbHcc_both_H_dR_stack_9->SetBinContent(8,1.821852);
   VbbHcc_both_H_dR_stack_9->SetBinContent(9,1.351853);
   VbbHcc_both_H_dR_stack_9->SetBinContent(10,1.201647);
   VbbHcc_both_H_dR_stack_9->SetBinContent(11,1.576354);
   VbbHcc_both_H_dR_stack_9->SetBinContent(12,2.182023);
   VbbHcc_both_H_dR_stack_9->SetBinContent(13,2.960509);
   VbbHcc_both_H_dR_stack_9->SetBinContent(14,3.772913);
   VbbHcc_both_H_dR_stack_9->SetBinContent(15,4.601468);
   VbbHcc_both_H_dR_stack_9->SetBinContent(16,4.751674);
   VbbHcc_both_H_dR_stack_9->SetBinContent(17,1.666801);
   VbbHcc_both_H_dR_stack_9->SetBinContent(18,0.6185898);
   VbbHcc_both_H_dR_stack_9->SetBinContent(19,0.2519582);
   VbbHcc_both_H_dR_stack_9->SetBinContent(20,0.1098279);
   VbbHcc_both_H_dR_stack_9->SetBinContent(21,0.06783491);
   VbbHcc_both_H_dR_stack_9->SetBinContent(22,0.04522327);
   VbbHcc_both_H_dR_stack_9->SetBinContent(23,0.02099652);
   VbbHcc_both_H_dR_stack_9->SetBinContent(24,0.01130582);
   VbbHcc_both_H_dR_stack_9->SetBinContent(25,0.001615117);
   VbbHcc_both_H_dR_stack_9->SetBinContent(26,0.001615117);
   VbbHcc_both_H_dR_stack_9->SetBinContent(27,0.001615117);
   VbbHcc_both_H_dR_stack_9->SetBinContent(28,0.001615117);
   VbbHcc_both_H_dR_stack_9->SetBinError(3,0.06614096);
   VbbHcc_both_H_dR_stack_9->SetBinError(4,0.09097855);
   VbbHcc_both_H_dR_stack_9->SetBinError(5,0.09233046);
   VbbHcc_both_H_dR_stack_9->SetBinError(6,0.08251335);
   VbbHcc_both_H_dR_stack_9->SetBinError(7,0.06988064);
   VbbHcc_both_H_dR_stack_9->SetBinError(8,0.05424485);
   VbbHcc_both_H_dR_stack_9->SetBinError(9,0.04672687);
   VbbHcc_both_H_dR_stack_9->SetBinError(10,0.04405451);
   VbbHcc_both_H_dR_stack_9->SetBinError(11,0.05045786);
   VbbHcc_both_H_dR_stack_9->SetBinError(12,0.05936516);
   VbbHcc_both_H_dR_stack_9->SetBinError(13,0.06914889);
   VbbHcc_both_H_dR_stack_9->SetBinError(14,0.07806213);
   VbbHcc_both_H_dR_stack_9->SetBinError(15,0.08620852);
   VbbHcc_both_H_dR_stack_9->SetBinError(16,0.08760427);
   VbbHcc_both_H_dR_stack_9->SetBinError(17,0.05188524);
   VbbHcc_both_H_dR_stack_9->SetBinError(18,0.03160846);
   VbbHcc_both_H_dR_stack_9->SetBinError(19,0.0201728);
   VbbHcc_both_H_dR_stack_9->SetBinError(20,0.01331859);
   VbbHcc_both_H_dR_stack_9->SetBinError(21,0.01046715);
   VbbHcc_both_H_dR_stack_9->SetBinError(22,0.008546395);
   VbbHcc_both_H_dR_stack_9->SetBinError(23,0.005823387);
   VbbHcc_both_H_dR_stack_9->SetBinError(24,0.004273198);
   VbbHcc_both_H_dR_stack_9->SetBinError(25,0.001615117);
   VbbHcc_both_H_dR_stack_9->SetBinError(26,0.001615117);
   VbbHcc_both_H_dR_stack_9->SetBinError(27,0.001615117);
   VbbHcc_both_H_dR_stack_9->SetBinError(28,0.001615117);
   VbbHcc_both_H_dR_stack_9->SetEntries(29329);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_stack_10 = new TH1D("VbbHcc_both_H_dR_stack_10","",30,0,6);
   VbbHcc_both_H_dR_stack_10->SetBinContent(2,0.0004146255);
   VbbHcc_both_H_dR_stack_10->SetBinContent(3,0.8139099);
   VbbHcc_both_H_dR_stack_10->SetBinContent(4,1.739769);
   VbbHcc_both_H_dR_stack_10->SetBinContent(5,2.092615);
   VbbHcc_both_H_dR_stack_10->SetBinContent(6,2.043689);
   VbbHcc_both_H_dR_stack_10->SetBinContent(7,1.618698);
   VbbHcc_both_H_dR_stack_10->SetBinContent(8,1.192463);
   VbbHcc_both_H_dR_stack_10->SetBinContent(9,0.8984935);
   VbbHcc_both_H_dR_stack_10->SetBinContent(10,0.8072759);
   VbbHcc_both_H_dR_stack_10->SetBinContent(11,0.900152);
   VbbHcc_both_H_dR_stack_10->SetBinContent(12,1.114928);
   VbbHcc_both_H_dR_stack_10->SetBinContent(13,1.320997);
   VbbHcc_both_H_dR_stack_10->SetBinContent(14,1.548626);
   VbbHcc_both_H_dR_stack_10->SetBinContent(15,1.734793);
   VbbHcc_both_H_dR_stack_10->SetBinContent(16,1.680477);
   VbbHcc_both_H_dR_stack_10->SetBinContent(17,0.6882784);
   VbbHcc_both_H_dR_stack_10->SetBinContent(18,0.3051644);
   VbbHcc_both_H_dR_stack_10->SetBinContent(19,0.1455336);
   VbbHcc_both_H_dR_stack_10->SetBinContent(20,0.07836423);
   VbbHcc_both_H_dR_stack_10->SetBinContent(21,0.04643806);
   VbbHcc_both_H_dR_stack_10->SetBinContent(22,0.02156053);
   VbbHcc_both_H_dR_stack_10->SetBinContent(23,0.009951013);
   VbbHcc_both_H_dR_stack_10->SetBinContent(24,0.00746326);
   VbbHcc_both_H_dR_stack_10->SetBinContent(25,0.002902379);
   VbbHcc_both_H_dR_stack_10->SetBinContent(26,0.0008292511);
   VbbHcc_both_H_dR_stack_10->SetBinContent(27,0.0004146255);
   VbbHcc_both_H_dR_stack_10->SetBinError(2,0.0004146255);
   VbbHcc_both_H_dR_stack_10->SetBinError(3,0.0183703);
   VbbHcc_both_H_dR_stack_10->SetBinError(4,0.02685801);
   VbbHcc_both_H_dR_stack_10->SetBinError(5,0.02945593);
   VbbHcc_both_H_dR_stack_10->SetBinError(6,0.02910955);
   VbbHcc_both_H_dR_stack_10->SetBinError(7,0.02590663);
   VbbHcc_both_H_dR_stack_10->SetBinError(8,0.02223568);
   VbbHcc_both_H_dR_stack_10->SetBinError(9,0.01930125);
   VbbHcc_both_H_dR_stack_10->SetBinError(10,0.01829528);
   VbbHcc_both_H_dR_stack_10->SetBinError(11,0.01931906);
   VbbHcc_both_H_dR_stack_10->SetBinError(12,0.02150064);
   VbbHcc_both_H_dR_stack_10->SetBinError(13,0.0234034);
   VbbHcc_both_H_dR_stack_10->SetBinError(14,0.02533969);
   VbbHcc_both_H_dR_stack_10->SetBinError(15,0.02681957);
   VbbHcc_both_H_dR_stack_10->SetBinError(16,0.02639638);
   VbbHcc_both_H_dR_stack_10->SetBinError(17,0.01689313);
   VbbHcc_both_H_dR_stack_10->SetBinError(18,0.01124851);
   VbbHcc_both_H_dR_stack_10->SetBinError(19,0.007768007);
   VbbHcc_both_H_dR_stack_10->SetBinError(20,0.005700159);
   VbbHcc_both_H_dR_stack_10->SetBinError(21,0.004387984);
   VbbHcc_both_H_dR_stack_10->SetBinError(22,0.002989907);
   VbbHcc_both_H_dR_stack_10->SetBinError(23,0.002031242);
   VbbHcc_both_H_dR_stack_10->SetBinError(24,0.001759107);
   VbbHcc_both_H_dR_stack_10->SetBinError(25,0.001096996);
   VbbHcc_both_H_dR_stack_10->SetBinError(26,0.0005863691);
   VbbHcc_both_H_dR_stack_10->SetBinError(27,0.0004146255);
   VbbHcc_both_H_dR_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(3,0.003160502);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.01896301);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.007901256);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.01896301);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.02054326);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.01580251);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.006321005);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.004740753);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.006321005);
   VbbHcc_both_H_dR_stack_11->SetBinContent(12,0.007901256);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.007901256);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.004740753);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.006321005);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.007901256);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.007901256);
   VbbHcc_both_H_dR_stack_11->SetBinContent(18,0.001580251);
   VbbHcc_both_H_dR_stack_11->SetBinContent(20,0.001580251);
   VbbHcc_both_H_dR_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_both_H_dR_stack_11->SetBinError(3,0.002234813);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.005474151);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.003533549);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.005474151);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.005697677);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.004997193);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.003160502);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.002737075);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.003160502);
   VbbHcc_both_H_dR_stack_11->SetBinError(12,0.003533549);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.003533549);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.002737075);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.003160502);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.003533549);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.003533549);
   VbbHcc_both_H_dR_stack_11->SetBinError(18,0.001580251);
   VbbHcc_both_H_dR_stack_11->SetBinError(20,0.001580251);
   VbbHcc_both_H_dR_stack_11->SetBinError(21,0.001580251);
   VbbHcc_both_H_dR_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.002076057);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.003114085);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.005605353);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.005812958);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.006850987);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.003944507);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.003114085);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.003944507);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.004359719);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.003529296);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.00332169);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.003529296);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.004982536);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.004359719);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.001660845);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.00145324);
   VbbHcc_both_H_dR_stack_12->SetBinContent(19,0.000622817);
   VbbHcc_both_H_dR_stack_12->SetBinContent(20,0.000622817);
   VbbHcc_both_H_dR_stack_12->SetBinContent(21,0.000622817);
   VbbHcc_both_H_dR_stack_12->SetBinContent(23,0.0002076057);
   VbbHcc_both_H_dR_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.0006565067);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.0008040532);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.001078751);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.001098546);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.001192604);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.0009049321);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.0008040532);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.0009049321);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.0009513686);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.00085598);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.0008304226);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.00085598);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.001017056);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.0009513686);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0005871975);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.0005492729);
   VbbHcc_both_H_dR_stack_12->SetBinError(19,0.0003595835);
   VbbHcc_both_H_dR_stack_12->SetBinError(20,0.0003595835);
   VbbHcc_both_H_dR_stack_12->SetBinError(21,0.0003595835);
   VbbHcc_both_H_dR_stack_12->SetBinError(23,0.0002076057);
   VbbHcc_both_H_dR_stack_12->SetBinError(24,0.0002076057);
   VbbHcc_both_H_dR_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR__427 = new TH1D("VbbHcc_both_H_dR__427","",30,0,6);
   VbbHcc_both_H_dR__427->SetBinContent(2,4);
   VbbHcc_both_H_dR__427->SetBinContent(3,3436);
   VbbHcc_both_H_dR__427->SetBinContent(4,4030);
   VbbHcc_both_H_dR__427->SetBinContent(5,3266);
   VbbHcc_both_H_dR__427->SetBinContent(6,3327);
   VbbHcc_both_H_dR__427->SetBinContent(7,3296);
   VbbHcc_both_H_dR__427->SetBinContent(8,3429);
   VbbHcc_both_H_dR__427->SetBinContent(9,3598);
   VbbHcc_both_H_dR__427->SetBinContent(10,4005);
   VbbHcc_both_H_dR__427->SetBinContent(11,4253);
   VbbHcc_both_H_dR__427->SetBinContent(12,4720);
   VbbHcc_both_H_dR__427->SetBinContent(13,5183);
   VbbHcc_both_H_dR__427->SetBinContent(14,5825);
   VbbHcc_both_H_dR__427->SetBinContent(15,6367);
   VbbHcc_both_H_dR__427->SetBinContent(16,6455);
   VbbHcc_both_H_dR__427->SetBinContent(17,3856);
   VbbHcc_both_H_dR__427->SetBinContent(18,2627);
   VbbHcc_both_H_dR__427->SetBinContent(19,1821);
   VbbHcc_both_H_dR__427->SetBinContent(20,1196);
   VbbHcc_both_H_dR__427->SetBinContent(21,837);
   VbbHcc_both_H_dR__427->SetBinContent(22,544);
   VbbHcc_both_H_dR__427->SetBinContent(23,325);
   VbbHcc_both_H_dR__427->SetBinContent(24,217);
   VbbHcc_both_H_dR__427->SetBinContent(25,93);
   VbbHcc_both_H_dR__427->SetBinContent(26,47);
   VbbHcc_both_H_dR__427->SetBinContent(27,18);
   VbbHcc_both_H_dR__427->SetBinContent(28,4);
   VbbHcc_both_H_dR__427->SetEntries(72808);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR__427->SetLineColor(ci);
   VbbHcc_both_H_dR__427->SetLineWidth(2);
   VbbHcc_both_H_dR__427->SetMarkerStyle(20);
   VbbHcc_both_H_dR__427->SetMarkerSize(1.2);
   VbbHcc_both_H_dR__427->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR__427->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__427->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__427->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__427->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__427->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__427->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__427->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__427->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR__427->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__427->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__427->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__427->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__427->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__427->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_fx1427[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_fy1427[30] = {
   0,
   7.294642,
   25887.86,
   12489.84,
   10023.53,
   9187.732,
   7794.246,
   8565.652,
   7668.497,
   25004.79,
   11198.45,
   11209.93,
   13637.85,
   17069.65,
   18368.44,
   21046.28,
   10083.58,
   9812.544,
   7359.134,
   2754.225,
   2474.568,
   1248.456,
   1200.682,
   793.2141,
   185.8845,
   330.1068,
   3.352835,
   1.143974,
   0.07035638,
   0};
   Double_t Graph_from_VbbHcc_both_H_dR_fex1427[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_fey1427[30] = {
   0,
   6.811002,
   14865.74,
   1344.779,
   1195.141,
   1130.744,
   957.936,
   1033.06,
   883.7724,
   14858.17,
   1598.546,
   1171.876,
   1322.209,
   1552.446,
   1558.979,
   2030.358,
   1076.37,
   1252.352,
   1123.874,
   556.7086,
   611.7869,
   391.7218,
   469.8304,
   384.4282,
   52.47466,
   270.1858,
   0.4826287,
   0.2623882,
   0.07035638,
   0};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_fx1427,Graph_from_VbbHcc_both_H_dR_fy1427,Graph_from_VbbHcc_both_H_dR_fex1427,Graph_from_VbbHcc_both_H_dR_fey1427);
   gre->SetName("Graph_from_VbbHcc_both_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR1427 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR1427","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetMaximum(44828.96);
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR1427);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_both_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__428 = new TH1D("data_mc_ratio__428","",30,0,6);
   data_mc_ratio__428->SetBinContent(2,0.5483476);
   data_mc_ratio__428->SetBinContent(3,0.1327263);
   data_mc_ratio__428->SetBinContent(4,0.3226622);
   data_mc_ratio__428->SetBinContent(5,0.3258335);
   data_mc_ratio__428->SetBinContent(6,0.3621133);
   data_mc_ratio__428->SetBinContent(7,0.422876);
   data_mc_ratio__428->SetBinContent(8,0.4003198);
   data_mc_ratio__428->SetBinContent(9,0.4691923);
   data_mc_ratio__428->SetBinContent(10,0.1601693);
   data_mc_ratio__428->SetBinContent(11,0.3797848);
   data_mc_ratio__428->SetBinContent(12,0.4210552);
   data_mc_ratio__428->SetBinContent(13,0.3800453);
   data_mc_ratio__428->SetBinContent(14,0.3412489);
   data_mc_ratio__428->SetBinContent(15,0.3466271);
   data_mc_ratio__428->SetBinContent(16,0.306705);
   data_mc_ratio__428->SetBinContent(17,0.3824039);
   data_mc_ratio__428->SetBinContent(18,0.2677186);
   data_mc_ratio__428->SetBinContent(19,0.2474476);
   data_mc_ratio__428->SetBinContent(20,0.4342419);
   data_mc_ratio__428->SetBinContent(21,0.3382408);
   data_mc_ratio__428->SetBinContent(22,0.4357382);
   data_mc_ratio__428->SetBinContent(23,0.2706796);
   data_mc_ratio__428->SetBinContent(24,0.2735705);
   data_mc_ratio__428->SetBinContent(25,0.5003107);
   data_mc_ratio__428->SetBinContent(26,0.1423781);
   data_mc_ratio__428->SetBinContent(27,5.368591);
   data_mc_ratio__428->SetBinContent(28,3.496584);
   data_mc_ratio__428->SetBinError(2,0.2741738);
   data_mc_ratio__428->SetBinError(3,0.002264281);
   data_mc_ratio__428->SetBinError(4,0.005082713);
   data_mc_ratio__428->SetBinError(5,0.00570148);
   data_mc_ratio__428->SetBinError(6,0.006277954);
   data_mc_ratio__428->SetBinError(7,0.007365792);
   data_mc_ratio__428->SetBinError(8,0.006836334);
   data_mc_ratio__428->SetBinError(9,0.007822046);
   data_mc_ratio__428->SetBinError(10,0.002530917);
   data_mc_ratio__428->SetBinError(11,0.005823577);
   data_mc_ratio__428->SetBinError(12,0.006128695);
   data_mc_ratio__428->SetBinError(13,0.005278916);
   data_mc_ratio__428->SetBinError(14,0.004471191);
   data_mc_ratio__428->SetBinError(15,0.004344052);
   data_mc_ratio__428->SetBinError(16,0.003817445);
   data_mc_ratio__428->SetBinError(17,0.0061582);
   data_mc_ratio__428->SetBinError(18,0.005223342);
   data_mc_ratio__428->SetBinError(19,0.005798668);
   data_mc_ratio__428->SetBinError(20,0.01255643);
   data_mc_ratio__428->SetBinError(21,0.01169131);
   data_mc_ratio__428->SetBinError(22,0.01868212);
   data_mc_ratio__428->SetBinError(23,0.0150146);
   data_mc_ratio__428->SetBinError(24,0.01857118);
   data_mc_ratio__428->SetBinError(25,0.05187981);
   data_mc_ratio__428->SetBinError(26,0.02076799);
   data_mc_ratio__428->SetBinError(27,1.265389);
   data_mc_ratio__428->SetBinError(28,1.748292);
   data_mc_ratio__428->SetMinimum(0.4);
   data_mc_ratio__428->SetMaximum(1.6);
   data_mc_ratio__428->SetEntries(47.90329);
   data_mc_ratio__428->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__428->SetLineColor(ci);
   data_mc_ratio__428->SetLineWidth(2);
   data_mc_ratio__428->SetMarkerStyle(20);
   data_mc_ratio__428->SetMarkerSize(1.2);
   data_mc_ratio__428->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__428->GetXaxis()->SetRange(1,31);
   data_mc_ratio__428->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__428->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__428->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__428->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__428->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__428->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__428->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__428->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__428->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__428->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__428->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__428->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__428->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__428->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__428->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__428->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__428->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1428[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1428[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1428[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1428[30] = {
   0,
   0.9336992,
   0.574236,
   0.1076698,
   0.1192336,
   0.1230711,
   0.122903,
   0.120605,
   0.1152471,
   0.5942129,
   0.1427471,
   0.1045391,
   0.09695143,
   0.09094771,
   0.08487269,
   0.0964711,
   0.1067448,
   0.1276277,
   0.1527183,
   0.2021289,
   0.2472297,
   0.3137649,
   0.3913031,
   0.4846461,
   0.2822972,
   0.81848,
   0.1439465,
   0.2293656,
   1,
   0};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1428,Graph_from_mc_statistical_error_fy1428,Graph_from_mc_statistical_error_fex1428,Graph_from_mc_statistical_error_fey1428);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1428 = new TH1F("Graph_Graph_from_mc_statistical_error1428","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1428->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1428->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1428->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1428->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1428->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1428->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1428);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
