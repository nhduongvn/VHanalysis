void H_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Mon Jul 24 10:11:48 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(0,0,1,1);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetFillStyle(4000);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-127.3914,6.314516,127274);
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
   st->SetMaximum(109079.9);
   
   TH1F *st_stack_138 = new TH1F("st_stack_138","",30,0,6);
   st_stack_138->SetMinimum(0.01);
   st_stack_138->SetMaximum(114533.9);
   st_stack_138->SetDirectory(0);
   st_stack_138->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_138->SetLineColor(ci);
   st_stack_138->GetXaxis()->SetRange(1,30);
   st_stack_138->GetXaxis()->SetLabelFont(42);
   st_stack_138->GetXaxis()->SetLabelSize(0.035);
   st_stack_138->GetXaxis()->SetTitleSize(0.035);
   st_stack_138->GetXaxis()->SetTitleFont(42);
   st_stack_138->GetYaxis()->SetTitle("Events/0.2");
   st_stack_138->GetYaxis()->SetLabelFont(42);
   st_stack_138->GetYaxis()->SetLabelSize(0.05);
   st_stack_138->GetYaxis()->SetTitleSize(0.057);
   st_stack_138->GetYaxis()->SetTitleOffset(1.2);
   st_stack_138->GetYaxis()->SetTitleFont(42);
   st_stack_138->GetZaxis()->SetLabelFont(42);
   st_stack_138->GetZaxis()->SetLabelSize(0.035);
   st_stack_138->GetZaxis()->SetTitleSize(0.035);
   st_stack_138->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_138);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,21920.87);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,44516.86);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,27961.65);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,19634.84);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,13293.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,9656.289);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,5717.974);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,4420.396);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,4162.376);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,3746.147);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,3148.082);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,2363.07);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,1398.863);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,3284.475);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,723.0265);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,1029.169);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,662.594);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,612.4567);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,363.9891);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,55.00946);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,289.1149);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,0.4389415);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,24.76288);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,1219.544);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,2328.301);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,2007.676);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,2016.613);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,1808.59);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,1623.059);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,885.4159);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,1297.215);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,802.7362);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,763.2132);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,717.9939);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,1215.363);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,442.7893);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,1335.641);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,263.6668);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,436.6323);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,356.1346);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,354.8485);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,253.1551);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,26.18756);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,250.3725);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,0.4389415);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,21.3793);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(13510);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,125.0266);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,356.362);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,274.4594);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,171.9028);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,110.9578);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,82.17203);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,65.50334);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,56.52881);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,46.52207);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,41.63773);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,28.87961);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,23.64913);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,21.99529);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,18.2982);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,11.58144);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,9.375622);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,7.023599);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,6.833749);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,5.017757);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,2.077008);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,1.46543);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,0.6996399);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,0.4828109);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,0.2907152);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,0.1453576);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,0.1453576);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.05188141);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,4.69335);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,7.155952);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,6.181998);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,4.821775);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,3.804032);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,3.356273);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,2.864524);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,2.785191);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,2.445558);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,2.301157);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,1.83693);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,1.618072);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,1.694268);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,1.588825);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,1.113083);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,1.065777);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,0.9228179);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,1.004891);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,0.8990544);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,0.4617316);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,0.4300018);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.3010803);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.15286);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.1188325);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.08402726);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.08402726);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.05188141);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(19837);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(1,1055.482);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(2,3614.781);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(3,2988.55);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(4,1958.027);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(5,1276.831);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(6,892.2411);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(7,690.8776);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(8,559.995);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(9,463.3645);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(10,380.6989);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(11,302.0855);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(12,256.4355);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(13,212.6094);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(14,185.0957);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(15,155.1865);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(16,121.006);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(17,93.83836);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(18,68.83827);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(19,43.29617);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(20,29.98096);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(21,19.55087);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(22,11.553);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(23,6.111517);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(24,3.52096);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(25,2.699975);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(26,1.567992);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(27,0.8538569);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(28,0.9083561);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(29,0.5869676);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(30,0.454178);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(31,0.7868031);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(1,8.045174);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(2,14.99358);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(3,13.76052);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(4,11.14318);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(5,9.011875);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(6,7.532176);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(7,6.619185);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(8,5.981168);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(9,5.445616);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(10,4.929799);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(11,4.39065);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(12,4.047154);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(13,3.693344);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(14,3.453958);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(15,3.163179);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(16,2.799559);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(17,2.45553);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(18,2.104817);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(19,1.661156);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(20,1.381095);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(21,1.106934);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(22,0.8580992);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(23,0.6261409);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(24,0.4779902);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(25,0.4106776);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(26,0.3164965);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(27,0.2337143);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(28,0.2470992);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(29,0.183933);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(30,0.1747255);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(31,0.2254513);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetEntries(257832);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(1,172.8559);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(2,372.5757);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(3,231.8994);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(4,125.3982);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(5,89.50041);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(6,55.57056);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(7,54.42746);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(8,42.47262);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(9,32.33298);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(10,22.43392);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(11,14.10876);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(12,17.56042);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(13,9.197645);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(14,10.17191);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(15,9.545363);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(16,3.223256);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(17,6.083763);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(18,5.405029);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(19,1.777758);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(20,0.8999164);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(21,0.5530866);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(22,0.3541571);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(23,0.3541571);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(24,0.09588989);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(1,5.866349);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(2,13.66799);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(3,12.85193);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(4,8.364713);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(5,8.242209);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(6,5.750664);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(7,6.367225);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(8,5.525967);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(9,4.629574);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(10,3.414303);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(11,1.755619);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(12,3.326863);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(13,1.423349);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(14,1.633446);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(15,1.590701);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(16,0.813152);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(17,2.880336);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(18,2.837302);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(19,0.7269745);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(20,0.4192834);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(21,0.3723147);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(22,0.3541571);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(23,0.3541571);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(24,0.09588989);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetEntries(8463);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(1,98.4155);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(2,205.8555);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(3,102.7274);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(4,63.79848);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(5,51.23627);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(6,32.21991);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(7,29.37632);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(8,12.10185);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(9,13.93656);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(10,7.3578);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(11,4.805838);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(12,6.366064);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(13,3.73287);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(14,4.842335);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(15,4.733506);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(16,9.901859);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(17,1.548544);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(18,7.237174);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(19,0.7537539);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(20,1.428866);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(21,0.08109801);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(1,6.13356);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(2,15.95647);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(3,8.240882);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(4,6.466938);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(5,10.5002);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(6,7.50403);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(7,7.764438);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(8,2.759681);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(9,3.014036);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(10,1.883631);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(11,1.375478);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(12,2.351347);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(13,1.35085);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(14,1.782685);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(15,2.040686);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(16,6.837228);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(17,0.5901117);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(18,6.635512);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(19,0.4722619);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(20,1.173919);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(21,0.08109801);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetEntries(3604);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(1,0.4032303);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(2,1.612921);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(3,1.209691);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(4,0.2016151);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(5,0.2016151);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(6,0.2016151);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(7,0.2016151);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(8,0.4032303);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(1,0.2851269);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(2,0.5702537);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(3,0.4938542);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(4,0.2016151);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(5,0.2016151);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(6,0.2016151);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(7,0.2016151);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(8,0.2851269);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetEntries(22);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(1,3.33806);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(2,6.095588);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(3,2.176996);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(4,0.7256652);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(5,0.5805321);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(6,0.5805321);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(7,0.7256652);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(8,0.5805321);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(9,0.145133);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(10,0.145133);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(13,0.145133);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(21,0.145133);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(1,0.6960336);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(2,0.9405696);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(3,0.5620978);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(4,0.3245273);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(5,0.2902661);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(6,0.2902661);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(7,0.3245273);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(8,0.2902661);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(9,0.145133);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(10,0.145133);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(13,0.145133);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(21,0.145133);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetEntries(106);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(1,3.361915);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(2,6.163511);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(3,2.241277);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(4,1.120638);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(5,0.7470923);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(6,0.9338654);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(7,0.1867731);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(9,0.3735461);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(10,0.1867731);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(11,0.1867731);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(14,0.1867731);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(16,0.3735461);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(1,0.792411);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(2,1.07293);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(3,0.6470009);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(4,0.4574987);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(5,0.3735461);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(6,0.4176373);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(7,0.1867731);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(9,0.264137);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(10,0.1867731);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(11,0.1867731);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(14,0.1867731);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(16,0.264137);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetEntries(86);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(1,2.002745);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(2,3.107485);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(3,1.345392);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(4,0.6928851);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(5,0.4118548);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(6,0.3004117);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(7,0.2131954);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(8,0.1825082);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(9,0.1631268);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(10,0.1211338);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(11,0.07591049);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(12,0.08560119);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(13,0.08075584);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(14,0.05329886);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(15,0.03553257);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(16,0.04522327);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(17,0.03876281);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(18,0.01776629);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(19,0.02584187);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(20,0.01292094);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(21,0.003230234);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(24,0.001615117);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(25,0.001615117);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(26,0.001615117);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(1,0.05687413);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(2,0.07084456);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(3,0.04661508);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(4,0.03345281);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(5,0.02579135);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(6,0.02202726);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(7,0.01855628);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(8,0.01716893);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(9,0.01623172);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(10,0.01398732);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(11,0.01107268);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(12,0.01175823);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(13,0.0114206);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(14,0.00927814);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(15,0.00757557);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(16,0.008546395);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(17,0.007912424);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(18,0.005356737);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(19,0.006460468);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(20,0.00456824);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(21,0.00228412);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(24,0.001615117);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(25,0.001615117);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(26,0.001615117);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetEntries(5585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(1,0.9474193);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(2,2.283757);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(3,1.226462);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(4,0.652206);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(5,0.3715045);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(6,0.2599702);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(7,0.2064835);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(8,0.1538261);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(9,0.12729);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(10,0.09370537);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(11,0.06799859);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(12,0.06219383);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(13,0.04726731);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(14,0.04934044);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(15,0.04934044);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(16,0.03358467);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(17,0.02570678);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(18,0.01492652);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(19,0.01160952);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(20,0.007048634);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(21,0.004975506);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(22,0.002073128);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(23,0.001658502);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(24,0.0008292511);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(25,0.0004146255);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(26,0.0008292511);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(27,0.0004146255);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(28,0.0004146255);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(1,0.01981979);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(2,0.03077181);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(3,0.02255045);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(4,0.01644449);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(5,0.01241109);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(6,0.01038221);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(7,0.009252748);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(8,0.007986252);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(9,0.007264826);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(10,0.006233189);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(11,0.005309798);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(12,0.005078105);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(13,0.004426989);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(14,0.004523031);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(15,0.004523031);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(16,0.00373163);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(17,0.003264765);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(18,0.002487753);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(19,0.002193992);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(20,0.001709545);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(21,0.001436305);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(22,0.0009271309);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(23,0.0008292511);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(24,0.0005863691);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(25,0.0004146255);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(26,0.0005863691);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(27,0.0004146255);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(28,0.0004146255);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(1,0.03950628);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(2,0.1754079);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(3,0.1137781);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(4,0.05846929);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(5,0.01264201);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(6,0.01106176);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(8,0.004740753);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(9,0.003160502);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(11,0.003160502);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(13,0.003160502);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(16,0.003160502);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(18,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(1,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(2,0.01664898);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(3,0.01340888);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(4,0.009612292);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(5,0.004469625);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(6,0.004180952);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(7,0.003533549);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(8,0.002737075);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(9,0.002234813);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(11,0.002234813);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(13,0.002234813);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(14,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(15,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(16,0.002234813);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(18,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetEntries(279);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(1,0.01307916);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(2,0.06435775);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(3,0.04255916);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(4,0.01930733);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(5,0.01058789);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(6,0.004152113);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(7,0.002906479);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(8,0.002906479);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(9,0.001038028);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(10,0.00145324);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(11,0.000622817);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(12,0.001038028);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(13,0.001245634);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(14,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(15,0.001245634);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(16,0.000622817);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(17,0.0008304226);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(18,0.000622817);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(19,0.000622817);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(1,0.001647819);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(2,0.003655275);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(3,0.002972461);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(4,0.002002076);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(5,0.001482601);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(6,0.0009284407);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(7,0.0007767892);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(8,0.0007767892);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(9,0.0004642204);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(10,0.0005492729);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(11,0.0003595835);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(12,0.0004642204);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(13,0.0005085279);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(14,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(15,0.0005085279);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(16,0.0003595835);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(17,0.0004152113);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(18,0.0003595835);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(19,0.0003595835);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetEntries(816);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj0__275 = new TH1D("VbbHcc_algo_H_dR_Bj0__275","",30,0,6);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(1,4302);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(2,7627);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(3,5057);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(4,3329);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(5,2212);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(6,1487);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(7,1161);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(8,975);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(9,779);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(10,616);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(11,512);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(12,391);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(13,317);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(14,230);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(15,208);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(16,170);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(17,115);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(18,92);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(19,62);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(20,39);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(21,24);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(22,9);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(23,9);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(24,6);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(25,3);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(26,4);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(27,2);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(28,1);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(29,1);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(30,1);
   VbbHcc_algo_H_dR_Bj0__275->SetBinContent(31,2);
   VbbHcc_algo_H_dR_Bj0__275->SetEntries(29772);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0__275->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0__275->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj0__275->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj0__275->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj0__275->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0__275->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__275->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__275->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__275->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__275->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__275->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__275->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__275->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0__275->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__275->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__275->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__275->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__275->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__275->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fx1275[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fy1275[30] = {
   23382.76,
   49085.94,
   31567.64,
   21957.44,
   14824.16,
   10720.78,
   6559.703,
   5092.822,
   4719.346,
   4198.823,
   3498.296,
   2667.23,
   1646.676,
   3503.174,
   904.1611,
   1173.132,
   771.1535,
   700.8058,
   414.8726,
   89.41618,
   310.9187,
   13.04781,
   6.950144,
   3.910009,
   2.847362,
   1.715794,
   25.61716,
   0.9606521,
   0.5869676,
   0.454178};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fex1275[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fey1275[30] = {
   1219.609,
   2328.456,
   2007.791,
   2016.678,
   1808.665,
   1623.107,
   885.5023,
   1297.246,
   802.7775,
   763.2426,
   718.0131,
   1215.378,
   442.8123,
   1335.649,
   263.7008,
   436.697,
   356.1564,
   354.9295,
   253.1636,
   26.25762,
   250.3756,
   1.070085,
   0.7354227,
   0.5017904,
   0.419189,
   0.3274654,
   21.38058,
   0.2524874,
   0.183933,
   0.1747255};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj0_fx1275,Graph_from_VbbHcc_algo_H_dR_Bj0_fy1275,Graph_from_VbbHcc_algo_H_dR_Bj0_fex1275,Graph_from_VbbHcc_algo_H_dR_Bj0_fey1275);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetMinimum(0.2515072);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetMaximum(56555.81);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj0","MC unc. (stat.)","fl");

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
   H_dR_Bj0_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__276 = new TH1D("data_mc_ratio__276","",30,0,6);
   data_mc_ratio__276->SetBinContent(1,0.1839817);
   data_mc_ratio__276->SetBinContent(2,0.1553805);
   data_mc_ratio__276->SetBinContent(3,0.1601957);
   data_mc_ratio__276->SetBinContent(4,0.1516115);
   data_mc_ratio__276->SetBinContent(5,0.1492158);
   data_mc_ratio__276->SetBinContent(6,0.1387025);
   data_mc_ratio__276->SetBinContent(7,0.1769897);
   data_mc_ratio__276->SetBinContent(8,0.1914459);
   data_mc_ratio__276->SetBinContent(9,0.1650653);
   data_mc_ratio__276->SetBinContent(10,0.1467078);
   data_mc_ratio__276->SetBinContent(11,0.146357);
   data_mc_ratio__276->SetBinContent(12,0.146594);
   data_mc_ratio__276->SetBinContent(13,0.192509);
   data_mc_ratio__276->SetBinContent(14,0.06565475);
   data_mc_ratio__276->SetBinContent(15,0.2300475);
   data_mc_ratio__276->SetBinContent(16,0.1449112);
   data_mc_ratio__276->SetBinContent(17,0.1491272);
   data_mc_ratio__276->SetBinContent(18,0.1312775);
   data_mc_ratio__276->SetBinContent(19,0.1494435);
   data_mc_ratio__276->SetBinContent(20,0.4361627);
   data_mc_ratio__276->SetBinContent(21,0.0771906);
   data_mc_ratio__276->SetBinContent(22,0.6897709);
   data_mc_ratio__276->SetBinContent(23,1.294937);
   data_mc_ratio__276->SetBinContent(24,1.534523);
   data_mc_ratio__276->SetBinContent(25,1.053607);
   data_mc_ratio__276->SetBinContent(26,2.331282);
   data_mc_ratio__276->SetBinContent(27,0.07807268);
   data_mc_ratio__276->SetBinContent(28,1.04096);
   data_mc_ratio__276->SetBinContent(29,1.703672);
   data_mc_ratio__276->SetBinContent(30,2.20178);
   data_mc_ratio__276->SetBinContent(31,2.541932);
   data_mc_ratio__276->SetBinError(1,0.002805043);
   data_mc_ratio__276->SetBinError(2,0.00177918);
   data_mc_ratio__276->SetBinError(3,0.002252705);
   data_mc_ratio__276->SetBinError(4,0.002627696);
   data_mc_ratio__276->SetBinError(5,0.003172652);
   data_mc_ratio__276->SetBinError(6,0.003596905);
   data_mc_ratio__276->SetBinError(7,0.005194359);
   data_mc_ratio__276->SetBinError(8,0.006131177);
   data_mc_ratio__276->SetBinError(9,0.005914077);
   data_mc_ratio__276->SetBinError(10,0.005911024);
   data_mc_ratio__276->SetBinError(11,0.006468125);
   data_mc_ratio__276->SetBinError(12,0.007413579);
   data_mc_ratio__276->SetBinError(13,0.01081238);
   data_mc_ratio__276->SetBinError(14,0.004329146);
   data_mc_ratio__276->SetBinError(15,0.01595092);
   data_mc_ratio__276->SetBinError(16,0.01111418);
   data_mc_ratio__276->SetBinError(17,0.01390619);
   data_mc_ratio__276->SetBinError(18,0.01368662);
   data_mc_ratio__276->SetBinError(19,0.01897934);
   data_mc_ratio__276->SetBinError(20,0.06984192);
   data_mc_ratio__276->SetBinError(21,0.01575646);
   data_mc_ratio__276->SetBinError(22,0.2299236);
   data_mc_ratio__276->SetBinError(23,0.4316458);
   data_mc_ratio__276->SetBinError(24,0.6264665);
   data_mc_ratio__276->SetBinError(25,0.6083002);
   data_mc_ratio__276->SetBinError(26,1.165641);
   data_mc_ratio__276->SetBinError(27,0.05520572);
   data_mc_ratio__276->SetBinError(28,1.04096);
   data_mc_ratio__276->SetBinError(29,1.703672);
   data_mc_ratio__276->SetBinError(30,2.20178);
   data_mc_ratio__276->SetBinError(31,1.939389);
   data_mc_ratio__276->SetMinimum(0.4);
   data_mc_ratio__276->SetMaximum(1.6);
   data_mc_ratio__276->SetEntries(18.82256);
   data_mc_ratio__276->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__276->SetLineColor(ci);
   data_mc_ratio__276->SetLineWidth(2);
   data_mc_ratio__276->SetMarkerStyle(20);
   data_mc_ratio__276->SetMarkerSize(1.2);
   data_mc_ratio__276->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__276->GetXaxis()->SetRange(1,30);
   data_mc_ratio__276->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__276->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__276->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__276->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__276->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__276->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__276->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__276->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__276->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__276->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__276->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__276->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__276->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__276->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__276->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__276->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__276->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1276[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1276[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1276[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1276[30] = {
   0.05215849,
   0.04743631,
   0.06360282,
   0.09184483,
   0.1220079,
   0.1513982,
   0.1349912,
   0.2547205,
   0.1701036,
   0.1817754,
   0.2052465,
   0.4556704,
   0.2689128,
   0.3812682,
   0.2916525,
   0.3722488,
   0.4618489,
   0.5064592,
   0.6102201,
   0.2936563,
   0.8052768,
   0.08201259,
   0.105814,
   0.1283348,
   0.1472201,
   0.1908536,
   0.8346194,
   0.2628291,
   0.3133614,
   0.3847071};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1276,Graph_from_mc_statistical_error_fy1276,Graph_from_mc_statistical_error_fex1276,Graph_from_mc_statistical_error_fey1276);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1276 = new TH1F("Graph_Graph_from_mc_statistical_error1276","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1276->SetMinimum(0.1488425);
   Graph_Graph_from_mc_statistical_error1276->SetMaximum(2.001543);
   Graph_Graph_from_mc_statistical_error1276->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1276->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1276->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1276->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1276);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->SetSelected(H_dR_Bj0_algo_17);
}
