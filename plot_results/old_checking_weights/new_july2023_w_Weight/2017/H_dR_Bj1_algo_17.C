void H_dR_Bj1_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_17/H_dR_Bj1_algo_17
//=========  (Thu Aug 10 10:42:10 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_17 = new TCanvas("H_dR_Bj1_algo_17", "H_dR_Bj1_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_algo_17->SetHighLightColor(2);
   H_dR_Bj1_algo_17->Range(0,0,1,1);
   H_dR_Bj1_algo_17->SetFillColor(0);
   H_dR_Bj1_algo_17->SetFillStyle(4000);
   H_dR_Bj1_algo_17->SetBorderMode(0);
   H_dR_Bj1_algo_17->SetBorderSize(2);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.903395,6.314516,13.63285);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(2.588641e+11);
   
   TH1F *st_stack_142 = new TH1F("st_stack_142","",30,0,6);
   st_stack_142->SetMinimum(0.0012976);
   st_stack_142->SetMaximum(9.532966e+11);
   st_stack_142->SetDirectory(0);
   st_stack_142->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_142->SetLineColor(ci);
   st_stack_142->GetXaxis()->SetRange(1,30);
   st_stack_142->GetXaxis()->SetLabelFont(42);
   st_stack_142->GetXaxis()->SetLabelSize(0.035);
   st_stack_142->GetXaxis()->SetTitleSize(0.035);
   st_stack_142->GetXaxis()->SetTitleFont(42);
   st_stack_142->GetYaxis()->SetTitle("Events/0.2");
   st_stack_142->GetYaxis()->SetLabelFont(42);
   st_stack_142->GetYaxis()->SetLabelSize(0.05);
   st_stack_142->GetYaxis()->SetTitleSize(0.057);
   st_stack_142->GetYaxis()->SetTitleOffset(1.2);
   st_stack_142->GetYaxis()->SetTitleFont(42);
   st_stack_142->GetZaxis()->SetLabelFont(42);
   st_stack_142->GetZaxis()->SetLabelSize(0.035);
   st_stack_142->GetZaxis()->SetTitleSize(0.035);
   st_stack_142->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_142);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,43543.62);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,85318.58);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,107778.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,107374.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,112891.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,121503.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,100493.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,89813.17);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,88411.18);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,81052.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,76660.11);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,83850.83);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,70311.11);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,58955.68);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,71789.83);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,50463.89);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,41996.11);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,38076.91);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,42392.02);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,23690.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,17583.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,14556.43);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,9326.567);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,7528.676);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,8023.985);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,4558.993);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,4097.355);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(29,1062.277);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(30,748.6491);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(31,628.8627);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,2719.864);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,4070.659);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,15477.14);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,4314.803);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,4732.41);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,15555.24);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,3882.377);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,3794.357);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,3736.982);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,3497.736);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,3466.974);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,15159.85);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,3544.77);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,2724.532);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,15113.01);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,3114.799);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,2572.409);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,2313.615);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,14930.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,1765.662);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,1938.981);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,1404.109);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,1040.464);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,889.4906);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,1153.898);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,736.3512);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,855.203);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(29,285.483);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(30,280.6345);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(31,276.0407);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(112106);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.2624063);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,242.9032);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,653.4039);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,827.8568);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,933.3154);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,893.6009);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,879.3661);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,807.8187);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,719.4626);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,670.1651);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,600.1309);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,547.883);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,504.7444);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,462.4681);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,441.9921);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,413.2374);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,340.8537);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,311.2124);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,256.9542);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,215.0608);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,172.7973);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,128.3724);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,105.3633);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,81.43182);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,58.37848);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,38.70066);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,26.43152);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,15.14369);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,9.621301);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,6.259917);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,8.314564);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.2624063);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,6.428524);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,10.1937);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,11.4078);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,11.95759);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,11.43496);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,11.30432);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,10.9246);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,10.20434);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,9.836874);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,9.286753);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,8.863409);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,8.417731);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,8.044107);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,7.96727);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,7.779382);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,6.822333);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,6.690344);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,6.071998);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,5.567649);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,5.001986);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,4.247564);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,3.851973);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,3.412625);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,2.817809);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,2.302559);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,1.882344);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,1.296401);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,1.131591);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.8788921);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.9959182);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(138653);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(1,9.898808);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(2,7023.844);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(3,21604.35);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(4,23569.54);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(5,20477.5);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(6,16587.29);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(7,13504.84);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(8,11266.47);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(9,9582.449);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(10,8327.224);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(11,7225.646);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(12,6337.654);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(13,5728.278);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(14,5276.402);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(15,4952.03);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(16,4675.994);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(17,4315.264);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(18,3938.871);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(19,3475.435);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(20,3040.118);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(21,2621.749);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(22,2191.532);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(23,1773.383);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(24,1352.598);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(25,993.3851);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(26,674.0164);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(27,408.9456);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(28,223.9607);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(29,109.8059);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(30,55.62831);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(31,71.25644);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(1,0.738225);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(2,21.26823);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(3,37.49836);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(4,39.11062);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(5,36.29071);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(6,32.49507);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(7,29.19076);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(8,26.59206);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(9,24.48754);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(10,22.8026);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(11,21.22615);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(12,19.87691);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(13,18.89378);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(14,18.13123);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(15,17.58843);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(16,17.10689);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(17,16.45191);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(18,15.73889);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(19,14.7846);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(20,13.84572);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(21,12.87927);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(22,11.79174);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(23,10.60787);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(24,9.27126);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(25,7.93239);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(26,6.531715);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(27,5.072589);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(28,3.722321);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(29,2.596326);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(30,1.827988);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(31,2.069451);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetEntries(3113082);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(1,0.2327714);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(2,235.3948);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(3,606.9493);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(4,582.926);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(5,707.9382);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(6,655.0362);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(7,630.0154);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(8,588.7015);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(9,538.0928);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(10,498.4116);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(11,503.536);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(12,408.1015);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(13,364.8574);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(14,355.1602);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(15,309.6505);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(16,303.117);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(17,281.5011);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(18,249.8089);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(19,199.5923);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(20,147.9176);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(21,129.2809);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(22,106.5531);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(23,84.47809);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(24,57.65891);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(25,43.38447);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(26,38.74871);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(27,21.00129);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(28,13.66094);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(29,6.01905);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(30,2.981774);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(31,9.360672);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(1,0.1352369);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(2,9.669459);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(3,17.99989);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(4,18.45703);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(5,23.01101);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(6,20.66663);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(7,19.66148);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(8,19.14299);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(9,17.44099);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(10,16.29599);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(11,18.57709);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(12,13.56692);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(13,11.24322);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(14,12.57656);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(15,10.31896);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(16,11.24579);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(17,13.07199);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(18,11.41937);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(19,9.303383);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(20,6.858262);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(21,8.328114);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(22,8.091795);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(23,7.366801);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(24,4.448162);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(25,4.774014);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(26,4.746188);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(27,3.306828);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(28,1.762003);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(29,1.04636);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(30,0.7368564);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(31,3.975696);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetEntries(54522);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(1,0.001207297);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(2,87.85266);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(3,207.0867);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(4,170.5109);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(5,212.1742);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(6,202.4458);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(7,194.5582);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(8,205.7731);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(9,189.6132);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(10,174.3996);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(11,154.1818);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(12,135.0533);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(13,120.553);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(14,124.4886);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(15,130.2709);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(16,112.2779);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(17,93.59098);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(18,76.93974);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(19,85.63945);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(20,53.37085);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(21,58.49733);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(22,34.72581);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(23,53.10724);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(24,19.24937);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(25,26.72581);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(26,10.74405);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(27,6.461338);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(28,6.822198);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(29,2.45786);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(30,0.9771934);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(31,2.879252);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(1,0.001207297);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(2,9.546282);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(3,17.21157);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(4,15.11521);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(5,17.23432);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(6,14.22855);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(7,15.67751);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(8,20.0275);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(9,18.59341);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(10,16.24605);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(11,12.88176);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(12,10.61845);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(13,9.716734);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(14,8.282754);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(15,13.61699);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(16,13.09584);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(17,6.880134);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(18,6.463066);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(19,11.32767);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(20,8.170906);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(21,10.81549);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(22,4.418453);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(23,12.34737);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(24,3.15206);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(25,7.596495);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(26,1.999911);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(27,1.469227);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(28,2.117492);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(29,0.5890844);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(30,0.3082276);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(31,1.276195);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetEntries(16864);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(2,1.261224);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(3,1.576529);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(4,2.522447);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(5,2.207141);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(6,1.576529);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(7,2.207141);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(8,1.891835);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(9,1.261224);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(10,0.9459177);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(11,1.261224);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(12,1.891835);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(13,1.891835);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(14,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(15,0.9459177);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(16,0.9459177);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(17,0.9459177);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(19,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(20,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(23,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(24,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(27,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(2,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(3,0.7050454);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(4,0.8918197);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(5,0.834221);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(6,0.7050454);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(7,0.834221);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(8,0.7723385);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(9,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(10,0.5461258);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(11,0.6306118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(12,0.7723385);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(13,0.7723385);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(14,0.4459099);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(15,0.5461258);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(16,0.5461258);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(17,0.5461258);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(19,0.4459099);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(20,0.4459099);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(23,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(24,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(27,0.3153059);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(2,5.454728);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(3,9.421803);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(4,8.182092);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(5,4.462959);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(6,4.710902);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(7,6.198555);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(8,2.23148);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(9,2.975306);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(10,4.215017);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(11,2.975306);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(12,2.23148);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(13,1.239711);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(14,3.223248);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(15,2.727364);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(16,3.719133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(17,0.9917687);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(18,2.727364);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(19,0.7438266);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(20,0.7438266);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(21,0.7438266);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(22,0.2479422);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(23,0.4958844);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(26,0.2479422);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(27,0.4958844);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(30,0.2479422);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(31,0.2479422);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(2,1.162952);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(3,1.528418);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(4,1.424319);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(5,1.05193);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(6,1.080755);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(7,1.239711);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(8,0.7438266);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(9,0.8588969);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(10,1.022292);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(11,0.8588969);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(12,0.7438266);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(13,0.5544156);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(14,0.8939683);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(15,0.8223312);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(16,0.960276);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(17,0.4958844);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(18,0.8223312);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(19,0.4294485);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(20,0.4294485);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(21,0.4294485);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(22,0.2479422);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(23,0.3506432);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(26,0.2479422);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(27,0.3506432);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(30,0.2479422);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(31,0.2479422);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetEntries(290);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(2,9.875799);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(3,18.23224);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(4,14.68709);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(5,5.570963);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(6,6.583866);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(7,7.849994);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(8,5.824189);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(9,5.064512);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(10,4.811287);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(11,3.798384);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(12,3.545159);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(13,4.304835);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(14,3.038707);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(15,4.558061);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(16,2.532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(17,2.025805);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(18,2.532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(19,2.785482);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(20,1.012902);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(22,0.5064512);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(23,1.012902);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(24,0.7596768);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(25,0.5064512);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(26,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(27,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(2,1.581393);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(3,2.148691);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(4,1.928509);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(5,1.187733);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(6,1.291202);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(7,1.409901);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(8,1.214427);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(9,1.132459);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(10,1.103785);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(11,0.9807386);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(12,0.9474835);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(13,1.044076);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(14,0.8771992);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(15,1.074345);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(16,0.8007697);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(17,0.7162302);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(18,0.8007697);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(19,0.8398543);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(20,0.5064512);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(21,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(22,0.3581151);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(23,0.5064512);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(24,0.4385996);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(25,0.3581151);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(26,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(27,0.2532256);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(1,0.00166692);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(2,4.957419);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(3,14.0388);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(4,12.62358);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(5,8.856344);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(6,5.647524);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(7,3.938931);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(8,3.177149);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(9,2.895439);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(10,2.70041);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(11,2.39703);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(12,2.258676);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(13,2.01864);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(14,1.898621);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(15,1.748599);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(16,1.690256);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(17,1.38521);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(18,1.128505);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(19,1.03349);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(20,0.808456);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(21,0.8968027);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(22,0.745113);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(23,0.6984393);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(24,0.6851039);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(25,0.5250797);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(26,0.3667223);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(27,0.228368);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(28,0.1333536);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(29,0.04167299);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(30,0.02000303);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(31,0.02000303);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(1,0.00166692);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(2,0.09090445);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(3,0.1529756);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(4,0.1450603);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(5,0.1215023);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(6,0.0970256);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(7,0.08103012);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(8,0.07277397);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(9,0.06947276);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(10,0.06709222);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(11,0.06321121);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(12,0.06135985);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(13,0.05800784);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(14,0.05625699);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(15,0.05398864);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(16,0.05308033);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(17,0.04805241);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(18,0.04337195);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(19,0.04150596);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(20,0.0367101);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(21,0.03866391);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(22,0.03524264);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(23,0.03412099);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(24,0.03379369);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(25,0.02958489);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(26,0.02472441);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(27,0.01951079);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(28,0.01490938);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(29,0.008334598);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(30,0.005774379);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(31,0.005774379);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetEntries(47732);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(1,0.0008312461);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(2,1.577289);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(3,5.543996);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(4,6.318717);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(5,5.387721);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(6,3.786326);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(7,2.973783);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(8,2.462151);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(9,2.17454);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(10,1.996237);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(11,1.773048);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(12,1.576043);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(13,1.384025);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(14,1.288431);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(15,1.225257);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(16,1.139223);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(17,1.058176);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(18,0.9056426);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(19,0.7738901);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(20,0.7181966);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(21,0.5935097);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(22,0.5311662);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(23,0.4301698);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(24,0.339564);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(25,0.2385676);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(26,0.1658336);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(27,0.1109713);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(28,0.05486224);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(29,0.03200297);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(30,0.009143707);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(31,0.01205307);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(1,0.0005877797);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(2,0.02560386);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(3,0.04800221);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(4,0.05124651);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(5,0.04732083);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(6,0.03966969);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(7,0.0351564);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(8,0.03198948);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(9,0.03006308);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(10,0.02880421);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(11,0.02714626);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(12,0.02559374);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(13,0.02398401);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(14,0.02314091);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(15,0.02256646);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(16,0.02175976);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(17,0.02097147);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(18,0.01940118);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(19,0.01793451);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(20,0.01727712);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(21,0.01570593);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(22,0.01485816);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(23,0.01337118);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(24,0.01187984);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(25,0.00995762);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(26,0.008302064);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(27,0.006791336);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(28,0.004775145);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(29,0.003647077);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(30,0.001949445);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(31,0.002238199);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(2,0.03950628);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(3,0.07585205);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(4,0.1042966);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(5,0.0742718);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(6,0.06004954);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(7,0.02844452);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(8,0.02844452);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(9,0.03002477);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(10,0.02370377);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(11,0.01738276);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(12,0.02528402);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(13,0.01896301);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(14,0.01896301);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(15,0.01106176);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(16,0.01422226);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(17,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(18,0.01106176);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(19,0.01422226);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(20,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(21,0.009481507);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(22,0.01422226);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(23,0.007901256);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(24,0.006321005);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(25,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(27,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(2,0.007901256);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(3,0.0109483);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(4,0.01283802);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(5,0.01083366);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(6,0.009741322);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(7,0.006704438);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(8,0.006704438);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(9,0.006888155);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(10,0.006120286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(11,0.0052411);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(12,0.006321005);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(13,0.005474151);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(14,0.005474151);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(15,0.004180952);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(16,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(17,0.002737075);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(18,0.004180952);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(19,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(20,0.002737075);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(21,0.003870809);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(22,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(23,0.003533549);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(24,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(25,0.002234813);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(26,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(27,0.002234813);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(28,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(2,0.0110031);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(3,0.0402755);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(4,0.03986029);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(5,0.03093324);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(6,0.02387465);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(7,0.02013775);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(8,0.01390958);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(9,0.01806169);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(10,0.01432479);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(11,0.01494761);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(12,0.009342254);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(13,0.008511832);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(14,0.007266198);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(15,0.007889015);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(16,0.005397747);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(17,0.00622817);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(18,0.005397747);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(19,0.004567324);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(20,0.004152113);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(21,0.003944507);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(22,0.003114085);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(23,0.002698874);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(24,0.002283662);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(25,0.001868451);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(26,0.001038028);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(27,0.000622817);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(28,0.0008304226);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(30,0.0004152113);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(31,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(2,0.001511392);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(3,0.002891612);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(4,0.002876668);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(5,0.00253415);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(6,0.002226323);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(7,0.002044679);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(8,0.001699326);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(9,0.001936417);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(10,0.001724502);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(11,0.001761592);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(12,0.001392661);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(13,0.001329325);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(14,0.001228212);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(15,0.001279767);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(16,0.001058585);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(17,0.001137103);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(18,0.001058585);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(19,0.0009737568);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(20,0.0009284407);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(21,0.0009049321);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(22,0.0008040532);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(23,0.0007485328);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(24,0.0006885501);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(25,0.000622817);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(26,0.0004642204);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(27,0.0003595835);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(28,0.0004152113);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(30,0.0002935987);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(31,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj1__389 = new TH1D("VbbHcc_algo_H_dR_Bj1__389","",30,0,6);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(1,4);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(2,7039);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(3,14899);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(4,15206);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(5,17323);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(6,17757);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(7,16826);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(8,15497);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(9,14444);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(10,13097);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(11,12335);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(12,11501);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(13,10809);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(14,10294);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(15,9460);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(16,8852);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(17,7721);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(18,6796);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(19,5540);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(20,4574);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(21,3654);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(22,2988);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(23,2343);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(24,1833);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(25,1341);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(26,1005);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(27,726);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(28,476);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(29,257);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(30,158);
   VbbHcc_algo_H_dR_Bj1__389->SetBinContent(31,153);
   VbbHcc_algo_H_dR_Bj1__389->SetEntries(234937);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1__389->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1__389->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj1__389->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj1__389->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj1__389->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1__389->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__389->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__389->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__389->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__389->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__389->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__389->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__389->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1__389->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__389->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__389->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__389->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__389->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__389->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fx1283[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fy1283[30] = {
   10.39769,
   51156.79,
   108439.3,
   132974,
   129732,
   131251.8,
   136735.8,
   113378.2,
   100857.2,
   98096.09,
   89548.13,
   84100.34,
   90580.13,
   76539.73,
   64800.85,
   77304.51,
   55501.52,
   46580.25,
   42100.52,
   45852.41,
   26674.93,
   20046.33,
   16575.73,
   10839.61,
   8651.825,
   8787.231,
   5023.24,
   4357.134,
   1190.254,
   814.7738};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fex1283[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fey1283[30] = {
   0.795064,
   2719.99,
   4070.921,
   15477.22,
   4315.068,
   4732.602,
   15555.3,
   3882.583,
   3794.536,
   3737.136,
   3497.886,
   3467.085,
   15159.87,
   3544.858,
   2724.655,
   15113.04,
   3114.885,
   2572.5,
   2313.717,
   14930.81,
   1765.769,
   1939.043,
   1404.228,
   1040.525,
   889.5757,
   1153.931,
   736.3802,
   855.2166,
   285.4996,
   280.643};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj1_fx1283,Graph_from_VbbHcc_algo_H_dR_Bj1_fy1283,Graph_from_VbbHcc_algo_H_dR_Bj1_fex1283,Graph_from_VbbHcc_algo_H_dR_Bj1_fey1283);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetMinimum(8.642364);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetMaximum(167519.3);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj11283);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__390 = new TH1D("data_mc_ratio__390","",30,0,6);
   data_mc_ratio__390->SetBinContent(1,0.3847008);
   data_mc_ratio__390->SetBinContent(2,0.1375966);
   data_mc_ratio__390->SetBinContent(3,0.1373948);
   data_mc_ratio__390->SetBinContent(4,0.1143532);
   data_mc_ratio__390->SetBinContent(5,0.1335291);
   data_mc_ratio__390->SetBinContent(6,0.1352895);
   data_mc_ratio__390->SetBinContent(7,0.1230548);
   data_mc_ratio__390->SetBinContent(8,0.1366841);
   data_mc_ratio__390->SetBinContent(9,0.1432124);
   data_mc_ratio__390->SetBinContent(10,0.133512);
   data_mc_ratio__390->SetBinContent(11,0.1377472);
   data_mc_ratio__390->SetBinContent(12,0.1367533);
   data_mc_ratio__390->SetBinContent(13,0.1193308);
   data_mc_ratio__390->SetBinContent(14,0.1344922);
   data_mc_ratio__390->SetBinContent(15,0.1459857);
   data_mc_ratio__390->SetBinContent(16,0.1145082);
   data_mc_ratio__390->SetBinContent(17,0.1391133);
   data_mc_ratio__390->SetBinContent(18,0.1458987);
   data_mc_ratio__390->SetBinContent(19,0.1315898);
   data_mc_ratio__390->SetBinContent(20,0.09975485);
   data_mc_ratio__390->SetBinContent(21,0.1369826);
   data_mc_ratio__390->SetBinContent(22,0.1490547);
   data_mc_ratio__390->SetBinContent(23,0.1413513);
   data_mc_ratio__390->SetBinContent(24,0.169102);
   data_mc_ratio__390->SetBinContent(25,0.1549962);
   data_mc_ratio__390->SetBinContent(26,0.1143705);
   data_mc_ratio__390->SetBinContent(27,0.1445282);
   data_mc_ratio__390->SetBinContent(28,0.1092461);
   data_mc_ratio__390->SetBinContent(29,0.2159202);
   data_mc_ratio__390->SetBinContent(30,0.1939189);
   data_mc_ratio__390->SetBinContent(31,0.2122188);
   data_mc_ratio__390->SetBinError(1,0.1923504);
   data_mc_ratio__390->SetBinError(2,0.001640031);
   data_mc_ratio__390->SetBinError(3,0.00112562);
   data_mc_ratio__390->SetBinError(4,0.000927344);
   data_mc_ratio__390->SetBinError(5,0.001014529);
   data_mc_ratio__390->SetBinError(6,0.001015265);
   data_mc_ratio__390->SetBinError(7,0.0009486546);
   data_mc_ratio__390->SetBinError(8,0.001097979);
   data_mc_ratio__390->SetBinError(9,0.001191617);
   data_mc_ratio__390->SetBinError(10,0.001166633);
   data_mc_ratio__390->SetBinError(11,0.001240261);
   data_mc_ratio__390->SetBinError(12,0.001275176);
   data_mc_ratio__390->SetBinError(13,0.001147783);
   data_mc_ratio__390->SetBinError(14,0.001325578);
   data_mc_ratio__390->SetBinError(15,0.001500945);
   data_mc_ratio__390->SetBinError(16,0.001217071);
   data_mc_ratio__390->SetBinError(17,0.001583186);
   data_mc_ratio__390->SetBinError(18,0.001769803);
   data_mc_ratio__390->SetBinError(19,0.00176794);
   data_mc_ratio__390->SetBinError(20,0.001474979);
   data_mc_ratio__390->SetBinError(21,0.00226611);
   data_mc_ratio__390->SetBinError(22,0.002726814);
   data_mc_ratio__390->SetBinError(23,0.002920206);
   data_mc_ratio__390->SetBinError(24,0.00394973);
   data_mc_ratio__390->SetBinError(25,0.004232595);
   data_mc_ratio__390->SetBinError(26,0.003607705);
   data_mc_ratio__390->SetBinError(27,0.005363946);
   data_mc_ratio__390->SetBinError(28,0.005007288);
   data_mc_ratio__390->SetBinError(29,0.01346873);
   data_mc_ratio__390->SetBinError(30,0.01542736);
   data_mc_ratio__390->SetBinError(31,0.08305836);
   data_mc_ratio__390->SetMinimum(0.4);
   data_mc_ratio__390->SetMaximum(1.6);
   data_mc_ratio__390->SetEntries(385.7232);
   data_mc_ratio__390->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__390->SetLineColor(ci);
   data_mc_ratio__390->SetLineWidth(2);
   data_mc_ratio__390->SetMarkerStyle(20);
   data_mc_ratio__390->SetMarkerSize(1.2);
   data_mc_ratio__390->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__390->GetXaxis()->SetRange(1,30);
   data_mc_ratio__390->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__390->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__390->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__390->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__390->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__390->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__390->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__390->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__390->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__390->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__390->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__390->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__390->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__390->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__390->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__390->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__390->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1284[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1284[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1284[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1284[30] = {
   0.07646544,
   0.05316966,
   0.03754101,
   0.1163928,
   0.0332614,
   0.03605742,
   0.1137617,
   0.03424451,
   0.03762285,
   0.03809669,
   0.03906152,
   0.04122558,
   0.1673642,
   0.04631395,
   0.04204659,
   0.1955001,
   0.05612252,
   0.05522726,
   0.05495696,
   0.3256276,
   0.06619583,
   0.09672809,
   0.08471592,
   0.09599282,
   0.1028194,
   0.131319,
   0.1465947,
   0.1962796,
   0.2398643,
   0.3444429};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1284,Graph_from_mc_statistical_error_fy1284,Graph_from_mc_statistical_error_fex1284,Graph_from_mc_statistical_error_fey1284);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1284 = new TH1F("Graph_Graph_from_mc_statistical_error1284","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1284->SetMinimum(0.5866685);
   Graph_Graph_from_mc_statistical_error1284->SetMaximum(1.413331);
   Graph_Graph_from_mc_statistical_error1284->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1284->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1284->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1284->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1284->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1284->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1284->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1284);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->SetSelected(H_dR_Bj1_algo_17);
}
