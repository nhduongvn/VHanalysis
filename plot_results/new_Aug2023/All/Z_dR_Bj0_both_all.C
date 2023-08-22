void Z_dR_Bj0_both_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_all/Z_dR_Bj0_both_all
//=========  (Tue Aug 22 09:23:10 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_all = new TCanvas("Z_dR_Bj0_both_all", "Z_dR_Bj0_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_all->SetHighLightColor(2);
   Z_dR_Bj0_both_all->Range(0,0,1,1);
   Z_dR_Bj0_both_all->SetFillColor(0);
   Z_dR_Bj0_both_all->SetFillStyle(4000);
   Z_dR_Bj0_both_all->SetBorderMode(0);
   Z_dR_Bj0_both_all->SetBorderSize(2);
   Z_dR_Bj0_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-322.1002,6.314516,322078.1);
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
   st->SetMinimum(0.3);
   st->SetMaximum(276036.3);
   
   TH1F *st_stack_244 = new TH1F("st_stack_244","",30,0,6);
   st_stack_244->SetMinimum(0.3);
   st_stack_244->SetMaximum(289838.1);
   st_stack_244->SetDirectory(0);
   st_stack_244->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_244->SetLineColor(ci);
   st_stack_244->GetXaxis()->SetRange(1,30);
   st_stack_244->GetXaxis()->SetLabelFont(42);
   st_stack_244->GetXaxis()->SetLabelSize(0.035);
   st_stack_244->GetXaxis()->SetTitleSize(0.035);
   st_stack_244->GetXaxis()->SetTitleFont(42);
   st_stack_244->GetYaxis()->SetTitle("Events/0.2");
   st_stack_244->GetYaxis()->SetLabelFont(42);
   st_stack_244->GetYaxis()->SetLabelSize(0.05);
   st_stack_244->GetYaxis()->SetTitleSize(0.057);
   st_stack_244->GetYaxis()->SetTitleOffset(1.2);
   st_stack_244->GetYaxis()->SetTitleFont(42);
   st_stack_244->GetZaxis()->SetLabelFont(42);
   st_stack_244->GetZaxis()->SetLabelSize(0.035);
   st_stack_244->GetZaxis()->SetTitleSize(0.035);
   st_stack_244->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_244);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(1,23820.97);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(2,97897.48);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(3,112694.9);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(4,66571.73);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(5,49517.07);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(6,42103.08);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(7,26576.9);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(8,26369.11);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(9,21320.05);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(10,40206.3);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(11,15437.43);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(12,15873);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(13,10539.76);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(14,11248.26);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(15,9682.354);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(16,8533.439);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(17,6967.505);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(18,5352.786);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(19,6154.6);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(20,4639.75);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(21,2838.405);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(22,2648.588);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(23,2003.199);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(24,1725.286);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(25,1038.116);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(26,1121.845);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(27,447.977);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(28,541.5429);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(29,137.5162);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(30,57.19232);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(31,99.97819);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(1,1566.043);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(2,4504.468);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(3,17830.85);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(4,4412.898);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(5,3405.21);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(6,3405.597);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(7,2672.495);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(8,2923.025);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(9,2344.651);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(10,17219.49);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(11,1632.896);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(12,2185.121);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(13,1293.885);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(14,1440.078);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(15,1197.518);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(16,1289.412);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(17,1143.387);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(18,1617.34);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(19,1087.598);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(20,916.4239);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(21,568.5001);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(22,655.9587);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(23,487.7856);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(24,529.5653);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(25,330.117);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(26,465.0633);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(27,86.18462);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(28,373.5624);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(29,57.5339);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(30,36.17956);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(31,50.33668);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetEntries(28873);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(1,119.7993);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(2,428.5485);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(3,480.0295);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(4,381.4226);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(5,307.1097);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(6,242.1395);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(7,187.8799);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(8,152.7674);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(9,130.5211);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(10,119.1459);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(11,101.5939);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(12,90.82101);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(13,77.6927);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(14,64.33281);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(15,59.39886);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(16,52.9148);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(17,38.70266);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(18,37.60304);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(19,29.03778);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(20,26.66859);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(21,20.07044);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(22,18.05186);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(23,16.49732);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(24,10.69585);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(25,9.084229);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(26,6.700638);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(27,5.577075);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(28,3.755975);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(29,2.251017);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(30,1.417227);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(31,1.530921);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(1,4.574155);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(2,8.311365);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(3,8.773421);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(4,7.849462);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(5,6.995443);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(6,6.255123);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(7,5.412722);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(8,4.917734);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(9,4.508606);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(10,4.362892);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(11,4.040045);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(12,3.89291);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(13,3.578269);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(14,3.189506);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(15,3.093213);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(16,2.89769);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(17,2.390095);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(18,2.510819);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(19,2.230126);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(20,2.109143);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(21,1.73085);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(22,1.70805);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(23,1.693656);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(24,1.382555);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(25,1.278648);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(26,1.045567);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(27,1.027084);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(28,0.8167884);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(29,0.5923067);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(30,0.4988379);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(31,0.5058362);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetEntries(36867);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(1,1780.687);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(2,8006.463);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(3,9505.548);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(4,8186.401);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(5,6322.208);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(6,4842.124);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(7,3786.971);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(8,3060.565);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(9,2541.041);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(10,2179.619);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(11,1895.274);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(12,1662.609);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(13,1455.01);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(14,1291.279);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(15,1115.952);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(16,974.7777);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(17,827.1451);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(18,708.1164);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(19,609.2765);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(20,484.1453);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(21,400.5186);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(22,312.3374);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(23,249.824);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(24,188.0864);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(25,135.8472);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(26,100.452);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(27,64.45728);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(28,39.94879);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(29,24.93728);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(30,13.10297);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(31,24.85791);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(1,10.89078);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(2,23.04555);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(3,25.14434);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(4,23.33453);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(5,20.50233);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(6,17.9255);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(7,15.84468);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(8,14.24131);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(9,12.97494);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(10,12.02053);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(11,11.21124);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(12,10.50698);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(13,9.828927);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(14,9.258107);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(15,8.610133);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(16,8.042432);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(17,7.418107);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(18,6.8537);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(19,6.364593);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(20,5.65658);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(21,5.142631);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(22,4.533172);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(23,4.07276);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(24,3.523548);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(25,2.986579);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(26,2.579192);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(27,2.060691);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(28,1.615713);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(29,1.275566);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(30,0.9211198);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(31,1.268541);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetEntries(982703);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(1,323.5821);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(2,1259.342);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(3,1325.702);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(4,977.4702);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(5,679.7972);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(6,507.3813);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(7,382.1631);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(8,331.2029);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(9,307.0143);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(10,262.1171);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(11,220.6603);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(12,189.2607);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(13,177.9291);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(14,168.9724);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(15,130.2894);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(16,128.1298);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(17,89.91048);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(18,79.59803);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(19,79.84613);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(20,58.44797);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(21,60.55747);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(22,35.84918);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(23,25.42127);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(24,23.91544);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(25,19.75839);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(26,12.55193);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(27,9.226393);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(28,4.546382);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(29,2.637751);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(30,1.556927);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(31,2.894605);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(1,6.835663);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(2,20.52231);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(3,26.39871);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(4,23.45301);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(5,19.26232);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(6,16.15569);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(7,13.31985);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(8,13.76485);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(9,15.31575);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(10,12.57869);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(11,11.01519);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(12,10.26833);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(13,9.524478);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(14,10.59512);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(15,6.967934);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(16,9.184098);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(17,5.41919);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(18,5.231184);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(19,6.43613);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(20,4.37539);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(21,5.944708);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(22,4.066836);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(23,2.259092);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(24,2.295593);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(25,2.016543);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(26,1.527547);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(27,1.216085);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(28,0.8176758);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(29,0.621391);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(30,0.5444087);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(31,0.7334585);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetEntries(51772);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(1,58.96251);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(2,142.7704);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(3,135.3653);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(4,93.48661);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(5,58.9718);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(6,46.05134);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(7,37.81731);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(8,32.38713);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(9,28.16052);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(10,19.28647);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(11,19.10274);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(12,28.05642);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(13,16.74196);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(14,14.79707);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(15,13.63943);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(16,10.78138);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(17,7.781474);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(18,10.00076);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(19,7.104052);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(20,4.775486);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(21,5.800829);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(22,7.319795);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(23,6.407533);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(24,1.746265);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(25,2.709312);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(26,3.782646);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(27,1.164213);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(28,1.210748);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(29,0.5396671);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(30,0.09261936);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(31,0.3706661);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(1,5.567108);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(2,10.17392);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(3,13.74708);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(4,14.20047);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(5,5.887133);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(6,4.729332);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(7,4.883183);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(8,4.364513);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(9,3.580244);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(10,3.38354);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(11,3.46914);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(12,5.154873);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(13,2.848908);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(14,2.56675);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(15,2.354712);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(16,2.248837);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(17,1.116343);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(18,2.581203);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(19,1.524475);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(20,0.8729378);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(21,1.495838);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(22,2.568746);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(23,1.927345);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(24,0.4140406);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(25,0.6164006);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(26,1.370461);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(27,0.3557002);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(28,0.4339862);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(29,0.2255428);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(30,0.09122582);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(31,0.2184314);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetEntries(7913);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(1,0.722046);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(2,0.1511118);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(3,1.201546);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(5,0.4664177);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(7,0.6175295);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(8,0.1511118);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(11,0.4664177);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(12,0.1511118);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(19,0.1511118);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(21,0.1511118);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(1,0.5905934);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(2,0.1511118);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(3,0.7244318);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(5,0.3496464);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(7,0.3809033);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(8,0.1511118);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(11,0.3496464);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(12,0.1511118);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(19,0.1511118);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(21,0.1511118);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetEntries(17);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(1,0.6831593);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(2,1.010026);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(3,2.436022);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(4,0.3366753);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(5,0.427531);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(6,0.2244502);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(7,0.427531);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(8,0.2244502);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(9,0.4489005);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(10,0.4489005);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(11,0.5397561);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(12,0.2244502);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(13,0.1122251);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(14,0.1122251);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(15,0.1122251);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(16,0.1122251);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(17,0.1122251);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(19,0.1122251);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(20,0.1122251);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(1,0.5818594);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(2,0.3366753);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(3,0.8144573);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(4,0.1943796);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(5,0.3346824);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(6,0.1587103);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(7,0.3346824);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(8,0.1587103);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(9,0.2244502);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(10,0.2244502);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(11,0.3529968);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(12,0.1587103);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(13,0.1122251);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(14,0.1122251);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(15,0.1122251);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(16,0.1122251);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(17,0.1122251);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(19,0.1122251);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(20,0.1122251);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetEntries(56);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(1,8.813976);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(2,30.99066);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(3,29.0327);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(4,16.13273);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(5,10.46221);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(6,6.031639);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(7,6.787656);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(8,5.765577);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(9,6.682901);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(10,5.922709);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(11,3.701261);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(12,4.591367);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(13,2.168556);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(14,2.182422);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(15,2.156234);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(16,2.156234);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(17,1.291802);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(18,1.370368);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(19,1.344694);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(20,1.078117);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(21,0.2660625);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(23,1.305154);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(24,1.077602);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(25,1.078117);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(26,0.7987025);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(28,0.2660625);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(1,1.535985);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(2,2.880018);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(3,2.783079);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(4,2.084525);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(5,1.676683);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(6,1.258554);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(7,1.358546);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(8,1.23011);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(9,1.337853);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(10,1.263671);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(11,0.9900433);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(12,1.114309);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(13,0.7669181);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(14,0.7720516);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(15,0.7629642);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(16,0.7629642);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(17,0.5778825);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(18,0.6130217);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(19,0.6020495);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(20,0.5394972);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(21,0.2660625);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(23,0.58415);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(24,0.538925);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(25,0.5394972);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(26,0.4615028);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(28,0.2660625);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetEntries(574);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(1,6.023109);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(2,27.65688);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(3,28.78751);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(4,19.49696);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(5,12.44182);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(6,8.445255);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(7,6.388506);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(8,5.586885);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(9,4.991614);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(10,4.566454);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(11,4.388029);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(12,4.159181);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(13,3.480231);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(14,2.783088);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(15,2.353348);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(16,1.940291);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(17,1.557114);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(18,1.155274);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(19,0.8810424);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(20,0.6799189);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(21,0.6384705);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(22,0.534814);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(23,0.4433859);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(24,0.3456088);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(25,0.28376);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(26,0.1989188);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(27,0.1356403);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(28,0.06544901);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(29,0.02750991);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(30,0.001373951);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(31,0.008660942);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(1,0.1126121);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(2,0.2410728);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(3,0.2438669);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(4,0.1991159);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(5,0.1589208);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(6,0.1317343);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(7,0.1142339);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(8,0.107995);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(9,0.1013972);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(10,0.09673795);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(11,0.0953197);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(12,0.09322093);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(13,0.08465139);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(14,0.07582276);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(15,0.0690777);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(16,0.0635127);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(17,0.05681082);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(18,0.04838565);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(19,0.04228315);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(20,0.03737424);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(21,0.03601744);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(22,0.03314684);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(23,0.03067911);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(24,0.02667878);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(25,0.02492869);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(26,0.02036388);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(27,0.01677379);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(28,0.01182436);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(29,0.007751504);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(30,0.001373951);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(31,0.004536675);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetEntries(80589);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(1,2.246729);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(2,10.91871);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(3,13.17031);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(4,9.667103);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(5,6.417138);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(6,4.335992);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(7,3.17042);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(8,2.654192);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(9,2.11199);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(10,2.066536);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(11,1.832772);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(12,1.501607);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(13,1.337648);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(14,1.168819);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(15,1.076287);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(16,0.8538869);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(17,0.7207714);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(18,0.5990195);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(19,0.4496705);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(20,0.4107098);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(21,0.3084382);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(22,0.2905813);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(23,0.2597375);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(24,0.1509724);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(25,0.1217519);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(26,0.06818108);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(27,0.05519421);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(28,0.01623359);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(29,0.01948031);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(30,0.001623359);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(31,0.001623359);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(1,0.03572101);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(2,0.07874702);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(3,0.08648613);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(4,0.07409631);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(5,0.06036971);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(6,0.0496241);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(7,0.0424333);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(8,0.03882528);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(9,0.03463334);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(10,0.03425862);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(11,0.03226285);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(12,0.02920294);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(13,0.02756254);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(14,0.02576451);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(15,0.02472364);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(16,0.02202158);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(17,0.02023239);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(18,0.01844458);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(19,0.01598069);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(20,0.0152727);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(21,0.01323526);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(22,0.01284642);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(23,0.01214551);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(24,0.009259706);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(25,0.008315461);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(26,0.006222721);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(27,0.005598803);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(28,0.003036377);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(29,0.003326184);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(30,0.0009601867);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(31,0.0009601867);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetEntries(125673);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(1,0.03042261);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(2,0.1194014);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(3,0.09171379);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(4,0.0631077);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(5,0.02023231);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(6,0.01430305);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(7,0.01245278);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(8,0.01703805);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(9,0.008866782);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(10,0.01114254);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(11,0.00589551);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(12,0.007286531);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(14,0.01568078);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(15,0.003160502);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(17,0.003856013);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(18,0.005436264);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(1,0.007993508);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(2,0.01587278);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(3,0.01398318);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(4,0.01159789);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(5,0.006911644);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(6,0.005523506);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(7,0.004779556);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(8,0.006163553);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(9,0.004509506);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(10,0.005051211);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(11,0.003531947);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(12,0.004223559);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(13,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(14,0.006116588);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(15,0.002234813);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(16,0.002275762);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(17,0.002770611);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(18,0.003189589);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(21,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetEntries(215);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(1,0.008669796);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(2,0.0524718);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(3,0.04262817);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(4,0.03102171);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(5,0.01686643);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(6,0.009406205);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(7,0.005994425);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(8,0.005071952);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(9,0.006028531);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(10,0.003989552);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(11,0.004691519);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(12,0.003250844);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(13,0.002535976);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(14,0.001821444);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(15,0.001014525);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(16,0.003458113);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(17,0.002501534);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(18,0.001521787);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(19,0.001671448);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(20,0.001971104);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(21,0.0007724772);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(22,0.0007148681);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(23,0.001014525);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(24,0.0008069192);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(25,0.0009565794);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(27,0.0005072625);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(1,0.001522233);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(2,0.003898372);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(3,0.003518717);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(4,0.00297942);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(5,0.002142341);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(6,0.001640349);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(7,0.001306371);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(8,0.001219635);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(9,0.001339678);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(10,0.0009829406);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(11,0.001153636);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(12,0.0009590356);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(13,0.0008624122);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(14,0.0006989114);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(15,0.0005155469);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(16,0.001020849);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(17,0.0008572663);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(18,0.0006314134);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(19,0.0006951415);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(20,0.0007569781);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(21,0.0004624274);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(22,0.0004195169);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(23,0.0005155469);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(24,0.0004718988);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(25,0.0005542809);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(27,0.0003645467);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all__670 = new TH1D("VbbHcc_both_Z_dR_Bj0_all__670","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(1,21856);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(2,81293);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(3,74815);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(4,55547);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(5,42612);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(6,32809);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(7,26045);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(8,21337);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(9,18148);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(10,15491);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(11,13707);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(12,12397);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(13,10829);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(14,9683);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(15,8516);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(16,7397);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(17,6090);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(18,5356);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(19,4615);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(20,3726);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(21,3210);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(22,2647);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(23,2079);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(24,1701);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(25,1326);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(26,1016);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(27,673);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(28,411);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(29,264);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(30,132);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(31,221);
   VbbHcc_both_Z_dR_Bj0_all__670->SetEntries(485978);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all__670->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all__670->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj0_all__670->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj0_all__670->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj0_all__670->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all__670->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all__670->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_all_fx1487[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_all_fy1487[30] = {
   26122.53,
   107805.5,
   124216.3,
   76256.24,
   56915.41,
   47759.84,
   30989.14,
   29960.43,
   24341.04,
   42799.48,
   17685,
   17854.39,
   12274.24,
   12793.91,
   11007.34,
   9705.111,
   7934.733,
   6191.236,
   6882.805,
   5216.07,
   3326.719,
   3022.973,
   2303.361,
   1951.305,
   1207,
   1246.399,
   528.5933,
   591.3525,
   167.9289,
   73.36506};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_all_fex1487[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_all_fey1487[30] = {
   1566.113,
   4504.594,
   17830.9,
   4413.052,
   3405.339,
   3405.692,
   2672.586,
   2923.1,
   2344.744,
   17219.5,
   1632.981,
   2185.18,
   1293.966,
   1440.153,
   1197.576,
   1289.476,
   1143.427,
   1617.367,
   1087.639,
   916.4548,
   568.5591,
   655.9942,
   487.815,
   529.5843,
   330.1401,
   465.0764,
   86.22468,
   373.568,
   57.55488,
   36.19893};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj0_all_fx1487,Graph_from_VbbHcc_both_Z_dR_Bj0_all_fy1487,Graph_from_VbbHcc_both_Z_dR_Bj0_all_fex1487,Graph_from_VbbHcc_both_Z_dR_Bj0_all_fey1487);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetMinimum(33.44951);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetMaximum(156248.2);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj0_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__671 = new TH1D("data_mc_ratio__671","",30,0,6);
   data_mc_ratio__671->SetBinContent(1,0.8366725);
   data_mc_ratio__671->SetBinContent(2,0.7540709);
   data_mc_ratio__671->SetBinContent(3,0.6022961);
   data_mc_ratio__671->SetBinContent(4,0.7284257);
   data_mc_ratio__671->SetBinContent(5,0.74869);
   data_mc_ratio__671->SetBinContent(6,0.6869579);
   data_mc_ratio__671->SetBinContent(7,0.8404557);
   data_mc_ratio__671->SetBinContent(8,0.7121726);
   data_mc_ratio__671->SetBinContent(9,0.7455722);
   data_mc_ratio__671->SetBinContent(10,0.3619436);
   data_mc_ratio__671->SetBinContent(11,0.7750637);
   data_mc_ratio__671->SetBinContent(12,0.6943392);
   data_mc_ratio__671->SetBinContent(13,0.8822542);
   data_mc_ratio__671->SetBinContent(14,0.7568445);
   data_mc_ratio__671->SetBinContent(15,0.7736659);
   data_mc_ratio__671->SetBinContent(16,0.7621757);
   data_mc_ratio__671->SetBinContent(17,0.7675116);
   data_mc_ratio__671->SetBinContent(18,0.8650939);
   data_mc_ratio__671->SetBinContent(19,0.6705115);
   data_mc_ratio__671->SetBinContent(20,0.7143309);
   data_mc_ratio__671->SetBinContent(21,0.9649147);
   data_mc_ratio__671->SetBinContent(22,0.8756282);
   data_mc_ratio__671->SetBinContent(23,0.9025939);
   data_mc_ratio__671->SetBinContent(24,0.8717242);
   data_mc_ratio__671->SetBinContent(25,1.098592);
   data_mc_ratio__671->SetBinContent(26,0.8151484);
   data_mc_ratio__671->SetBinContent(27,1.273191);
   data_mc_ratio__671->SetBinContent(28,0.6950169);
   data_mc_ratio__671->SetBinContent(29,1.572094);
   data_mc_ratio__671->SetBinContent(30,1.799222);
   data_mc_ratio__671->SetBinContent(31,1.704666);
   data_mc_ratio__671->SetBinError(1,0.005659397);
   data_mc_ratio__671->SetBinError(2,0.002644756);
   data_mc_ratio__671->SetBinError(3,0.002201992);
   data_mc_ratio__671->SetBinError(4,0.003090686);
   data_mc_ratio__671->SetBinError(5,0.003626904);
   data_mc_ratio__671->SetBinError(6,0.00379257);
   data_mc_ratio__671->SetBinError(7,0.00520778);
   data_mc_ratio__671->SetBinError(8,0.004875493);
   data_mc_ratio__671->SetBinError(9,0.005534461);
   data_mc_ratio__671->SetBinError(10,0.002908045);
   data_mc_ratio__671->SetBinError(11,0.006620125);
   data_mc_ratio__671->SetBinError(12,0.006236104);
   data_mc_ratio__671->SetBinError(13,0.00847812);
   data_mc_ratio__671->SetBinError(14,0.007691334);
   data_mc_ratio__671->SetBinError(15,0.008383698);
   data_mc_ratio__671->SetBinError(16,0.00886191);
   data_mc_ratio__671->SetBinError(17,0.009835044);
   data_mc_ratio__671->SetBinError(18,0.01182069);
   data_mc_ratio__671->SetBinError(19,0.009870073);
   data_mc_ratio__671->SetBinError(20,0.01170248);
   data_mc_ratio__671->SetBinError(21,0.01703085);
   data_mc_ratio__671->SetBinError(22,0.01701934);
   data_mc_ratio__671->SetBinError(23,0.01979544);
   data_mc_ratio__671->SetBinError(24,0.0211362);
   data_mc_ratio__671->SetBinError(25,0.03016926);
   data_mc_ratio__671->SetBinError(26,0.02557348);
   data_mc_ratio__671->SetBinError(27,0.04907789);
   data_mc_ratio__671->SetBinError(28,0.03428266);
   data_mc_ratio__671->SetBinError(29,0.09675572);
   data_mc_ratio__671->SetBinError(30,0.1566021);
   data_mc_ratio__671->SetBinError(31,0.6720422);
   data_mc_ratio__671->SetMinimum(0.4);
   data_mc_ratio__671->SetMaximum(1.6);
   data_mc_ratio__671->SetEntries(346.4424);
   data_mc_ratio__671->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__671->SetLineColor(ci);
   data_mc_ratio__671->SetLineWidth(2);
   data_mc_ratio__671->SetMarkerStyle(20);
   data_mc_ratio__671->SetMarkerSize(1.2);
   data_mc_ratio__671->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__671->GetXaxis()->SetRange(1,30);
   data_mc_ratio__671->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__671->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__671->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__671->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__671->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__671->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__671->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__671->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__671->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__671->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__671->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__671->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__671->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__671->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__671->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__671->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__671->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1488[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1488[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1488[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1488[30] = {
   0.05995259,
   0.04178445,
   0.1435471,
   0.05787136,
   0.05983158,
   0.0713087,
   0.08624265,
   0.09756535,
   0.09632885,
   0.4023297,
   0.09233709,
   0.122389,
   0.1054212,
   0.1125655,
   0.108798,
   0.1328656,
   0.1441041,
   0.261235,
   0.1580226,
   0.1756983,
   0.1709069,
   0.217003,
   0.2117839,
   0.2714,
   0.2735213,
   0.3731361,
   0.163121,
   0.631718,
   0.3427337,
   0.4934084};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1488,Graph_from_mc_statistical_error_fy1488,Graph_from_mc_statistical_error_fex1488,Graph_from_mc_statistical_error_fey1488);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1488 = new TH1F("Graph_Graph_from_mc_statistical_error1488","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1488->SetMinimum(0.2419384);
   Graph_Graph_from_mc_statistical_error1488->SetMaximum(1.758062);
   Graph_Graph_from_mc_statistical_error1488->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1488->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1488->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1488);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_both_all->cd();
   Z_dR_Bj0_both_all->Modified();
   Z_dR_Bj0_both_all->cd();
   Z_dR_Bj0_both_all->SetSelected(Z_dR_Bj0_both_all);
}
