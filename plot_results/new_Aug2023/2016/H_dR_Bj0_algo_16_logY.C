void H_dR_Bj0_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Tue Aug 22 09:17:22 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(0,0,1,1);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetFillStyle(4000);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.947916,6.314516,15.44554);
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
   st->SetMaximum(1.009354e+13);
   
   TH1F *st_stack_137 = new TH1F("st_stack_137","",30,0,6);
   st_stack_137->SetMinimum(0.001176191);
   st_stack_137->SetMaximum(4.038233e+13);
   st_stack_137->SetDirectory(0);
   st_stack_137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_137->SetLineColor(ci);
   st_stack_137->GetXaxis()->SetRange(1,30);
   st_stack_137->GetXaxis()->SetLabelFont(42);
   st_stack_137->GetXaxis()->SetLabelSize(0.035);
   st_stack_137->GetXaxis()->SetTitleSize(0.035);
   st_stack_137->GetXaxis()->SetTitleFont(42);
   st_stack_137->GetYaxis()->SetTitle("Events/0.2");
   st_stack_137->GetYaxis()->SetLabelFont(42);
   st_stack_137->GetYaxis()->SetLabelSize(0.05);
   st_stack_137->GetYaxis()->SetTitleSize(0.057);
   st_stack_137->GetYaxis()->SetTitleOffset(1.2);
   st_stack_137->GetYaxis()->SetTitleFont(42);
   st_stack_137->GetZaxis()->SetLabelFont(42);
   st_stack_137->GetZaxis()->SetLabelSize(0.035);
   st_stack_137->GetZaxis()->SetTitleSize(0.035);
   st_stack_137->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_137);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,171747.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,607437.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,596421.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,468195.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,315096.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,246031.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,175005.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,128227.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,117305.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,99538.19);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,110103.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,73154.88);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,68704.97);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,47715.87);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,44429.19);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,30239.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,18151.13);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,33060.33);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,9288.762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,7703.911);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,4149.329);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,2798.932);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(23,4421.985);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,400.7787);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(25,624.705);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,957.2975);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,380.1303);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(28,341.5556);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(29,32.32696);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(30,341.5556);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(31,2142.253);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,4613.274);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,12464.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,14741.75);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,25642.05);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,12032.34);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,23690.44);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,8553.293);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,7225.457);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,6712.437);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,6253.358);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,22368.36);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,5516.675);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,6080.451);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,4540.478);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,4693.054);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,3853.074);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,2138.004);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,21627.05);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,2451.216);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,1945.116);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,1703.983);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,1587.418);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(23,1757.276);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,312.6127);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(25,437.36);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,536.2459);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,311.6083);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(28,310.3893);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(29,26.81719);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(30,310.3893);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(31,1554.491);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(121336);

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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,1456.674);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,5178.478);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,4853.212);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,3338.507);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,2249.59);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,1594.213);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,1212.878);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,966.645);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,774.5526);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,631.2746);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,513.9341);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,418.2374);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,343.9726);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,278.1041);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,236.0703);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,188.4492);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,146.8422);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,103.4724);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,71.86718);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,45.54025);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,26.64285);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,18.15465);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,10.89087);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,6.860734);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,4.210817);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,2.894946);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,2.6047);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,1.557544);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.8826663);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.8911825);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,1.593464);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,14.92904);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,26.82354);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,25.97499);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,21.35464);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,17.42339);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,14.60747);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,12.75012);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,11.34806);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,10.19535);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,9.133009);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,8.223566);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,7.486963);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,6.726784);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,5.984103);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,5.588447);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,5.024511);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,4.423115);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,3.660654);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,2.971737);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,2.416258);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.79568);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,1.403587);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,1.00987);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.801201);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.5795865);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.4512238);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.4414828);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.3686205);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.3205157);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.3133351);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.2848685);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(335691);

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
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(1,24693.99);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(2,93146.4);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(3,84685.79);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(4,53523.37);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(5,33870.83);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(6,23183.73);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(7,17067.68);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(8,13187.32);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(9,10388.1);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(10,8103.809);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(11,6492.092);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(12,5426.713);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(13,4743.338);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(14,4186.798);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(15,3629.51);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(16,3014.734);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(17,2408.675);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(18,1778.851);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(19,1239.257);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(20,740.8311);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(21,387.7575);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(22,187.4941);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(23,109.9939);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(24,65.45507);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(25,39.84043);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(26,27.62326);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(27,19.06504);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(28,11.26172);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(29,7.530263);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(30,7.288832);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(31,12.87123);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(1,40.35642);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(2,78.07751);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(3,74.34196);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(4,59.04253);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(5,46.90864);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(6,38.767);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(7,33.2312);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(8,29.20031);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(9,25.90109);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(10,22.85287);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(11,20.45922);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(12,18.72701);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(13,17.53514);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(14,16.50821);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(15,15.38916);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(16,14.03308);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(17,12.54975);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(18,10.78577);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(19,9.01459);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(20,6.954221);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(21,5.005974);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(22,3.462661);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(23,2.64406);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(24,2.041825);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(25,1.585465);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(26,1.312916);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(27,1.105433);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(28,0.8468837);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(29,0.6911271);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(30,0.6846234);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(31,0.8931418);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetEntries(6260583);

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
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(1,1174.903);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(2,3246.545);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(3,2703.92);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(4,1933.041);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(5,1300.674);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(6,935.8306);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(7,746.19);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(8,597.9302);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(9,492.524);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(10,407.6272);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(11,323.422);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(12,288.8535);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(13,221.4502);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(14,226.5387);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(15,163.2514);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(16,133.4001);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(17,71.23656);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(18,65.61156);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(19,40.93139);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(20,25.08594);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(21,11.50619);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(22,12.15721);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(23,10.2449);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(24,5.862839);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(25,3.459861);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(26,3.130013);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(27,0.9895436);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(28,0.07817989);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(30,0.3298479);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(31,0.3800584);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(1,15.45638);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(2,41.23996);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(3,45.27504);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(4,40.11384);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(5,33.7912);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(6,28.33864);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(7,24.41957);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(8,22.54945);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(9,20.44898);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(10,18.49468);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(11,15.56342);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(12,15.76465);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(13,13.68215);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(14,15.74565);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(15,12.86391);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(16,12.22458);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(17,7.896814);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(18,9.146332);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(19,7.11847);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(20,5.759683);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(21,3.45855);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(22,4.079418);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(23,4.020235);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(24,3.232642);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(25,2.321735);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(26,2.298185);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(27,0.5713132);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(28,0.07817989);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(30,0.3298479);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(31,0.1702436);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetEntries(90522);

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
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(1,843.0387);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(2,1784.472);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(3,1364.182);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(4,984.8259);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(5,568.9418);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(6,463.8241);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(7,334.6496);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(8,328.3868);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(9,240.2716);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(10,172.2983);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(11,160.9115);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(12,121.3183);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(13,99.24094);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(14,81.12286);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(15,60.70042);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(16,49.86202);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(17,29.74258);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(18,29.66387);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(19,15.81262);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(20,21.75468);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(21,5.550816);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(22,3.720107);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(23,2.61778);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(26,7.233248);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(27,0.04698961);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(28,1.031886);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(29,0.04698961);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(31,0.07717802);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(1,17.60586);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(2,52.79481);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(3,53.70188);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(4,51.26923);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(5,34.69182);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(6,34.03408);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(7,25.6333);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(8,29.17802);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(9,21.6663);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(10,20.54183);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(11,18.22192);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(12,14.61669);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(13,17.11404);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(14,15.2854);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(15,11.50633);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(16,11.25427);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(17,4.447741);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(18,10.58882);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(19,7.520322);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(20,10.34977);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(21,2.126682);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(22,1.837701);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(23,1.707908);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(26,7.164433);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(27,0.04698961);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(28,1.031886);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(29,0.04698961);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(31,0.07717802);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetEntries(66273);

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
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(1,9.671155);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(2,18.73786);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(3,13.60006);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(4,10.12449);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(5,6.346696);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(6,4.684466);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(7,1.66223);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(8,3.173348);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(9,2.568901);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(10,1.964453);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(11,1.057783);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(12,0.755559);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(13,0.6044472);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(14,0.6044472);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(15,0.3022236);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(16,0.1511118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(17,0.3022236);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(18,0.1511118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(19,0.3022236);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(20,0.1511118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(21,0.1511118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(1,1.208894);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(2,1.68271);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(3,1.433572);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(4,1.236903);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(5,0.9793164);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(6,0.8413549);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(7,0.5011811);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(8,0.6924813);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(9,0.6230499);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(10,0.5448413);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(11,0.3998042);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(12,0.3378963);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(13,0.3022236);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(14,0.3022236);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(15,0.2137044);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(16,0.1511118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(17,0.2137044);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(18,0.1511118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(19,0.2137044);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(20,0.1511118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(21,0.1511118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetEntries(510);

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
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(1,18.62937);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(2,28.1685);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(3,20.0883);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(4,14.58926);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(5,8.416884);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(6,6.845732);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(7,3.815654);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(8,4.376779);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(9,3.591204);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(10,3.927879);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(11,2.917853);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(12,2.805628);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(13,1.683377);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(14,1.346701);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(15,0.8978009);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(16,1.234476);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(17,0.7855758);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(18,0.2244502);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(19,0.7855758);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(20,0.3366753);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(22,0.1122251);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(23,0.2244502);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(1,1.445919);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(2,1.77798);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(3,1.50147);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(4,1.279563);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(5,0.971898);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(6,0.8765062);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(7,0.6543792);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(8,0.7008456);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(9,0.6348411);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(10,0.6639327);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(11,0.572238);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(12,0.5611256);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(13,0.434646);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(14,0.3887592);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(15,0.3174206);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(16,0.3722086);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(17,0.2969197);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(18,0.1587103);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(19,0.2969197);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(20,0.1943796);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(22,0.1122251);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(23,0.1587103);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetEntries(1121);

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
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(1,20.75287);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(2,40.97362);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(3,27.13837);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(4,17.82619);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(5,12.771);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(6,8.247937);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(7,5.853375);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(8,4.523062);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(9,3.990937);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(10,3.990937);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(11,2.926687);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(12,1.862437);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(13,2.660625);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(14,2.394562);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(15,1.330312);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(16,2.1285);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(17,0.7981875);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(18,0.7981875);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(19,0.7981875);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(21,0.2660625);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(1,2.3498);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(2,3.301749);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(3,2.6871);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(4,2.177815);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(5,1.843335);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(6,1.481373);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(7,1.247944);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(8,1.097004);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(9,1.030456);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(10,1.030456);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(11,0.8824295);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(12,0.7039352);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(13,0.8413635);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(14,0.7981875);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(15,0.5949338);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(16,0.7525384);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(17,0.4608338);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(18,0.4608338);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(19,0.4608338);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(21,0.2660625);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetEntries(609);

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
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(1,11.19632);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(2,26.54748);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(3,19.3521);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(4,11.84758);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(5,6.948069);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(6,4.800584);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(7,3.676692);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(8,2.949872);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(9,2.437389);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(10,2.047187);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(11,1.595157);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(12,1.323115);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(13,1.184346);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(14,1.00848);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(15,0.8257444);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(16,0.7419334);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(17,0.5289711);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(18,0.4204289);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(19,0.2418153);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(20,0.1538825);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(21,0.07007149);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(22,0.04121852);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(23,0.01511346);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(24,0.005495803);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(25,0.002747902);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(26,0.004121852);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(27,0.001373951);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(28,0.002747902);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(31,0.005495803);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(1,0.124029);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(2,0.1909841);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(3,0.1630608);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(4,0.1275852);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(5,0.09770519);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(6,0.08121432);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(7,0.07107457);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(8,0.06366301);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(9,0.05786927);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(10,0.05303521);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(11,0.04681524);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(12,0.04263677);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(13,0.04033897);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(14,0.03722367);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(15,0.03368282);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(16,0.03192773);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(17,0.02695886);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(18,0.02403432);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(19,0.01822752);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(20,0.01454053);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(21,0.009811971);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(22,0.007525438);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(23,0.004556879);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(24,0.002747902);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(25,0.00194306);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(26,0.002379753);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(27,0.001373951);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(28,0.00194306);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(31,0.002747902);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetEntries(72765);

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
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(1,2.998297);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(2,10.28194);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(3,8.007632);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(4,5.010609);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(5,2.967724);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(6,2.006791);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(7,1.594478);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(8,1.309128);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(9,1.162206);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(10,0.9205932);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(11,0.7180457);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(12,0.6144365);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(13,0.5244154);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(14,0.4717615);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(15,0.3940547);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(16,0.3244157);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(17,0.2360931);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(18,0.1549892);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(19,0.1193204);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(20,0.08407632);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(21,0.036518);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(22,0.01486197);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(23,0.008917185);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(24,0.00594479);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(25,0.005095534);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(26,0.003397023);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(27,0.002123139);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(28,0.0008492557);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(29,0.0008492557);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(31,0.002123139);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(1,0.03568138);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(2,0.0660757);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(3,0.05831178);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(4,0.04612639);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(5,0.03549899);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(6,0.02919143);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(7,0.02602037);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(8,0.02357736);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(9,0.02221498);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(10,0.01977143);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(11,0.01746145);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(12,0.01615261);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(13,0.01492251);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(14,0.01415355);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(15,0.01293548);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(16,0.01173695);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(17,0.01001258);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(18,0.008112504);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(19,0.00711806);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(20,0.005975044);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(21,0.003937837);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(22,0.002512132);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(23,0.001945889);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(24,0.001588812);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(25,0.001470954);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(26,0.001201029);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(27,0.0009494968);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(28,0.0006005145);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(29,0.0006005145);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(31,0.0009494968);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetEntries(94157);

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
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(1,0.09846027);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(2,0.2652957);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(3,0.1668355);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(4,0.1668355);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(5,0.07111019);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(6,0.02461507);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(7,0.0355551);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(8,0.04102511);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(9,0.03282009);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(10,0.02735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(11,0.01914505);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(12,0.01914505);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(13,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(14,0.01367504);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(15,0.01094003);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(16,0.01094003);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(17,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(19,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(21,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(1,0.01641004);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(2,0.0269367);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(3,0.02136109);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(4,0.02136109);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(5,0.01394586);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(6,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(7,0.00986121);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(8,0.01059264);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(9,0.009474344);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(10,0.008648853);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(11,0.00723615);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(12,0.00723615);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(13,0.004737172);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(14,0.006115663);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(15,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(16,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(17,0.004737172);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(19,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(21,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(23,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetEntries(376);

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
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(1,0.02786674);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(2,0.09181732);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(3,0.08002755);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(4,0.056448);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(5,0.02608041);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(6,0.02000689);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(7,0.02429408);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(8,0.01643423);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(9,0.01214704);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(10,0.007145317);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(11,0.00857438);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(12,0.006788051);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(13,0.004644456);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(14,0.005716254);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(15,0.00428719);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(16,0.001786329);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(17,0.005001722);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(18,0.001429063);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(19,0.001429063);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(20,0.002143595);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(1,0.003155287);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(2,0.005727407);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(3,0.005347066);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(4,0.004490762);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(5,0.003052481);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(6,0.002673533);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(7,0.00294609);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(8,0.002423095);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(9,0.0020832);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(10,0.001597741);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(11,0.001750238);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(12,0.001557286);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(13,0.00128814);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(14,0.001429063);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(15,0.001237605);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(16,0.0007988707);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(17,0.001336766);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(18,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(19,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(20,0.000875119);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetEntries(1132);

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
   
   TH1D *VbbHcc_algo_H_dR_Bj0__375 = new TH1D("VbbHcc_algo_H_dR_Bj0__375","",30,0,6);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(1,94505);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(2,191899);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(3,145624);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(4,99237);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(5,65518);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(6,46225);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(7,36173);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(8,29671);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(9,24585);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(10,20396);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(11,16854);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(12,13704);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(13,11169);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(14,9172);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(15,7199);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(16,5399);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(17,4038);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(18,2749);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(19,1903);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(20,1225);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(21,746);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(22,448);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(23,292);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(24,210);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(25,131);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(26,84);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(27,78);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(28,28);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(29,40);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(30,17);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(31,48);
   VbbHcc_algo_H_dR_Bj0__375->SetEntries(829396);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0__375->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0__375->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj0__375->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj0__375->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj0__375->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0__375->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__375->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__375->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__375->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0__375->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__375->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__375->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__375->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fx1273[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fy1273[30] = {
   199979.3,
   710918.2,
   690117.1,
   528034.7,
   353124.4,
   272235.5,
   194383.1,
   143323.8,
   129215.2,
   108866.1,
   117603.4,
   79417.39,
   74119.64,
   52494.28,
   48522.48,
   33630.14,
   20810.29,
   35039.68,
   10658.88,
   8537.85,
   4581.313,
   3020.626,
   4555.984,
   478.9688,
   672.2243,
   998.1865,
   402.8401,
   355.4885,
   40.78773,
   350.0655};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fex1273[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fey1273[30] = {
   4613.536,
   12464.55,
   14742.13,
   25642.21,
   12032.54,
   23690.52,
   8553.44,
   7225.619,
   6712.561,
   6253.467,
   22368.39,
   5516.754,
   6080.52,
   4540.565,
   4693.114,
   3853.139,
   2138.065,
   21627.05,
   2451.257,
   1945.166,
   1703.996,
   1587.428,
   1757.284,
   312.6372,
   437.3694,
   536.3005,
   311.6111,
   310.3924,
   26.82805,
   310.3904};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj0_fx1273,Graph_from_VbbHcc_algo_H_dR_Bj0_fy1273,Graph_from_VbbHcc_algo_H_dR_Bj0_fex1273,Graph_from_VbbHcc_algo_H_dR_Bj0_fey1273);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetMinimum(12.56372);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetMaximum(795719.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__376 = new TH1D("data_mc_ratio__376","",30,0,6);
   data_mc_ratio__376->SetBinContent(1,0.4725738);
   data_mc_ratio__376->SetBinContent(2,0.2699312);
   data_mc_ratio__376->SetBinContent(3,0.2110134);
   data_mc_ratio__376->SetBinContent(4,0.1879365);
   data_mc_ratio__376->SetBinContent(5,0.185538);
   data_mc_ratio__376->SetBinContent(6,0.1697979);
   data_mc_ratio__376->SetBinContent(7,0.1860913);
   data_mc_ratio__376->SetBinContent(8,0.2070208);
   data_mc_ratio__376->SetBinContent(9,0.190264);
   data_mc_ratio__376->SetBinContent(10,0.1873494);
   data_mc_ratio__376->SetBinContent(11,0.1433121);
   data_mc_ratio__376->SetBinContent(12,0.1725567);
   data_mc_ratio__376->SetBinContent(13,0.1506888);
   data_mc_ratio__376->SetBinContent(14,0.1747238);
   data_mc_ratio__376->SetBinContent(15,0.1483642);
   data_mc_ratio__376->SetBinContent(16,0.1605405);
   data_mc_ratio__376->SetBinContent(17,0.1940386);
   data_mc_ratio__376->SetBinContent(18,0.07845392);
   data_mc_ratio__376->SetBinContent(19,0.1785366);
   data_mc_ratio__376->SetBinContent(20,0.1434787);
   data_mc_ratio__376->SetBinContent(21,0.1628354);
   data_mc_ratio__376->SetBinContent(22,0.1483136);
   data_mc_ratio__376->SetBinContent(23,0.06409154);
   data_mc_ratio__376->SetBinContent(24,0.4384419);
   data_mc_ratio__376->SetBinContent(25,0.1948754);
   data_mc_ratio__376->SetBinContent(26,0.08415261);
   data_mc_ratio__376->SetBinContent(27,0.1936252);
   data_mc_ratio__376->SetBinContent(28,0.07876485);
   data_mc_ratio__376->SetBinContent(29,0.9806871);
   data_mc_ratio__376->SetBinContent(30,0.04856234);
   data_mc_ratio__376->SetBinContent(31,0.02225125);
   data_mc_ratio__376->SetBinError(1,0.001537242);
   data_mc_ratio__376->SetBinError(2,0.000616193);
   data_mc_ratio__376->SetBinError(3,0.0005529599);
   data_mc_ratio__376->SetBinError(4,0.0005965878);
   data_mc_ratio__376->SetBinError(5,0.0007248574);
   data_mc_ratio__376->SetBinError(6,0.0007897575);
   data_mc_ratio__376->SetBinError(7,0.0009784389);
   data_mc_ratio__376->SetBinError(8,0.001201843);
   data_mc_ratio__376->SetBinError(9,0.001213449);
   data_mc_ratio__376->SetBinError(10,0.001311837);
   data_mc_ratio__376->SetBinError(11,0.001103904);
   data_mc_ratio__376->SetBinError(12,0.001474036);
   data_mc_ratio__376->SetBinError(13,0.00142585);
   data_mc_ratio__376->SetBinError(14,0.0018244);
   data_mc_ratio__376->SetBinError(15,0.00174861);
   data_mc_ratio__376->SetBinError(16,0.002184882);
   data_mc_ratio__376->SetBinError(17,0.003053549);
   data_mc_ratio__376->SetBinError(18,0.00149633);
   data_mc_ratio__376->SetBinError(19,0.00409268);
   data_mc_ratio__376->SetBinError(20,0.004099393);
   data_mc_ratio__376->SetBinError(21,0.005961829);
   data_mc_ratio__376->SetBinError(22,0.00700716);
   data_mc_ratio__376->SetBinError(23,0.003750674);
   data_mc_ratio__376->SetBinError(24,0.03025537);
   data_mc_ratio__376->SetBinError(25,0.01702634);
   data_mc_ratio__376->SetBinError(26,0.009181803);
   data_mc_ratio__376->SetBinError(27,0.02192374);
   data_mc_ratio__376->SetBinError(28,0.01488516);
   data_mc_ratio__376->SetBinError(29,0.1550602);
   data_mc_ratio__376->SetBinError(30,0.0117781);
   data_mc_ratio__376->SetBinError(31,0.016353);
   data_mc_ratio__376->SetMinimum(0.4);
   data_mc_ratio__376->SetMaximum(1.6);
   data_mc_ratio__376->SetEntries(65.28807);
   data_mc_ratio__376->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__376->SetLineColor(ci);
   data_mc_ratio__376->SetLineWidth(2);
   data_mc_ratio__376->SetMarkerStyle(20);
   data_mc_ratio__376->SetMarkerSize(1.2);
   data_mc_ratio__376->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__376->GetXaxis()->SetRange(1,30);
   data_mc_ratio__376->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__376->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__376->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__376->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__376->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__376->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__376->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__376->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__376->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__376->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__376->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__376->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__376->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__376->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__376->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__376->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__376->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1274[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1274[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1274[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1274[30] = {
   0.02307006,
   0.01753304,
   0.02136178,
   0.0485616,
   0.0340745,
   0.08702217,
   0.044003,
   0.05041466,
   0.0519487,
   0.05744183,
   0.1902018,
   0.06946531,
   0.08203655,
   0.08649638,
   0.0967204,
   0.114574,
   0.1027407,
   0.6172161,
   0.2299732,
   0.2278286,
   0.3719449,
   0.5255296,
   0.3857089,
   0.6527297,
   0.6506301,
   0.5372749,
   0.7735355,
   0.8731432,
   0.6577479,
   0.8866638};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1274,Graph_from_mc_statistical_error_fy1274,Graph_from_mc_statistical_error_fex1274,Graph_from_mc_statistical_error_fey1274);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1274 = new TH1F("Graph_Graph_from_mc_statistical_error1274","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1274->SetMinimum(0.1020026);
   Graph_Graph_from_mc_statistical_error1274->SetMaximum(2.063997);
   Graph_Graph_from_mc_statistical_error1274->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1274->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1274->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1274->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1274);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->SetSelected(H_dR_Bj0_algo_16);
}
