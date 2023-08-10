void H_dR_Bj1_algo_18()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_18/H_dR_Bj1_algo_18
//=========  (Thu Aug  3 12:24:45 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_18 = new TCanvas("H_dR_Bj1_algo_18", "H_dR_Bj1_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_algo_18->SetHighLightColor(2);
   H_dR_Bj1_algo_18->Range(0,0,1,1);
   H_dR_Bj1_algo_18->SetFillColor(0);
   H_dR_Bj1_algo_18->SetFillStyle(4000);
   H_dR_Bj1_algo_18->SetBorderMode(0);
   H_dR_Bj1_algo_18->SetBorderSize(2);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-421.2358,6.314516,420824.6);
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
   st->SetMaximum(360666.7);
   
   TH1F *st_stack_143 = new TH1F("st_stack_143","",30,0,6);
   st_stack_143->SetMinimum(0.01);
   st_stack_143->SetMaximum(378700);
   st_stack_143->SetDirectory(0);
   st_stack_143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_143->SetLineColor(ci);
   st_stack_143->GetXaxis()->SetRange(1,30);
   st_stack_143->GetXaxis()->SetLabelFont(42);
   st_stack_143->GetXaxis()->SetLabelSize(0.035);
   st_stack_143->GetXaxis()->SetTitleSize(0.035);
   st_stack_143->GetXaxis()->SetTitleFont(42);
   st_stack_143->GetYaxis()->SetTitle("Events/0.2");
   st_stack_143->GetYaxis()->SetLabelFont(42);
   st_stack_143->GetYaxis()->SetLabelSize(0.05);
   st_stack_143->GetYaxis()->SetTitleSize(0.057);
   st_stack_143->GetYaxis()->SetTitleOffset(1.2);
   st_stack_143->GetYaxis()->SetTitleFont(42);
   st_stack_143->GetZaxis()->SetLabelFont(42);
   st_stack_143->GetZaxis()->SetLabelSize(0.035);
   st_stack_143->GetZaxis()->SetTitleSize(0.035);
   st_stack_143->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_143);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,42330.85);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,96116.89);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,105384.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,118863.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,126791);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,125077.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,123738.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,114073.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,112926.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,100507.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,96980.78);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,88588.21);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,108006.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,80153.68);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,70408.45);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,60859.78);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,61765.84);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,41942.25);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,37995.16);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,30035.46);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,23410.92);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,19398.36);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,13677.21);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,9641.857);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,6029.627);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,4557.816);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,4018.045);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(29,2433.26);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(30,851.5722);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(31,957.863);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,3203.271);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,4490.025);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,4806.305);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,4761.304);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,5933.068);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,4909.104);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,4787.286);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,4939.283);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,5409.574);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,4429.708);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,4513.891);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,3749.264);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,20437.35);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,3673.16);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,3885.811);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,3401.083);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,3660.554);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,2498.633);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,2486.405);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,2204.694);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,1990.785);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,1868.516);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,1445.294);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,1164.011);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,709.9134);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,591.6655);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,770.666);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(29,660.6781);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(30,380.0289);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(31,385.2586);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(114901);

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
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.7448695);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,294.4727);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,762.7679);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,911.5596);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,1026.065);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,1035.01);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,994.368);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,937.6532);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,866.2706);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,799.503);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,708.4093);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,658.0747);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,619.6548);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,566.7014);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,515.2302);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,486.5365);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,401.2583);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,362.8447);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,296.6279);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,252.4475);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,204.22);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,159.6301);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,128.4563);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,96.18114);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,75.26469);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,50.33925);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,31.51809);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,20.29384);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,10.7501);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,8.899544);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,10.30266);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.3943579);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,7.313513);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,11.43053);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,12.47961);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,13.02648);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,12.94261);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,12.67675);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,12.18536);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,11.73469);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,11.17677);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,10.4651);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,9.944553);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,9.765781);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,9.301689);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,8.799079);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,8.683389);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,7.767308);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,7.493438);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,6.686141);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,6.276058);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,5.535094);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,4.933933);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,4.395093);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,3.789188);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,3.410841);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,2.707506);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,2.009152);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,1.694687);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,1.171329);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,1.222783);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,1.129708);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(162879);

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
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(1,23.29571);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(2,9235.363);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(3,26885.38);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(4,27581.64);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(5,23529.88);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(6,19017.23);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(7,15666.62);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(8,13337.58);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(9,11531.7);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(10,10098.1);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(11,8938.524);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(12,7983.775);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(13,7187.849);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(14,6602.288);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(15,6180.767);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(16,5773.884);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(17,5246.841);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(18,4722.745);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(19,4180.87);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(20,3655.901);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(21,3151.656);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(22,2697.575);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(23,2224.754);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(24,1743.365);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(25,1313.668);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(26,899.1893);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(27,555.8394);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(28,296.5666);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(29,145.9497);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(30,72.18787);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(31,90.05021);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(1,1.067139);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(2,23.97582);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(3,41.16293);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(4,41.63185);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(5,38.25426);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(6,34.18758);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(7,30.86225);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(8,28.39916);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(9,26.37624);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(10,24.66677);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(11,23.18773);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(12,21.91539);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(13,20.79037);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(14,19.94181);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(15,19.30193);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(16,18.66519);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(17,17.82152);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(18,16.91953);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(19,15.93167);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(20,14.91819);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(21,13.87827);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(22,12.86774);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(23,11.70239);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(24,10.36625);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(25,8.9879);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(26,7.428643);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(27,5.827802);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(28,4.223805);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(29,2.940359);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(30,2.054335);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(31,2.279538);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetEntries(3891102);

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
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(1,0.1851459);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(2,306.0141);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(3,816.1699);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(4,795.1011);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(5,869.0013);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(6,839.4906);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(7,821.1355);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(8,754.5452);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(9,720.2177);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(10,646.854);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(11,587.2847);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(12,547.2367);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(13,530.7802);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(14,486.7761);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(15,410.4595);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(16,395.2638);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(17,350.4699);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(18,291.7826);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(19,250.9192);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(20,194.1325);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(21,178.9996);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(22,124.4271);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(23,95.92321);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(24,72.3961);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(25,62.89583);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(26,51.89324);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(27,26.5561);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(28,17.87513);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(29,9.513055);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(30,5.193463);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(31,9.745569);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(1,0.1309179);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(2,12.09061);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(3,20.38637);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(4,25.71897);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(5,25.16364);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(6,24.03273);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(7,23.20105);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(8,22.30255);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(9,21.93818);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(10,17.82307);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(11,16.34035);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(12,16.3156);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(13,17.44676);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(14,14.07552);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(15,11.9795);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(16,13.62103);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(17,12.12162);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(18,11.97834);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(19,12.14307);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(20,11.48832);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(21,10.74904);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(22,9.061217);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(23,7.601759);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(24,6.057781);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(25,4.428853);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(26,5.624761);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(27,2.615183);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(28,2.133127);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(29,1.647057);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(30,1.227404);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(31,4.272926);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetEntries(56536);

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
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(1,0.1023102);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(2,91.23216);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(3,236.4542);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(4,188.2175);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(5,201.3948);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(6,296.8927);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(7,268.1426);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(8,211.5777);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(9,224.8275);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(10,218.9667);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(11,186.5396);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(12,171.5895);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(13,168.3575);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(14,166.8492);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(15,150.8542);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(16,136.8519);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(17,120.2245);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(18,120.4152);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(19,104.5081);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(20,65.9032);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(21,53.45658);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(22,43.16151);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(23,26.52305);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(24,17.82738);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(25,12.1863);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(26,13.88258);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(27,8.727024);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(28,2.931253);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(29,1.84607);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(30,3.082035);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(31,4.504355);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(1,0.1023102);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(2,9.491914);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(3,25.4211);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(4,20.01131);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(5,13.43751);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(6,28.75111);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(7,26.08988);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(8,19.83875);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(9,20.62185);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(10,20.44768);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(11,16.48008);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(12,18.35441);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(13,15.60324);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(14,18.72767);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(15,15.71181);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(16,11.61357);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(17,14.37999);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(18,20.26471);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(19,16.87541);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(20,12.17738);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(21,11.78357);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(22,11.83017);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(23,4.569483);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(24,3.402501);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(25,2.505898);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(26,3.810419);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(27,2.411381);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(28,0.7097043);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(29,0.5604393);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(30,2.109461);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(31,2.203208);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetEntries(15329);

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
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(2,1.808171);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(3,2.712256);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(4,1.356128);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(5,4.068384);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(6,2.712256);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(7,2.712256);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(8,2.260213);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(9,1.808171);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(10,1.808171);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(11,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(12,1.356128);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(13,2.712256);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(14,0.4520427);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(15,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(16,1.356128);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(18,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(19,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(20,1.356128);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(21,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(22,0.4520427);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(24,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(28,0.4520427);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(2,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(3,1.107274);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(4,0.7829609);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(5,1.356128);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(6,1.107274);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(7,1.107274);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(8,1.010798);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(9,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(10,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(11,0.6392849);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(12,0.7829609);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(13,1.107274);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(14,0.4520427);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(15,0.6392849);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(16,0.7829609);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(18,0.6392849);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(19,0.6392849);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(20,0.7829609);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(21,0.6392849);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(22,0.4520427);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(24,0.6392849);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(28,0.4520427);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetEntries(77);

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
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(2,9.209177);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(3,17.35576);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(4,6.375584);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(5,3.541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(6,6.021385);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(7,3.89619);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(8,3.187792);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(9,2.479394);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(10,1.416796);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(11,2.833593);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(12,2.833593);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(13,4.250389);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(14,1.770996);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(15,4.958788);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(16,3.541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(17,1.770996);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(18,2.833593);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(19,1.770996);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(20,0.7083982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(21,1.062597);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(22,1.062597);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(23,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(24,1.062597);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(25,0.7083982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(26,1.062597);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(27,0.7083982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(28,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(30,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(2,1.806068);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(3,2.479394);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(4,1.50274);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(5,1.120076);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(6,1.4604);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(7,1.174746);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(8,1.062597);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(9,0.9371228);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(10,0.7083982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(11,1.001826);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(12,1.001826);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(13,1.226982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(14,0.7920133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(15,1.325292);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(16,1.120076);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(17,0.7920133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(18,1.001826);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(19,0.7920133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(20,0.5009132);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(21,0.6134909);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(22,0.6134909);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(23,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(24,0.6134909);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(25,0.5009132);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(26,0.6134909);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(27,0.5009132);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(28,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(30,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetEntries(247);

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
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(2,10.89716);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(3,27.94144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(4,15.92662);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(5,10.61775);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(6,9.500088);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(7,6.147116);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(8,4.750044);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(9,7.544187);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(10,6.147116);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(11,4.191215);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(12,6.42653);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(13,5.029458);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(14,6.147116);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(15,5.867701);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(16,3.911801);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(17,3.352972);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(18,2.794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(19,1.9559);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(20,2.514729);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(21,1.676486);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(22,3.073558);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(23,1.117657);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(24,1.676486);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(25,0.8382431);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(26,0.5588287);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(27,0.5588287);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(28,0.2794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(29,0.2794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(2,1.744942);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(3,2.794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(4,2.109532);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(5,1.722426);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(6,1.629252);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(7,1.310569);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(8,1.152055);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(9,1.45188);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(10,1.310569);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(11,1.082167);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(12,1.340024);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(13,1.185455);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(14,1.310569);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(15,1.280437);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(16,1.045473);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(17,0.9679197);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(18,0.8835858);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(19,0.7392609);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(20,0.8382431);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(21,0.6844226);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(22,0.9267126);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(23,0.5588287);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(24,0.6844226);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(25,0.4839599);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(26,0.3951516);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(27,0.3951516);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(28,0.2794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(29,0.2794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetEntries(543);

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
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(2,7.277919);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(3,20.21314);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(4,16.63133);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(5,11.24832);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(6,7.154487);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(7,5.261862);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(8,4.260691);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(9,4.070972);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(10,3.670961);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(11,3.456097);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(12,3.206947);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(13,2.816079);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(14,2.733791);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(15,2.493785);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(16,2.169204);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(17,1.876624);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(18,1.588616);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(19,1.394325);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(20,1.117746);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(21,1.049172);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(22,1.069744);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(23,0.9691701);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(24,0.9417408);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(25,0.8091656);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(26,0.6171602);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(27,0.4045828);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(28,0.2034343);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(29,0.05028713);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(30,0.0320009);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(31,0.02285779);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(2,0.1289795);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(3,0.2149483);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(4,0.1949757);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(5,0.160347);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(6,0.1278811);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(7,0.1096697);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(8,0.09868636);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(9,0.09646419);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(10,0.09160242);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(11,0.08888123);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(12,0.08561759);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(13,0.0802305);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(14,0.07904962);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(15,0.07549993);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(16,0.07041534);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(17,0.06549464);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(18,0.06025965);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(19,0.05645457);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(20,0.05054621);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(21,0.04897117);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(22,0.04944895);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(23,0.04706706);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(24,0.04639624);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(25,0.04300667);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(26,0.03755918);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(27,0.03041031);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(28,0.02156399);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(29,0.01072125);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(30,0.008552601);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(31,0.007228267);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetEntries(47604);

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
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(1,0.001192289);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(2,2.266542);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(3,7.971646);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(4,9.083456);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(5,7.750476);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(6,5.445185);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(7,4.277338);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(8,3.541099);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(9,3.126182);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(10,2.869244);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(11,2.550903);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(12,2.267734);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(13,1.98695);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(14,1.855798);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(15,1.758627);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(16,1.637609);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(17,1.522553);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(18,1.299595);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(19,1.112406);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(20,1.031926);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(21,0.853083);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(22,0.7642574);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(23,0.6187981);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(24,0.4882425);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(25,0.3427832);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(26,0.239054);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(27,0.1591706);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(28,0.07869109);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(29,0.04649928);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(30,0.01371133);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(31,0.01728819);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(1,0.0008430758);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(2,0.03675849);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(3,0.06893659);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(4,0.07358705);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(5,0.06797356);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(6,0.05697471);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(7,0.05049665);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(8,0.0459457);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(9,0.04317009);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(10,0.041358);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(11,0.03899624);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(12,0.03676816);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(13,0.03441671);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(14,0.03326145);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(15,0.03237894);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(16,0.03124503);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(17,0.03012743);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(18,0.02783427);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(19,0.02575179);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(20,0.02480277);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(21,0.02255129);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(22,0.02134498);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(23,0.01920659);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(24,0.01706057);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(25,0.01429505);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(26,0.01193779);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(27,0.009741084);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(28,0.00684918);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(29,0.005265007);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(30,0.002859009);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(31,0.003210337);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetEntries(112352);

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
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(2,0.07282438);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(3,0.1092366);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(4,0.143373);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(5,0.06827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(6,0.05689405);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(7,0.05916981);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(8,0.02048186);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(9,0.0295849);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(10,0.02275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(11,0.04323948);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(12,0.0295849);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(13,0.01593033);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(14,0.02048186);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(15,0.02048186);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(16,0.01137881);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(17,0.01593033);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(18,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(19,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(20,0.0182061);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(21,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(22,0.01365457);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(24,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(26,0.004551524);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(28,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(2,0.01287365);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(3,0.01576694);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(4,0.0180633);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(5,0.01246486);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(6,0.01137881);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(7,0.01160415);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(8,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(9,0.008205376);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(10,0.007196591);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(11,0.009919816);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(12,0.008205376);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(13,0.0060211);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(14,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(15,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(16,0.005088758);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(17,0.0060211);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(18,0.003941735);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(19,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(20,0.006436827);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(21,0.003941735);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(22,0.005574455);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(24,0.003941735);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(26,0.003218413);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(28,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetEntries(352);

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
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(2,0.01917804);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(3,0.04704612);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(4,0.04434921);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(5,0.03985435);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(6,0.02816774);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(7,0.02187495);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(8,0.02277392);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(9,0.01917804);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(10,0.01947769);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(11,0.01348456);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(12,0.01468318);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(13,0.01168662);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(14,0.01288524);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(15,0.01048799);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(16,0.008090734);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(17,0.009289361);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(18,0.005993136);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(19,0.005393822);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(20,0.005993136);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(21,0.005094166);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(22,0.003895538);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(23,0.003895538);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(24,0.001797941);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(25,0.001198627);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(26,0.003895538);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(27,0.0005993136);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(31,0.0002996568);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(2,0.002397254);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(3,0.003754689);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(4,0.003645482);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(5,0.003455811);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(6,0.00290528);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(7,0.002560269);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(8,0.002612347);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(9,0.002397254);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(10,0.00241591);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(11,0.002010159);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(12,0.002097598);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(13,0.001871356);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(14,0.001964981);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(15,0.001772794);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(16,0.001557062);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(17,0.001668418);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(18,0.001340106);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(19,0.001271336);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(20,0.001340106);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(21,0.001235517);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(22,0.001080428);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(23,0.001080428);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(24,0.0007340063);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(25,0.0005993136);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(26,0.001080428);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(27,0.0004237787);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(31,0.0002996568);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetEntries(1270);

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
   
   TH1D *VbbHcc_algo_H_dR_Bj1__392 = new TH1D("VbbHcc_algo_H_dR_Bj1__392","",30,0,6);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(1,93);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(2,56947);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(3,124715);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(4,134417);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(5,160268);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(6,162300);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(7,154863);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(8,145188);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(9,135258);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(10,125622);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(11,116355);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(12,108012);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(13,99928);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(14,93224);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(15,86986);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(16,80575);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(17,69058);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(18,60148);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(19,50408);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(20,42227);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(21,34125);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(22,27112);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(23,21592);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(24,16872);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(25,12960);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(26,9288);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(27,6368);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(28,3870);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(29,2263);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(30,1351);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(31,1507);
   VbbHcc_algo_H_dR_Bj1__392->SetEntries(2143929);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1__392->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1__392->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj1__392->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj1__392->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj1__392->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1__392->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__392->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__392->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__392->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1__392->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__392->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__392->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__392->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fx1285[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fy1285[30] = {
   24.32923,
   52289.49,
   124894,
   134910.8,
   144527.6,
   148010.6,
   142849.7,
   138997.7,
   127435.9,
   124706.2,
   110941.8,
   106357.6,
   97111.68,
   115841.7,
   87427.01,
   77213.63,
   66987.12,
   67273.07,
   46782.32,
   42170.3,
   33629.35,
   26442.15,
   21877.08,
   15612.06,
   11108.57,
   7047.418,
   5182.288,
   4357.082,
   2601.695,
   941.335};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fex1285[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fey1285[30] = {
   1.149744,
   3203.407,
   4490.349,
   4806.613,
   4761.561,
   5933.3,
   4909.342,
   4787.479,
   4939.46,
   5409.71,
   4429.842,
   4514.023,
   3749.408,
   20437.38,
   3673.275,
   3885.907,
   3401.191,
   3660.677,
   2498.779,
   2486.514,
   2204.803,
   1990.889,
   1868.579,
   1445.353,
   1164.062,
   709.9903,
   591.7086,
   770.683,
   660.688,
   380.0444};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj1_fx1285,Graph_from_VbbHcc_algo_H_dR_Bj1_fy1285,Graph_from_VbbHcc_algo_H_dR_Bj1_fex1285,Graph_from_VbbHcc_algo_H_dR_Bj1_fey1285);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetMinimum(20.86154);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetMaximum(169335.9);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__393 = new TH1D("data_mc_ratio__393","",30,0,6);
   data_mc_ratio__393->SetBinContent(1,3.822562);
   data_mc_ratio__393->SetBinContent(2,1.089072);
   data_mc_ratio__393->SetBinContent(3,0.9985667);
   data_mc_ratio__393->SetBinContent(4,0.9963401);
   data_mc_ratio__393->SetBinContent(5,1.108909);
   data_mc_ratio__393->SetBinContent(6,1.096543);
   data_mc_ratio__393->SetBinContent(7,1.084097);
   data_mc_ratio__393->SetBinContent(8,1.044535);
   data_mc_ratio__393->SetBinContent(9,1.06138);
   data_mc_ratio__393->SetBinContent(10,1.007343);
   data_mc_ratio__393->SetBinContent(11,1.048793);
   data_mc_ratio__393->SetBinContent(12,1.015555);
   data_mc_ratio__393->SetBinContent(13,1.029001);
   data_mc_ratio__393->SetBinContent(14,0.8047534);
   data_mc_ratio__393->SetBinContent(15,0.9949557);
   data_mc_ratio__393->SetBinContent(16,1.043533);
   data_mc_ratio__393->SetBinContent(17,1.030915);
   data_mc_ratio__393->SetBinContent(18,0.8940874);
   data_mc_ratio__393->SetBinContent(19,1.077501);
   data_mc_ratio__393->SetBinContent(20,1.001345);
   data_mc_ratio__393->SetBinContent(21,1.014739);
   data_mc_ratio__393->SetBinContent(22,1.025333);
   data_mc_ratio__393->SetBinContent(23,0.9869692);
   data_mc_ratio__393->SetBinContent(24,1.080703);
   data_mc_ratio__393->SetBinContent(25,1.166667);
   data_mc_ratio__393->SetBinContent(26,1.31793);
   data_mc_ratio__393->SetBinContent(27,1.228801);
   data_mc_ratio__393->SetBinContent(28,0.8882091);
   data_mc_ratio__393->SetBinContent(29,0.8698175);
   data_mc_ratio__393->SetBinContent(30,1.435196);
   data_mc_ratio__393->SetBinContent(31,1.40512);
   data_mc_ratio__393->SetBinError(1,0.3963813);
   data_mc_ratio__393->SetBinError(2,0.004563742);
   data_mc_ratio__393->SetBinError(3,0.002827598);
   data_mc_ratio__393->SetBinError(4,0.002717568);
   data_mc_ratio__393->SetBinError(5,0.002769955);
   data_mc_ratio__393->SetBinError(6,0.002721865);
   data_mc_ratio__393->SetBinError(7,0.002754828);
   data_mc_ratio__393->SetBinError(8,0.002741307);
   data_mc_ratio__393->SetBinError(9,0.002885955);
   data_mc_ratio__393->SetBinError(10,0.002842135);
   data_mc_ratio__393->SetBinError(11,0.003074661);
   data_mc_ratio__393->SetBinError(12,0.003090064);
   data_mc_ratio__393->SetBinError(13,0.003255159);
   data_mc_ratio__393->SetBinError(14,0.002635718);
   data_mc_ratio__393->SetBinError(15,0.003373487);
   data_mc_ratio__393->SetBinError(16,0.00367626);
   data_mc_ratio__393->SetBinError(17,0.003922976);
   data_mc_ratio__393->SetBinError(18,0.003645603);
   data_mc_ratio__393->SetBinError(19,0.00479919);
   data_mc_ratio__393->SetBinError(20,0.004872911);
   data_mc_ratio__393->SetBinError(21,0.005493105);
   data_mc_ratio__393->SetBinError(22,0.006227074);
   data_mc_ratio__393->SetBinError(23,0.006716719);
   data_mc_ratio__393->SetBinError(24,0.008319993);
   data_mc_ratio__393->SetBinError(25,0.01024812);
   data_mc_ratio__393->SetBinError(26,0.01367512);
   data_mc_ratio__393->SetBinError(27,0.01539856);
   data_mc_ratio__393->SetBinError(28,0.01427775);
   data_mc_ratio__393->SetBinError(29,0.01828462);
   data_mc_ratio__393->SetBinError(30,0.03904662);
   data_mc_ratio__393->SetBinError(31,0.5060842);
   data_mc_ratio__393->SetMinimum(0.4);
   data_mc_ratio__393->SetMaximum(1.6);
   data_mc_ratio__393->SetEntries(1586.462);
   data_mc_ratio__393->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__393->SetLineColor(ci);
   data_mc_ratio__393->SetLineWidth(2);
   data_mc_ratio__393->SetMarkerStyle(20);
   data_mc_ratio__393->SetMarkerSize(1.2);
   data_mc_ratio__393->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__393->GetXaxis()->SetRange(1,30);
   data_mc_ratio__393->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__393->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__393->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__393->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__393->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__393->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__393->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__393->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__393->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__393->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__393->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__393->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__393->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__393->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__393->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__393->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__393->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1286[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1286[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1286[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1286[30] = {
   0.04725771,
   0.06126293,
   0.03595327,
   0.03562809,
   0.03294569,
   0.040087,
   0.03436718,
   0.03444286,
   0.03876033,
   0.04337963,
   0.03992942,
   0.04244194,
   0.03860924,
   0.1764251,
   0.04201533,
   0.0503267,
   0.0507738,
   0.05441519,
   0.0534129,
   0.05896363,
   0.06556187,
   0.07529224,
   0.08541266,
   0.09257923,
   0.1047895,
   0.1007448,
   0.114179,
   0.1768805,
   0.2539452,
   0.4037292};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1286,Graph_from_mc_statistical_error_fy1286,Graph_from_mc_statistical_error_fex1286,Graph_from_mc_statistical_error_fey1286);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1286 = new TH1F("Graph_Graph_from_mc_statistical_error1286","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1286->SetMinimum(0.515525);
   Graph_Graph_from_mc_statistical_error1286->SetMaximum(1.484475);
   Graph_Graph_from_mc_statistical_error1286->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1286->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1286->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1286->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1286);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_algo_18->cd();
   H_dR_Bj1_algo_18->Modified();
   H_dR_Bj1_algo_18->cd();
   H_dR_Bj1_algo_18->SetSelected(H_dR_Bj1_algo_18);
}
