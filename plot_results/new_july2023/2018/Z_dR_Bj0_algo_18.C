void Z_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Mon Jul 24 10:11:49 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(0,0,1,1);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetFillStyle(4000);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-217.1821,6.314516,216974.9);
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
   st->SetMaximum(185957.8);
   
   TH1F *st_stack_147 = new TH1F("st_stack_147","",30,0,6);
   st_stack_147->SetMinimum(0.01);
   st_stack_147->SetMaximum(195255.7);
   st_stack_147->SetDirectory(0);
   st_stack_147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_147->SetLineColor(ci);
   st_stack_147->GetXaxis()->SetRange(1,30);
   st_stack_147->GetXaxis()->SetLabelFont(42);
   st_stack_147->GetXaxis()->SetLabelSize(0.035);
   st_stack_147->GetXaxis()->SetTitleSize(0.035);
   st_stack_147->GetXaxis()->SetTitleFont(42);
   st_stack_147->GetYaxis()->SetTitle("Events/0.2");
   st_stack_147->GetYaxis()->SetLabelFont(42);
   st_stack_147->GetYaxis()->SetLabelSize(0.05);
   st_stack_147->GetYaxis()->SetTitleSize(0.057);
   st_stack_147->GetYaxis()->SetTitleOffset(1.2);
   st_stack_147->GetYaxis()->SetTitleFont(42);
   st_stack_147->GetZaxis()->SetLabelFont(42);
   st_stack_147->GetZaxis()->SetLabelSize(0.035);
   st_stack_147->GetZaxis()->SetTitleSize(0.035);
   st_stack_147->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_147);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,22658.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,54096.42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,32198.22);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,22377.22);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,12313.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,10078.74);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,5209.958);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,3421.102);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,2665.375);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,2569.79);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,3807.237);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,1250.239);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,2172.323);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,1060.464);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,1691.27);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,2671.565);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,953.2916);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,1089.727);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,728.9973);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,969.8155);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,447.2671);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,408.493);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,45.74991);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,413.7343);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,0.6311059);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,40.80225);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(27,29.93019);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(29,11.50317);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,1387.004);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,2568.976);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,2051.316);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,2004.021);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,1346.26);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,1369.269);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,814.8679);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,717.1339);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,620.506);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,619.5085);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,1771.39);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,371.144);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,617.6307);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,363.8565);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,608.6569);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,1700.25);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,364.5903);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,495.3502);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,356.7046);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,493.172);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,347.3422);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,345.935);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,31.70355);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,346.9191);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,0.6311059);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,31.25758);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(27,29.30588);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(29,10.89036);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(13324);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,57.7497);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,332.3717);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,384.3195);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,270.4676);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,172.2943);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,116.8388);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,81.8072);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,66.5477);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,46.56711);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,38.78119);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,34.18318);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,26.30106);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,19.69606);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,23.37026);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,18.11417);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,14.72322);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,11.52699);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,11.99827);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,8.105785);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,6.681983);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,4.573581);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,2.935004);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,1.644877);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,0.8043367);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,0.358669);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,0.8684513);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,0.05908785);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,0.1024769);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,0.4378183);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.1103263);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,0.1694141);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,3.082231);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,7.116772);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,7.595466);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,6.204815);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,4.886899);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,3.982064);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,3.352543);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,3.110978);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,2.500709);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,2.329265);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,2.124683);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,1.98524);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,1.577148);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,1.877476);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,1.592208);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,1.321104);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,1.186146);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,1.396179);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,0.9849747);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,1.012998);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,0.886877);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,0.7232213);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,0.4543619);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.3229579);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.1355641);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.407674);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.05908785);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.07246208);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.2916474);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.07820966);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.09802104);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(21685);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(1,473.0447);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(2,3199.332);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(3,3963.363);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(4,2951.263);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(5,1895.472);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(6,1250.753);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(7,905.4109);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(8,675.2813);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(9,536.8756);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(10,437.8952);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(11,366.9891);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(12,308.6474);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(13,269.404);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(14,239.4535);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(15,223.2209);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(16,191.465);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(17,164.8825);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(18,133.6255);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(19,99.08799);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(20,69.55433);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(21,36.33721);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(22,20.11917);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(23,11.57357);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(24,7.420071);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(25,3.864163);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(26,3.619929);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(27,1.548741);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(28,1.305031);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(29,0.995534);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(30,0.6796629);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(31,1.811378);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(1,5.386429);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(2,13.92461);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(3,15.45044);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(4,13.29691);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(5,10.64215);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(6,8.634128);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(7,7.34715);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(8,6.343635);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(9,5.656321);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(10,5.107938);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(11,4.671731);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(12,4.287516);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(13,4.004928);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(14,3.779333);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(15,3.651483);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(16,3.382932);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(17,3.149545);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(18,2.839148);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(19,2.44192);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(20,2.051952);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(21,1.477706);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(22,1.092679);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(23,0.818424);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(24,0.6662501);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(25,0.4747453);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(26,0.4654811);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(27,0.2986335);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(28,0.2770634);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(29,0.246142);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(30,0.192515);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(31,0.3269871);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetEntries(319331);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(1,179.7043);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(2,552.6418);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(3,278.2311);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(4,161.1519);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(5,91.34797);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(6,71.66929);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(7,45.00544);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(8,35.5663);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(9,21.05251);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(10,16.88989);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(11,13.43666);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(12,15.08324);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(13,13.52862);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(14,9.98343);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(15,10.39336);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(16,9.017452);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(17,8.408146);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(18,5.828322);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(19,6.464256);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(20,8.990899);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(21,3.222335);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(22,0.2515567);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(23,0.3441296);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(24,0.1257783);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(25,0.6746398);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(26,0.09257296);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(28,0.1257783);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(1,5.623198);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(2,17.71529);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(3,13.51912);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(4,10.48269);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(5,8.525137);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(6,8.212219);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(7,5.401143);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(8,5.166228);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(9,2.541095);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(10,2.283704);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(11,2.023217);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(12,2.19458);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(13,2.156706);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(14,1.723808);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(15,1.890933);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(16,1.692744);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(17,1.723327);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(18,1.394819);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(19,1.427516);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(20,4.261805);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(21,0.9628676);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(22,0.1778774);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(23,0.2005246);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(24,0.1257783);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(25,0.5066989);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(26,0.09257296);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(28,0.1257783);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetEntries(8300);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(1,105.5385);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(2,289.6773);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(3,120.6322);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(4,74.97516);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(5,53.95397);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(6,30.69316);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(7,20.97765);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(8,19.33955);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(9,4.714558);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(10,12.11031);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(11,18.42963);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(12,4.736697);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(13,7.171173);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(14,4.879009);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(15,6.193229);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(16,3.725859);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(17,2.951702);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(18,1.943137);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(19,5.003378);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(20,2.641345);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(21,0.6112486);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(22,0.2206617);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(23,0.352453);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(24,2.08167);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(25,0.04704769);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(28,0.2883298);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(31,0.1265664);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(1,8.405551);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(2,22.2888);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(3,10.82843);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(4,8.646138);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(5,12.29349);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(6,5.837169);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(7,4.934657);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(8,4.884015);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(9,0.9489857);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(10,3.757594);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(11,10.94614);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(12,2.237714);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(13,3.060029);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(14,2.243659);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(15,3.01604);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(16,2.181111);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(17,2.117349);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(18,0.7301459);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(19,2.975568);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(20,2.10799);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(21,0.4447971);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(22,0.1429896);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(23,0.352453);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(24,2.08167);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(25,0.04704769);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(28,0.2883298);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(31,0.1265664);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetEntries(3417);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(1,0.5780967);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(2,0.5780967);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(4,0.2890483);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(5,0.2890483);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(6,0.2890483);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(15,0.2890483);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(1,0.4087761);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(2,0.4087761);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(4,0.2890483);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(5,0.2890483);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(6,0.2890483);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(15,0.2890483);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetEntries(8);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(1,4.146611);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(2,8.707884);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(3,2.487967);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(4,1.658645);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(5,0.6219917);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(7,0.4146611);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(8,0.2073306);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(10,0.2073306);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(11,0.2073306);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(15,0.2073306);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(19,0.2073306);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(1,0.9272105);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(2,1.343656);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(3,0.7182142);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(4,0.5864194);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(5,0.3591071);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(7,0.2932097);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(8,0.2073306);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(10,0.2073306);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(11,0.2073306);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(15,0.2073306);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(19,0.2073306);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetEntries(92);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(1,2.67916);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(2,10.09837);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(3,3.915696);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(4,1.854803);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(5,0.6182678);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(6,0.6182678);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(7,0.2060893);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(8,0.2060893);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(17,0.2060893);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(1,0.7430654);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(2,1.442625);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(3,0.8983222);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(4,0.6182678);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(5,0.3569571);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(6,0.3569571);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(7,0.2060893);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(8,0.2060893);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(17,0.2060893);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetEntries(99);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(1,0.9463124);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(2,4.747562);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(3,2.667504);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(4,1.069744);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(5,0.5897309);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(6,0.3931539);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(7,0.278865);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(8,0.2057201);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(9,0.1805765);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(10,0.1600045);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(11,0.1097174);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(12,0.08914537);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(13,0.09828848);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(14,0.08914537);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(15,0.0640018);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(16,0.03657246);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(17,0.04114402);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(18,0.05028713);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(19,0.05943024);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(20,0.02285779);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(21,0.006857336);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(22,0.006857336);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(23,0.002285779);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(1,0.04650872);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(2,0.1041723);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(3,0.07808536);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(4,0.04944895);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(5,0.03671504);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(6,0.02997771);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(7,0.02524725);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(8,0.0216848);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(9,0.02031644);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(10,0.0191242);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(11,0.01583634);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(12,0.01427468);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(13,0.01498885);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(14,0.01427468);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(15,0.0120952);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(16,0.009143115);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(17,0.009697737);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(18,0.01072125);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(19,0.01165523);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(20,0.007228267);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(21,0.003959085);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(22,0.003959085);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(23,0.002285779);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetEntries(5213);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(1,0.5681258);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(2,3.042126);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(3,2.436443);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(4,1.279326);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(5,0.6217789);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(6,0.3702058);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(7,0.2456116);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(8,0.1836125);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(9,0.1424786);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(10,0.1204212);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(11,0.08763326);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(12,0.06736434);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(13,0.07034507);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(14,0.07272965);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(15,0.06497977);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(16,0.05782603);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(17,0.0560376);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(18,0.04828772);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(19,0.04530699);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(20,0.02503807);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(21,0.01788434);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(22,0.005961446);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(23,0.003576868);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(25,0.001788434);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(26,0.002384579);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(31,0.0005961446);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(1,0.0184034);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(2,0.04258576);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(3,0.03811132);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(4,0.02761636);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(5,0.0192528);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(6,0.01485585);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(7,0.01210041);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(8,0.0104623);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(9,0.009216172);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(10,0.008472807);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(11,0.00722787);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(12,0.006337104);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(13,0.006475788);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(14,0.006584633);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(15,0.006223933);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(16,0.005871344);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(17,0.005779837);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(18,0.005365302);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(19,0.005197068);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(20,0.003863459);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(21,0.003265219);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(22,0.001885175);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(23,0.00146025);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(25,0.001032553);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(26,0.001192289);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(31,0.0005961446);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(1,0.08192743);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(2,0.3140551);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(3,0.07282438);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(4,0.0295849);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(5,0.01365457);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(6,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(7,0.006827286);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(8,0.009103048);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(9,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(11,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(12,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(15,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(19,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(20,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(21,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(22,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(1,0.01365457);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(2,0.02673415);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(3,0.01287365);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(4,0.008205376);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(5,0.005574455);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(6,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(7,0.003941735);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(8,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(9,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(11,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(12,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(15,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(16,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(17,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(19,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(20,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(21,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(22,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetEntries(246);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(1,0.01498284);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(2,0.09798777);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(3,0.04135264);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(4,0.01498284);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(5,0.005393822);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(6,0.003296225);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(7,0.003296225);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(8,0.002397254);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(9,0.002097598);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(10,0.0008989704);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(11,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(12,0.001198627);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(13,0.0008989704);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(14,0.001797941);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(15,0.001198627);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(16,0.001498284);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(17,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(18,0.0005993136);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(19,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(20,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(1,0.002118894);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(2,0.005418736);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(3,0.00352017);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(4,0.002118894);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(5,0.001271336);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(6,0.0009938492);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(7,0.0009938492);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(8,0.0008475574);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(9,0.0007928174);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(10,0.0005190208);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(11,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(12,0.0005993136);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(13,0.0005190208);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(14,0.0007340063);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(15,0.0005993136);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(16,0.000670053);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(17,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(18,0.0004237787);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(19,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(20,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetEntries(653);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0__293 = new TH1D("VbbHcc_algo_Z_dR_Bj0__293","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(1,21425);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(2,83681);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(3,59073);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(4,38884);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(5,24800);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(6,16236);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(7,11595);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(8,8598);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(9,6657);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(10,5201);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(11,4399);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(12,3720);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(13,3218);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(14,2831);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(15,2615);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(16,2336);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(17,1925);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(18,1785);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(19,1316);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(20,1035);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(21,634);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(22,363);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(23,224);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(24,150);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(25,114);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(26,70);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(27,46);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(28,31);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(29,28);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(30,31);
   VbbHcc_algo_Z_dR_Bj0__293->SetBinContent(31,50);
   VbbHcc_algo_Z_dR_Bj0__293->SetEntries(303100);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0__293->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0__293->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj0__293->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj0__293->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj0__293->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0__293->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__293->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__293->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__293->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__293->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__293->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__293->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__293->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0__293->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__293->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__293->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__293->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__293->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__293->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1293[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1293[30] = {
   23483.35,
   58498.02,
   36956.38,
   25841.27,
   14529.33,
   11550.37,
   6264.314,
   4218.651,
   3274.913,
   3075.955,
   4240.683,
   1605.17,
   2482.292,
   1338.314,
   1949.82,
   2890.594,
   1141.369,
   1243.221,
   847.9757,
   1057.734,
   492.0388,
   432.0348,
   59.6708,
   424.1662,
   5.577413,
   45.38559,
   31.53802,
   1.821616,
   12.93652,
   0.7899892};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1293[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1293[30] = {
   1387.056,
   2569.182,
   2051.462,
   2004.121,
   1346.394,
   1369.34,
   814.9408,
   717.204,
   620.5427,
   619.5496,
   1771.432,
   371.1873,
   617.657,
   363.8919,
   608.6805,
   1700.257,
   364.6161,
   495.3628,
   356.7296,
   493.2002,
   347.3481,
   345.9376,
   31.71996,
   346.9261,
   0.9492174,
   31.26384,
   29.30746,
   0.4254047,
   10.89705,
   0.207795};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1293,Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1293,Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1293,Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1293);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetMinimum(0.5239748);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetMaximum(67173.87);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__294 = new TH1D("data_mc_ratio__294","",30,0,6);
   data_mc_ratio__294->SetBinContent(1,0.9123485);
   data_mc_ratio__294->SetBinContent(2,1.430493);
   data_mc_ratio__294->SetBinContent(3,1.598452);
   data_mc_ratio__294->SetBinContent(4,1.504725);
   data_mc_ratio__294->SetBinContent(5,1.706893);
   data_mc_ratio__294->SetBinContent(6,1.40567);
   data_mc_ratio__294->SetBinContent(7,1.850961);
   data_mc_ratio__294->SetBinContent(8,2.038092);
   data_mc_ratio__294->SetBinContent(9,2.032726);
   data_mc_ratio__294->SetBinContent(10,1.690857);
   data_mc_ratio__294->SetBinContent(11,1.037333);
   data_mc_ratio__294->SetBinContent(12,2.317511);
   data_mc_ratio__294->SetBinContent(13,1.296383);
   data_mc_ratio__294->SetBinContent(14,2.115348);
   data_mc_ratio__294->SetBinContent(15,1.341149);
   data_mc_ratio__294->SetBinContent(16,0.8081383);
   data_mc_ratio__294->SetBinContent(17,1.686571);
   data_mc_ratio__294->SetBinContent(18,1.435786);
   data_mc_ratio__294->SetBinContent(19,1.551931);
   data_mc_ratio__294->SetBinContent(20,0.9785064);
   data_mc_ratio__294->SetBinContent(21,1.288516);
   data_mc_ratio__294->SetBinContent(22,0.8402102);
   data_mc_ratio__294->SetBinContent(23,3.75393);
   data_mc_ratio__294->SetBinContent(24,0.353635);
   data_mc_ratio__294->SetBinContent(25,20.43958);
   data_mc_ratio__294->SetBinContent(26,1.54234);
   data_mc_ratio__294->SetBinContent(27,1.458557);
   data_mc_ratio__294->SetBinContent(28,17.01786);
   data_mc_ratio__294->SetBinContent(29,2.164415);
   data_mc_ratio__294->SetBinContent(30,39.24104);
   data_mc_ratio__294->SetBinContent(31,23.71968);
   data_mc_ratio__294->SetBinError(1,0.006233046);
   data_mc_ratio__294->SetBinError(2,0.004945068);
   data_mc_ratio__294->SetBinError(3,0.006576655);
   data_mc_ratio__294->SetBinError(4,0.007630827);
   data_mc_ratio__294->SetBinError(5,0.01083878);
   data_mc_ratio__294->SetBinError(6,0.01103173);
   data_mc_ratio__294->SetBinError(7,0.01718944);
   data_mc_ratio__294->SetBinError(8,0.02197987);
   data_mc_ratio__294->SetBinError(9,0.02491378);
   data_mc_ratio__294->SetBinError(10,0.02344571);
   data_mc_ratio__294->SetBinError(11,0.01564016);
   data_mc_ratio__294->SetBinError(12,0.0379971);
   data_mc_ratio__294->SetBinError(13,0.02285284);
   data_mc_ratio__294->SetBinError(14,0.03975685);
   data_mc_ratio__294->SetBinError(15,0.02622656);
   data_mc_ratio__294->SetBinError(16,0.0167205);
   data_mc_ratio__294->SetBinError(17,0.03844052);
   data_mc_ratio__294->SetBinError(18,0.0339837);
   data_mc_ratio__294->SetBinError(19,0.04278037);
   data_mc_ratio__294->SetBinError(20,0.0304154);
   data_mc_ratio__294->SetBinError(21,0.05117352);
   data_mc_ratio__294->SetBinError(22,0.0440996);
   data_mc_ratio__294->SetBinError(23,0.25082);
   data_mc_ratio__294->SetBinError(24,0.02887418);
   data_mc_ratio__294->SetBinError(25,1.914342);
   data_mc_ratio__294->SetBinError(26,0.1843449);
   data_mc_ratio__294->SetBinError(27,0.2150525);
   data_mc_ratio__294->SetBinError(28,3.056497);
   data_mc_ratio__294->SetBinError(29,0.409036);
   data_mc_ratio__294->SetBinError(30,7.047899);
   data_mc_ratio__294->SetBinError(31,5.294848);
   data_mc_ratio__294->SetMinimum(0.4);
   data_mc_ratio__294->SetMaximum(1.6);
   data_mc_ratio__294->SetEntries(66.56597);
   data_mc_ratio__294->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__294->SetLineColor(ci);
   data_mc_ratio__294->SetLineWidth(2);
   data_mc_ratio__294->SetMarkerStyle(20);
   data_mc_ratio__294->SetMarkerSize(1.2);
   data_mc_ratio__294->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__294->GetXaxis()->SetRange(1,30);
   data_mc_ratio__294->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__294->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__294->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__294->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__294->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__294->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__294->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__294->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__294->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__294->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__294->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__294->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__294->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__294->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__294->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__294->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__294->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1294[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1294[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1294[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1294[30] = {
   0.0590655,
   0.04391912,
   0.05551035,
   0.07755503,
   0.09266734,
   0.1185538,
   0.1300926,
   0.1700079,
   0.1894838,
   0.201417,
   0.4177232,
   0.2312448,
   0.2488253,
   0.2719033,
   0.3121726,
   0.5882031,
   0.319455,
   0.398451,
   0.4206838,
   0.4662798,
   0.7059364,
   0.800717,
   0.5315826,
   0.8179014,
   0.1701895,
   0.6888495,
   0.929274,
   0.2335315,
   0.8423477,
   0.2630353};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1294,Graph_from_mc_statistical_error_fy1294,Graph_from_mc_statistical_error_fex1294,Graph_from_mc_statistical_error_fey1294);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1294 = new TH1F("Graph_Graph_from_mc_statistical_error1294","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1294->SetMinimum(0.06365339);
   Graph_Graph_from_mc_statistical_error1294->SetMaximum(2.115129);
   Graph_Graph_from_mc_statistical_error1294->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1294->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1294->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1294->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1294);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}
