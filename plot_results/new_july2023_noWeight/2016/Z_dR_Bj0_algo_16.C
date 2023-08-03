void Z_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_16/Z_dR_Bj0_algo_16
//=========  (Thu Aug  3 10:21:25 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_16 = new TCanvas("Z_dR_Bj0_algo_16", "Z_dR_Bj0_algo_16",0,0,600,600);
   Z_dR_Bj0_algo_16->SetHighLightColor(2);
   Z_dR_Bj0_algo_16->Range(0,0,1,1);
   Z_dR_Bj0_algo_16->SetFillColor(0);
   Z_dR_Bj0_algo_16->SetFillStyle(4000);
   Z_dR_Bj0_algo_16->SetBorderMode(0);
   Z_dR_Bj0_algo_16->SetBorderSize(2);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1766.973,6.314516,1765216);
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
   st->SetMaximum(1512874);
   
   TH1F *st_stack_145 = new TH1F("st_stack_145","",30,0,6);
   st_stack_145->SetMinimum(0.01);
   st_stack_145->SetMaximum(1588518);
   st_stack_145->SetDirectory(0);
   st_stack_145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_145->SetLineColor(ci);
   st_stack_145->GetXaxis()->SetRange(1,30);
   st_stack_145->GetXaxis()->SetLabelFont(42);
   st_stack_145->GetXaxis()->SetLabelSize(0.035);
   st_stack_145->GetXaxis()->SetTitleSize(0.035);
   st_stack_145->GetXaxis()->SetTitleFont(42);
   st_stack_145->GetYaxis()->SetTitle("Events/0.2");
   st_stack_145->GetYaxis()->SetLabelFont(42);
   st_stack_145->GetYaxis()->SetLabelSize(0.05);
   st_stack_145->GetYaxis()->SetTitleSize(0.057);
   st_stack_145->GetYaxis()->SetTitleOffset(1.2);
   st_stack_145->GetYaxis()->SetTitleFont(42);
   st_stack_145->GetZaxis()->SetLabelFont(42);
   st_stack_145->GetZaxis()->SetLabelSize(0.035);
   st_stack_145->GetZaxis()->SetTitleSize(0.035);
   st_stack_145->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_145);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,127570.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,558068.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,579527.4);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,511839.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,370529.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,247659.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,198560.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,130531.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,102727.4);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,100728.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,74814.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,88726.17);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,45982.47);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,49933.27);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,41168.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,32056.56);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,27233.11);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,21333.27);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,14967.44);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,15167.94);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,10539.74);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,4600.11);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,2805.969);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,1824.482);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,2069.143);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,2270.292);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(27,353.9623);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(28,185.2816);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(29,94.12004);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(30,626.5914);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(31,1193.853);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,3990.038);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,11579.55);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,12935.85);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,13820.99);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,12756.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,10444.89);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,29360.99);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,6611.783);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,5864.843);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,20710.51);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,5975.353);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,20671.17);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,3990.539);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,5071.844);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,4312.075);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,3185.675);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,3270.693);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,3051.645);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,2209.779);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,2896.247);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,2376.323);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,979.6903);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,767.9663);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,608.1439);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,665.0773);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,1470.697);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(27,271.7245);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(28,60.20006);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(29,40.37278);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(30,382.7195);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(31,539.5826);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(135373);

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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,860.4525);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,4565.229);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,5197.373);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,3829.7);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,2521.966);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,1690.177);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,1175.115);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,881.9443);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,678.0737);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,563.0757);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,468.0608);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,386.0183);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,339.9813);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,295.7098);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,262.3618);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,224.8457);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,188.749);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,166.9861);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,127.743);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,94.58945);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,56.90002);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,32.51279);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,20.52143);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,10.0869);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,5.494667);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,6.048574);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,3.858325);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,3.419285);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,1.464889);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,1.068809);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,3.336334);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,11.13995);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,24.93703);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,26.35695);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,22.51793);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,18.28282);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,15.01423);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,12.51212);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,10.7762);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,9.394366);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,8.710809);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,7.86393);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,7.108869);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,6.770935);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,6.227433);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,5.974139);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,5.505395);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,4.918874);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,4.742817);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,4.125213);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,3.609664);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,2.81301);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,2.022615);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,1.6838);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.9714657);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.7393205);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.9008458);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.6441801);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.6260461);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.3547306);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.223462);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.5745296);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(358903);

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
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(1,13294.6);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(2,84084.32);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(3,91531.2);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(4,61314.02);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(5,37272.4);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(6,23956.07);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(7,16530.73);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(8,12188.24);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(9,9475.815);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(10,7675.644);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(11,6369.793);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(12,5412.923);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(13,4713.34);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(14,4187.567);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(15,3811.385);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(16,3455.053);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(17,3046.319);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(18,2622.093);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(19,2033.392);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(20,1379.702);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(21,781.9922);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(22,361.6241);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(23,174.9486);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(24,97.25545);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(25,62.2503);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(26,38.7792);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(27,24.79664);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(28,17.63367);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(29,13.22484);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(30,9.415345);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(31,20.79916);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(1,29.12393);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(2,72.94917);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(3,75.78582);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(4,61.7912);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(5,48.07819);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(6,38.52372);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(7,31.97852);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(8,27.42621);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(9,24.15995);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(10,21.72878);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(11,19.78823);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(12,18.23971);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(13,17.03397);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(14,16.08241);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(15,15.3699);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(16,14.66316);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(17,13.79352);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(18,12.81588);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(19,11.29582);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(20,9.289955);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(21,6.97552);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(22,4.7165);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(23,3.2662);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(24,2.418478);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(25,1.925982);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(26,1.512863);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(27,1.215673);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(28,1.025149);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(29,0.8820805);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(30,0.752106);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(31,1.110907);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetEntries(6548404);

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
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(1,846.1464);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(2,3103.901);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(3,2983.393);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(4,2228.234);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(5,1471.233);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(6,939.4407);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(7,701.8218);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(8,549.0305);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(9,421.3918);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(10,302.7743);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(11,298.3965);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(12,213.4743);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(13,218.1269);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(14,161.5989);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(15,171.4955);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(16,128.1039);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(17,128.2582);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(18,93.98857);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(19,74.13831);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(20,37.72785);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(21,24.35339);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(22,17.99639);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(23,7.88574);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(24,7.586252);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(25,3.217398);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(26,3.598673);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(27,1.216847);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(28,1.206609);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(29,0.860517);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(30,0.7039117);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(31,2.514976);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(1,11.82465);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(2,40.59693);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(3,50.81393);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(4,46.95632);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(5,39.3093);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(6,29.44517);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(7,26.18022);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(8,22.87021);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(9,19.27181);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(10,16.13115);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(11,17.3208);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(12,13.28956);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(13,14.54075);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(14,10.92694);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(15,13.94246);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(16,10.64476);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(17,12.59922);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(18,10.86137);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(19,8.286349);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(20,4.604506);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(21,4.279465);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(22,3.232224);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(23,1.271445);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(24,2.871104);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(25,0.8005911);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(26,0.8535838);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(27,0.452377);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(28,0.5115151);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(29,0.4231852);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(30,0.4084398);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(31,0.7299485);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetEntries(93897);

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
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(1,645.776);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(2,1723.044);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(3,1451.17);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(4,1081.052);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(5,661.185);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(6,472.4146);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(7,328.7403);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(8,261.2791);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(9,182.0907);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(10,174.1726);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(11,136.469);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(12,107.0919);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(13,87.74773);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(14,85.14323);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(15,60.77973);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(16,77.69136);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(17,55.6556);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(18,35.51393);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(19,48.32386);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(20,20.5558);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(21,22.90318);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(22,8.883374);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(23,4.21221);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(24,2.068792);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(25,1.328572);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(26,3.345575);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(27,0.5190488);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(28,2.881031);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(29,0.6935426);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(30,0.146767);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(31,0.2179513);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(1,14.68281);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(2,45.56003);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(3,51.40702);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(4,48.37842);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(5,33.4083);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(6,31.0401);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(7,25.62328);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(8,24.72069);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(9,17.5188);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(10,20.0384);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(11,18.50144);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(12,14.07337);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(13,12.1591);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(14,12.33325);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(15,11.52873);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(16,14.67649);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(17,11.57861);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(18,9.245965);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(19,12.8057);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(20,6.554519);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(21,8.984772);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(22,2.291377);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(23,1.583439);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(24,1.091169);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(25,0.4740632);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(26,1.576527);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(27,0.2640435);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(28,1.549191);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(29,0.384673);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(30,0.146767);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(31,0.1630259);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetEntries(71986);

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
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(1,6.180988);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(2,16.66179);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(3,15.58684);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(4,10.34644);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(5,7.65905);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(6,2.687386);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(7,3.359232);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(8,2.284278);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(9,2.284278);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(10,1.478062);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(11,1.209324);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(12,1.478062);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(13,0.9405851);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(14,0.8062158);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(15,1.074954);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(16,0.6718465);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(17,0.6718465);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(18,0.4031079);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(19,0.4031079);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(20,0.5374772);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(22,0.1343693);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(24,0.1343693);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(1,0.9113369);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(2,1.496273);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(3,1.447202);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(4,1.179086);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(5,1.014466);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(6,0.6009178);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(7,0.6718465);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(8,0.5540188);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(9,0.5540188);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(10,0.4456525);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(11,0.4031079);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(12,0.4456525);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(13,0.3555077);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(14,0.3291362);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(15,0.3800538);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(16,0.3004589);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(17,0.3004589);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(18,0.2327345);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(19,0.2327345);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(20,0.2687386);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(22,0.1343693);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(24,0.1343693);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetEntries(573);

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
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(1,10.57869);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(2,31.73606);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(3,23.01137);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(4,15.8135);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(5,10.46963);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(6,6.216342);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(7,6.216342);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(8,4.253287);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(9,2.617407);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(10,2.944583);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(11,2.072114);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(12,1.090586);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(13,2.39929);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(14,0.9815278);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(15,1.417762);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(16,1.526821);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(17,0.3271759);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(18,0.9815278);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(19,0.7634105);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(20,0.4362346);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(21,0.2181173);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(22,0.1090586);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(26,0.1090586);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(29,0.1090586);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(1,1.074103);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(2,1.860401);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(3,1.584168);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(4,1.31324);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(5,1.068552);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(6,0.8233747);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(7,0.8233747);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(8,0.681071);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(9,0.534276);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(10,0.5666853);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(11,0.4753756);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(12,0.3448737);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(13,0.5115304);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(14,0.3271759);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(15,0.3932165);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(16,0.4080601);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(17,0.1888951);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(18,0.3271759);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(19,0.288542);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(20,0.2181173);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(21,0.1542322);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(22,0.1090586);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(26,0.1090586);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(29,0.1090586);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetEntries(1159);

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
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(1,12.40356);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(2,42.80446);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(3,32.83297);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(4,19.69978);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(5,14.83564);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(6,8.269043);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(7,4.620936);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(8,5.836972);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(9,3.891314);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(10,4.134522);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(11,1.945657);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(12,1.216036);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(13,1.459243);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(14,0.7296215);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(15,0.9728286);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(16,1.945657);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(17,1.459243);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(18,0.4864143);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(19,0.4864143);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(20,0.4864143);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(21,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(22,0.4864143);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(23,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(27,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(1,1.736846);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(2,3.226507);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(3,2.825812);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(4,2.188864);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(5,1.899509);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(6,1.418129);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(7,1.060115);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(8,1.191467);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(9,0.9728286);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(10,1.002769);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(11,0.6878937);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(12,0.5438277);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(13,0.5957334);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(14,0.4212471);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(15,0.4864143);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(16,0.6878937);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(17,0.5957334);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(18,0.3439469);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(19,0.3439469);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(20,0.3439469);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(21,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(22,0.3439469);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(23,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(27,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetEntries(665);

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
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(1,6.376506);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(2,29.4685);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(3,21.78536);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(4,12.26938);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(5,7.022262);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(6,4.606857);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(7,3.390911);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(8,2.705309);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(9,2.132372);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(10,1.776518);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(11,1.351968);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(12,1.214572);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(13,1.044203);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(14,0.9315386);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(15,0.8669629);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(16,0.7378116);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(17,0.6498787);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(18,0.5523282);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(19,0.417681);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(20,0.3050171);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(21,0.1868573);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(22,0.09342865);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(23,0.04259247);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(24,0.01511346);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(25,0.01099161);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(26,0.005495803);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(27,0.004121852);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(28,0.002747902);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(29,0.001373951);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(30,0.001373951);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(31,0.005495803);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(1,0.09360024);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(2,0.201217);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(3,0.1730087);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(4,0.1298365);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(5,0.09822547);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(6,0.07955875);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(7,0.06825646);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(8,0.06096689);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(9,0.05412738);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(10,0.04940495);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(11,0.04309915);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(12,0.04085049);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(13,0.03787721);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(14,0.03577553);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(15,0.03451325);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(16,0.03183892);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(17,0.02988146);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(18,0.02754763);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(19,0.02395565);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(20,0.02047141);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(21,0.01602288);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(22,0.01132989);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(23,0.007649834);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(24,0.004556879);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(25,0.00388612);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(26,0.002747902);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(27,0.002379753);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(28,0.00194306);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(29,0.001373951);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(30,0.001373951);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(31,0.002747902);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetEntries(72765);

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
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(1,1.625172);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(2,10.15383);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(3,9.224703);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(4,5.410436);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(5,3.159042);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(6,2.067717);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(7,1.536376);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(8,1.251013);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(9,1.045137);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(10,0.8088264);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(11,0.6591631);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(12,0.5639228);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(13,0.4991164);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(14,0.4439773);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(15,0.4289394);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(16,0.348737);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(17,0.2896594);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(18,0.2355944);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(19,0.1736524);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(20,0.1296127);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(21,0.08378281);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(22,0.03580462);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(23,0.01754426);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(24,0.01288966);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(25,0.003222416);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(26,0.006086786);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(27,0.002506323);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(28,0.003580462);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(29,0.001432185);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(30,0.002506323);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(31,0.003222416);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(1,0.02412233);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(2,0.06029545);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(3,0.0574706);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(4,0.04401348);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(5,0.03363158);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(6,0.02720916);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(7,0.02345408);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(8,0.02116414);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(9,0.01934444);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(10,0.01701756);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(11,0.01536264);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(12,0.01420952);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(13,0.01336812);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(14,0.01260811);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(15,0.01239274);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(16,0.01117425);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(17,0.01018388);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(18,0.009184426);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(19,0.00788515);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(20,0.006812294);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(21,0.005477054);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(22,0.003580462);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(23,0.002506323);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(24,0.002148277);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(25,0.001074139);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(26,0.001476262);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(27,0.0009473012);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(28,0.001132242);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(29,0.0007160924);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(30,0.0009473012);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(31,0.001074139);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetEntries(112352);

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
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(1,0.06837519);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(2,0.2762358);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(3,0.2297406);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(4,0.1394854);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(5,0.09299025);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(6,0.0355551);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(7,0.03008508);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(8,0.03282009);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(9,0.02188006);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(10,0.01641004);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(11,0.01367504);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(12,0.01641004);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(13,0.008205022);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(14,0.01641004);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(15,0.005470015);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(17,0.01094003);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(18,0.01094003);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(20,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(1,0.01367504);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(2,0.02748648);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(3,0.02506676);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(4,0.01953186);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(5,0.0159477);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(6,0.00986121);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(7,0.009070994);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(8,0.009474344);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(9,0.007735769);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(10,0.006699373);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(11,0.006115663);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(12,0.006699373);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(13,0.004737172);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(14,0.006699373);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(15,0.003867885);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(17,0.005470015);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(18,0.005470015);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(20,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetEntries(376);

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
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(1,0.01214704);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(2,0.100749);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(3,0.09110279);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(4,0.05108902);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(5,0.03179666);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(6,0.01964962);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(7,0.01429063);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(8,0.01857782);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(9,0.01286157);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(10,0.01071798);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(11,0.007859849);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(12,0.005001722);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(13,0.006073519);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(14,0.006073519);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(15,0.002143595);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(16,0.003929924);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(17,0.003929924);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(18,0.002858127);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(19,0.001071798);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(20,0.001071798);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(21,0.0007145317);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(22,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(23,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(1,0.0020832);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(2,0.005999514);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(3,0.005705078);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(4,0.004272278);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(5,0.003370439);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(6,0.002649554);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(7,0.002259548);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(8,0.002576281);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(9,0.002143595);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(10,0.001956826);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(11,0.001675725);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(12,0.001336766);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(13,0.001473045);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(14,0.001473045);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(15,0.000875119);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(16,0.001184917);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(17,0.001184917);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(18,0.0010105);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(19,0.0006188026);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(20,0.0006188026);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(21,0.0005052502);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(22,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(23,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetEntries(1132);

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
   
   TH1D *VbbHcc_algo_Z_dR_Bj0__289 = new TH1D("VbbHcc_algo_Z_dR_Bj0__289","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(1,65161);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(2,184643);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(3,160066);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(4,117909);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(5,76906);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(6,51965);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(7,36981);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(8,28196);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(9,22297);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(10,18450);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(11,15322);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(12,13179);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(13,11008);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(14,9357);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(15,8204);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(16,7088);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(17,5909);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(18,4822);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(19,3731);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(20,2746);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(21,1756);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(22,1052);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(23,683);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(24,476);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(25,381);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(26,233);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(27,180);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(28,119);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(29,93);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(30,62);
   VbbHcc_algo_Z_dR_Bj0__289->SetBinContent(31,129);
   VbbHcc_algo_Z_dR_Bj0__289->SetEntries(849133);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0__289->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0__289->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj0__289->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj0__289->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj0__289->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0__289->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__289->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__289->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__289->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__289->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__289->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__289->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__289->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0__289->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__289->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__289->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__289->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__289->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__289->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1289[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1289[30] = {
   143254.9,
   651676.6,
   680793.3,
   580356.3,
   412499.3,
   274741.8,
   217316.4,
   144428.6,
   113496.8,
   109455.7,
   82094.18,
   94851.26,
   51348.02,
   54667.21,
   45479.49,
   35947.48,
   30655.51,
   24254.52,
   17253.29,
   16702.42,
   11426.62,
   5021.986,
   3013.841,
   1941.642,
   2141.449,
   2322.184,
   384.603,
   210.4285,
   110.4757,
   637.9301};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1289[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1289[30] = {
   3990.205,
   11579.97,
   12936.3,
   13821.31,
   12757.11,
   10445.06,
   29361.03,
   6611.934,
   5864.959,
   20710.54,
   5975.445,
   20671.18,
   3990.626,
   5071.9,
   4312.144,
   3185.766,
   3270.77,
   3051.709,
   2209.864,
   2896.275,
   2376.356,
   979.7118,
   767.9778,
   608.1572,
   665.0811,
   1470.699,
   271.7286,
   60.23414,
   40.38817,
   382.7205};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1289,Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1289,Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1289,Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1289);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetMinimum(63.07878);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetMaximum(763095.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__290 = new TH1D("data_mc_ratio__290","",30,0,6);
   data_mc_ratio__290->SetBinContent(1,0.4548606);
   data_mc_ratio__290->SetBinContent(2,0.2833353);
   data_mc_ratio__290->SetBinContent(3,0.2351169);
   data_mc_ratio__290->SetBinContent(4,0.2031666);
   data_mc_ratio__290->SetBinContent(5,0.1864391);
   data_mc_ratio__290->SetBinContent(6,0.1891412);
   data_mc_ratio__290->SetBinContent(7,0.1701712);
   data_mc_ratio__290->SetBinContent(8,0.1952245);
   data_mc_ratio__290->SetBinContent(9,0.1964549);
   data_mc_ratio__290->SetBinContent(10,0.1685614);
   data_mc_ratio__290->SetBinContent(11,0.1866393);
   data_mc_ratio__290->SetBinContent(12,0.1389439);
   data_mc_ratio__290->SetBinContent(13,0.2143802);
   data_mc_ratio__290->SetBinContent(14,0.1711629);
   data_mc_ratio__290->SetBinContent(15,0.180389);
   data_mc_ratio__290->SetBinContent(16,0.1971765);
   data_mc_ratio__290->SetBinContent(17,0.1927549);
   data_mc_ratio__290->SetBinContent(18,0.1988083);
   data_mc_ratio__290->SetBinContent(19,0.2162487);
   data_mc_ratio__290->SetBinContent(20,0.1644073);
   data_mc_ratio__290->SetBinContent(21,0.1536762);
   data_mc_ratio__290->SetBinContent(22,0.2094789);
   data_mc_ratio__290->SetBinContent(23,0.2266211);
   data_mc_ratio__290->SetBinContent(24,0.2451533);
   data_mc_ratio__290->SetBinContent(25,0.177917);
   data_mc_ratio__290->SetBinContent(26,0.1003366);
   data_mc_ratio__290->SetBinContent(27,0.4680151);
   data_mc_ratio__290->SetBinContent(28,0.5655126);
   data_mc_ratio__290->SetBinContent(29,0.8418141);
   data_mc_ratio__290->SetBinContent(30,0.09718933);
   data_mc_ratio__290->SetBinContent(31,0.1056744);
   data_mc_ratio__290->SetBinError(1,0.001781905);
   data_mc_ratio__290->SetBinError(2,0.0006593777);
   data_mc_ratio__290->SetBinError(3,0.000587671);
   data_mc_ratio__290->SetBinError(4,0.0005916689);
   data_mc_ratio__290->SetBinError(5,0.0006722903);
   data_mc_ratio__290->SetBinError(6,0.0008297185);
   data_mc_ratio__290->SetBinError(7,0.0008849053);
   data_mc_ratio__290->SetBinError(8,0.001162627);
   data_mc_ratio__290->SetBinError(9,0.001315648);
   data_mc_ratio__290->SetBinError(10,0.001240966);
   data_mc_ratio__290->SetBinError(11,0.001507806);
   data_mc_ratio__290->SetBinError(12,0.001210314);
   data_mc_ratio__290->SetBinError(13,0.002043292);
   data_mc_ratio__290->SetBinError(14,0.001769463);
   data_mc_ratio__290->SetBinError(15,0.001991578);
   data_mc_ratio__290->SetBinError(16,0.002342035);
   data_mc_ratio__290->SetBinError(17,0.002507543);
   data_mc_ratio__290->SetBinError(18,0.002862997);
   data_mc_ratio__290->SetBinError(19,0.003540306);
   data_mc_ratio__290->SetBinError(20,0.003137408);
   data_mc_ratio__290->SetBinError(21,0.003667283);
   data_mc_ratio__290->SetBinError(22,0.00645851);
   data_mc_ratio__290->SetBinError(23,0.008671415);
   data_mc_ratio__290->SetBinError(24,0.01123658);
   data_mc_ratio__290->SetBinError(25,0.009114962);
   data_mc_ratio__290->SetBinError(26,0.006573266);
   data_mc_ratio__290->SetBinError(27,0.03488378);
   data_mc_ratio__290->SetBinError(28,0.05184046);
   data_mc_ratio__290->SetBinError(29,0.08729205);
   data_mc_ratio__290->SetBinError(30,0.01234306);
   data_mc_ratio__290->SetBinError(31,0.0476276);
   data_mc_ratio__290->SetMinimum(0.4);
   data_mc_ratio__290->SetMaximum(1.6);
   data_mc_ratio__290->SetEntries(192.3479);
   data_mc_ratio__290->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__290->SetLineColor(ci);
   data_mc_ratio__290->SetLineWidth(2);
   data_mc_ratio__290->SetMarkerStyle(20);
   data_mc_ratio__290->SetMarkerSize(1.2);
   data_mc_ratio__290->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__290->GetXaxis()->SetRange(1,30);
   data_mc_ratio__290->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__290->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__290->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__290->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__290->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__290->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__290->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__290->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__290->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__290->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__290->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__290->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__290->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__290->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__290->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__290->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__290->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1290[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1290[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1290[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1290[30] = {
   0.02785389,
   0.0177695,
   0.0190018,
   0.02381522,
   0.03092637,
   0.03801772,
   0.1351073,
   0.04577995,
   0.0516751,
   0.1892139,
   0.07278768,
   0.2179326,
   0.07771723,
   0.09277775,
   0.09481515,
   0.08862277,
   0.1066944,
   0.1258202,
   0.1280837,
   0.1734045,
   0.2079667,
   0.1950845,
   0.2548169,
   0.313218,
   0.3105753,
   0.6333256,
   0.7065171,
   0.2862451,
   0.3655842,
   0.5999411};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1290,Graph_from_mc_statistical_error_fy1290,Graph_from_mc_statistical_error_fex1290,Graph_from_mc_statistical_error_fey1290);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1290 = new TH1F("Graph_Graph_from_mc_statistical_error1290","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1290->SetMinimum(0.1521794);
   Graph_Graph_from_mc_statistical_error1290->SetMaximum(1.847821);
   Graph_Graph_from_mc_statistical_error1290->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1290->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1290->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1290->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1290->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1290->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1290->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1290->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1290->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1290->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1290);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_algo_16->cd();
   Z_dR_Bj0_algo_16->Modified();
   Z_dR_Bj0_algo_16->cd();
   Z_dR_Bj0_algo_16->SetSelected(Z_dR_Bj0_algo_16);
}
