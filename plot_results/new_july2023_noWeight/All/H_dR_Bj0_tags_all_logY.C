void H_dR_Bj0_tags_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_all/H_dR_Bj0_tags_all
//=========  (Thu Aug 10 12:31:24 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_all = new TCanvas("H_dR_Bj0_tags_all", "H_dR_Bj0_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_all->SetHighLightColor(2);
   H_dR_Bj0_tags_all->Range(0,0,1,1);
   H_dR_Bj0_tags_all->SetFillColor(0);
   H_dR_Bj0_tags_all->SetFillStyle(4000);
   H_dR_Bj0_tags_all->SetBorderMode(0);
   H_dR_Bj0_tags_all->SetBorderSize(2);
   H_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.363576,6.314516,12.82564);
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
   st->SetMinimum(0.3);
   st->SetMaximum(7.771197e+10);
   
   TH1F *st_stack_44 = new TH1F("st_stack_44","",30,0,6);
   st_stack_44->SetMinimum(0.0447315);
   st_stack_44->SetMaximum(2.55103e+11);
   st_stack_44->SetDirectory(0);
   st_stack_44->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_44->SetLineColor(ci);
   st_stack_44->GetXaxis()->SetRange(1,30);
   st_stack_44->GetXaxis()->SetLabelFont(42);
   st_stack_44->GetXaxis()->SetLabelSize(0.035);
   st_stack_44->GetXaxis()->SetTitleSize(0.035);
   st_stack_44->GetXaxis()->SetTitleFont(42);
   st_stack_44->GetYaxis()->SetTitle("Events/0.2");
   st_stack_44->GetYaxis()->SetLabelFont(42);
   st_stack_44->GetYaxis()->SetLabelSize(0.05);
   st_stack_44->GetYaxis()->SetTitleSize(0.057);
   st_stack_44->GetYaxis()->SetTitleOffset(1.2);
   st_stack_44->GetYaxis()->SetTitleFont(42);
   st_stack_44->GetZaxis()->SetLabelFont(42);
   st_stack_44->GetZaxis()->SetLabelSize(0.035);
   st_stack_44->GetZaxis()->SetTitleSize(0.035);
   st_stack_44->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_44);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(1,13461.92);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(2,66011.38);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(3,70832.88);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(4,59300.95);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(5,43488.9);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(6,55456.15);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(7,37646.72);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(8,32522.26);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(9,28175.8);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(10,22831.99);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(11,19891.78);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(12,21929.46);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(13,20774.06);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(14,16212.34);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(15,14000.43);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(16,13777.77);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(17,9230.943);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(18,7450.131);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(19,21785.24);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(20,3267.37);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(21,4129.31);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(22,2365.761);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(23,4560.169);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(24,1967.552);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(25,2168.92);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(26,833.8266);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(27,808.2618);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(28,659.591);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(29,85.0545);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(30,181.88);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(31,299.1672);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(1,1101.915);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(2,3659.905);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(3,3734.898);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(4,4199.895);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(5,2744.444);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(6,15202.72);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(7,3177.599);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(8,3365.91);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(9,2484.926);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(10,2468.967);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(11,2268.922);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(12,2323.428);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(13,2370.292);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(14,1684.508);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(15,1943.771);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(16,2008.876);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(17,1198.897);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(18,1065.061);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(19,14843.68);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(20,506.9186);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(21,821.0386);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(22,489.6396);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(23,1776.58);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(24,486.7658);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(25,556.2726);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(26,120.455);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(27,384.4013);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(28,278.2003);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(29,34.89192);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(30,65.39487);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(31,85.73857);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetEntries(30262);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(1,77.04893);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(2,317.2625);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(3,360.7563);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(4,309.9419);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(5,258.3563);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(6,223.5626);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(7,184.9375);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(8,152.8797);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(9,138.6214);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(10,122.5553);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(11,106.8743);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(12,109.2659);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(13,96.23694);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(14,87.92079);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(15,82.80332);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(16,66.58898);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(17,58.08846);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(18,44.97813);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(19,37.77336);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(20,30.243);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(21,26.64237);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(22,20.34738);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(23,18.96416);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(24,12.06939);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(25,14.09874);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(26,8.412828);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(27,4.837174);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(28,4.45114);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(29,3.385584);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(30,1.335988);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(31,3.444286);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(1,3.63998);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(2,7.228775);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(3,7.637482);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(4,7.132519);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(5,6.434006);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(6,5.957222);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(7,5.492394);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(8,4.951873);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(9,4.686506);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(10,4.475691);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(11,3.983539);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(12,4.242831);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(13,3.942051);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(14,3.699573);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(15,3.616314);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(16,3.180653);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(17,2.915426);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(18,2.546344);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(19,2.370464);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(20,2.086803);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(21,1.982935);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(22,1.759664);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(23,1.705708);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(24,1.197453);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(25,1.583541);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(26,1.101247);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(27,0.8270015);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(28,0.7781935);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(29,0.7787063);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(30,0.3774034);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(31,0.730648);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetEntries(36361);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(1,1168.689);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(2,5611.29);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(3,7227.947);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(4,6600.806);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(5,5495.683);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(6,4435.542);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(7,3598.833);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(8,3053.605);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(9,2662.545);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(10,2409.145);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(11,2177.122);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(12,2004.319);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(13,1832.552);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(14,1640.029);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(15,1453.791);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(16,1275.6);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(17,1047.569);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(18,843.2382);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(19,706.4307);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(20,581.798);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(21,470.3196);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(22,371.8486);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(23,295.1721);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(24,225.2461);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(25,168.1529);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(26,126.3111);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(27,89.28795);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(28,61.71973);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(29,40.36657);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(30,24.37443);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(31,43.13958);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(1,8.482668);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(2,18.62465);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(3,21.20845);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(4,20.29816);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(5,18.52417);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(6,16.63393);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(7,14.972);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(8,13.78636);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(9,12.8815);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(10,12.25853);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(11,11.65123);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(12,11.19209);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(13,10.69596);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(14,10.12828);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(15,9.522042);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(16,8.903449);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(17,8.072087);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(18,7.233857);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(19,6.6167);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(20,6.005823);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(21,5.391611);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(22,4.786998);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(23,4.257999);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(24,3.711587);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(25,3.221697);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(26,2.789925);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(27,2.342267);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(28,1.936959);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(29,1.573171);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(30,1.212647);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(31,1.611175);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetEntries(965144);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(1,215.2585);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(2,886.3848);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(3,1000.088);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(4,832.8221);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(5,645.8237);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(6,553.2562);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(7,437.0754);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(8,402.039);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(9,329.2733);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(10,303.5318);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(11,290.7731);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(12,266.4508);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(13,253.805);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(14,234.1648);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(15,192.5742);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(16,178.4506);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(17,137.1684);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(18,106.1911);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(19,90.41913);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(20,76.2522);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(21,59.54219);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(22,40.41273);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(23,43.89085);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(24,33.75675);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(25,28.40768);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(26,14.00042);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(27,12.82494);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(28,7.452853);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(29,3.166264);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(30,3.136348);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(31,3.459097);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(1,7.316713);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(2,19.56436);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(3,22.74091);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(4,22.48704);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(5,19.1263);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(6,17.35486);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(7,15.96341);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(8,15.02682);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(9,11.53878);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(10,11.22324);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(11,11.34643);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(12,12.36646);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(13,12.4211);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(14,10.87735);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(15,9.591039);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(16,10.17008);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(17,9.244554);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(18,7.096374);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(19,5.368538);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(20,6.22131);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(21,5.830066);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(22,2.910868);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(23,5.608375);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(24,4.77289);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(25,4.372008);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(26,1.655972);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(27,1.65454);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(28,1.059173);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(29,0.643032);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(30,0.7854349);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(31,0.9428122);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetEntries(50664);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(1,29.55084);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(2,81.96479);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(3,88.49254);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(4,75.27468);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(5,68.77887);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(6,52.75859);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(7,40.65074);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(8,38.79453);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(9,34.16026);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(10,27.35545);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(11,23.61625);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(12,27.04066);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(13,25.33586);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(14,20.42647);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(15,20.83467);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(16,14.37028);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(17,14.58988);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(18,15.97401);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(19,11.72007);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(20,8.826036);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(21,5.700553);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(22,14.33973);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(23,6.072606);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(24,2.688454);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(25,2.710321);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(26,2.566692);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(27,2.805158);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(28,0.9103033);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(29,0.7925335);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(30,0.7641913);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(31,0.6367414);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(1,6.289141);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(2,6.109791);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(3,6.799942);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(4,12.13657);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(5,10.96458);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(6,5.361859);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(7,4.84415);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(8,4.695173);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(9,4.094049);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(10,4.095887);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(11,2.988465);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(12,3.907405);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(13,4.568728);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(14,2.697014);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(15,3.61);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(16,2.040495);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(17,2.244049);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(18,3.087064);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(19,2.788225);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(20,2.528675);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(21,0.9715597);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(22,6.432327);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(23,1.66032);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(24,0.5580804);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(25,0.6277463);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(26,0.6586899);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(27,1.271311);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(28,0.2799636);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(29,0.2898317);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(30,0.4002406);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(31,0.279172);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetEntries(8033);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(1,0.4520427);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(2,1.847636);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(3,0.586412);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(4,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(7,0.4031079);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(8,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(10,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(12,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(15,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(16,0.4520427);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(25,0.3153059);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(1,0.4520427);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(2,0.7874445);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(3,0.4715906);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(4,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(6,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(7,0.2327345);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(8,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(10,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(12,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(15,0.1343693);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(16,0.4520427);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(25,0.3153059);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetEntries(20);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(1,0.7792186);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(2,2.803853);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(3,0.9973359);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(4,0.2181173);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(5,0.1090586);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(6,0.3271759);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(8,0.3271759);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(9,0.3271759);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(10,0.3271759);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(11,0.2181173);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(12,0.3271759);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(14,0.4362346);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(15,0.1090586);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(16,0.5611013);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(17,0.1090586);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(19,0.1090586);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(21,0.1090586);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(25,0.4243645);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(1,0.4899224);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(2,0.8490887);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(3,0.5136258);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(4,0.1542322);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(5,0.1090586);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(6,0.1888951);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(8,0.1888951);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(9,0.1888951);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(10,0.1888951);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(11,0.1542322);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(12,0.1888951);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(14,0.2181173);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(15,0.1090586);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(16,0.4650122);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(17,0.1090586);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(19,0.1090586);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(21,0.1090586);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(25,0.3336339);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetEntries(57);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(1,2.880218);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(2,19.6995);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(3,21.0688);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(4,20.87797);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(5,10.7496);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(6,9.020733);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(7,5.059064);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(8,5.145364);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(9,5.555722);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(10,8.819884);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(11,7.413019);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(12,7.02885);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(13,4.806063);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(14,5.808947);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(15,4.241083);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(16,3.097237);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(17,2.606956);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(18,2.094353);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(19,1.324657);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(20,0.4864143);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(21,0.5064512);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(23,0.7758471);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(24,0.8120543);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(25,0.2432072);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(26,0.7858656);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(28,0.2532256);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(1,0.8695852);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(2,2.263321);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(3,2.345441);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(4,2.33877);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(5,1.682091);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(6,1.527448);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(7,1.13294);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(8,1.152104);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(9,1.214562);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(10,1.515544);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(11,1.403522);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(12,1.354992);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(13,1.134797);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(14,1.240679);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(15,1.061893);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(16,0.8951978);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(17,0.8258985);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(18,0.7415252);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(19,0.5937311);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(20,0.3439469);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(21,0.3581151);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(22,0.2532256);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(23,0.4487152);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(24,0.4693271);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(25,0.2432072);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(26,0.4542233);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(28,0.2532256);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetEntries(581);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(1,3.778749);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(2,18.09976);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(3,21.66175);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(4,18.15828);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(5,13.49808);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(6,9.893358);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(7,7.861997);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(8,6.705015);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(9,6.288219);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(10,6.377318);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(11,6.223603);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(12,5.91242);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(13,5.574603);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(14,4.551881);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(15,3.588839);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(16,2.654729);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(17,1.87266);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(18,1.32899);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(19,0.9325189);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(20,0.6691288);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(21,0.5657325);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(22,0.4837034);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(23,0.3689278);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(24,0.3317907);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(25,0.2372376);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(26,0.1797743);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(27,0.1187417);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(28,0.04228423);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(29,0.02089085);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(30,0.01993397);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(31,0.01582454);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(1,0.08347832);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(2,0.1833015);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(3,0.1994085);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(4,0.182195);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(5,0.1569438);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(6,0.1346257);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(7,0.1200316);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(8,0.1108391);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(9,0.1071676);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(10,0.1081418);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(11,0.106868);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(12,0.1041339);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(13,0.1011714);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(14,0.09137793);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(15,0.08089054);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(16,0.0692367);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(17,0.05832213);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(18,0.04915383);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(19,0.04053853);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(20,0.03467716);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(21,0.03219662);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(22,0.02980588);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(23,0.02591217);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(24,0.02479294);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(25,0.02123274);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(26,0.01823221);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(27,0.014768);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(28,0.008600628);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(29,0.005900765);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(30,0.006407983);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(31,0.005400313);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetEntries(84585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(1,1.544025);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(2,7.64484);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(3,9.975934);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(4,8.770007);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(5,6.62644);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(6,4.792226);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(7,3.702648);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(8,3.201662);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(9,2.823868);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(10,2.547367);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(11,2.576112);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(12,2.30098);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(13,2.079232);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(14,1.808206);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(15,1.52623);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(16,1.220984);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(17,1.003342);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(18,0.7199974);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(19,0.5680588);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(20,0.4257019);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(21,0.3408353);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(22,0.2792385);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(23,0.2354364);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(24,0.1738397);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(25,0.1136118);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(26,0.06844082);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(27,0.05612147);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(28,0.02737633);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(29,0.02326988);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(30,0.005475266);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(31,0.01368816);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(1,0.02719198);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(2,0.06050592);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(3,0.06911789);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(4,0.06480577);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(5,0.05633183);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(6,0.04790517);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(7,0.04210852);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(8,0.03915628);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(9,0.03677358);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(10,0.03492686);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(11,0.03512336);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(12,0.03319481);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(13,0.03155478);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(14,0.02942644);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(15,0.02703484);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(16,0.02418069);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(17,0.02191989);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(18,0.0185686);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(19,0.01649341);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(20,0.01427797);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(21,0.01277574);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(22,0.01156382);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(23,0.01061819);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(24,0.009124061);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(25,0.007376075);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(26,0.005724945);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(27,0.005184158);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(28,0.003620773);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(29,0.003338188);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(30,0.001619259);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(31,0.002560273);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetEntries(147270);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(1,0.01676804);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(2,0.06356694);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(3,0.04970267);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(4,0.07654647);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(5,0.03747288);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(6,0.02836983);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(7,0.02043482);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(8,0.01314829);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(9,0.009326028);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(10,0.008171272);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(11,0.006827286);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(13,0.004315259);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(14,0.01044703);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(15,0.008866782);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(16,0.01364129);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(17,0.006131775);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(18,0.004315259);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(19,0.007712026);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(20,0.008407537);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(21,0.003856013);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(22,0.008407537);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(23,0.004740753);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(1,0.005729015);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(2,0.01169668);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(3,0.01011324);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(4,0.01309701);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(5,0.009019639);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(6,0.00778701);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(7,0.006585173);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(8,0.005052331);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(9,0.004757816);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(10,0.004201636);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(11,0.003941735);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(13,0.003158712);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(14,0.004778372);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(15,0.004509506);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(16,0.005710891);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(17,0.00358544);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(18,0.003158712);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(19,0.003918236);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(20,0.004246701);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(21,0.002770611);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(22,0.004246701);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(23,0.002737075);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(1,0.004622298);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(2,0.02465684);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(3,0.03587254);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(4,0.02698583);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(5,0.01921635);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(6,0.01986199);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(7,0.007989033);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(8,0.009579705);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(9,0.005395112);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(10,0.005787156);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(11,0.005936816);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(12,0.004369985);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(13,0.002409819);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(14,0.003066742);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(15,0.002535976);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(16,0.001821444);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(17,0.002235983);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(18,0.001729393);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(19,0.001878717);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(20,0.001371791);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(21,0.0009800828);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(23,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(24,0.0007148681);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(25,0.0008069192);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(26,0.0007148681);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(27,0.001014188);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(1,0.001180025);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(2,0.002661361);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(3,0.003231219);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(4,0.002802282);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(5,0.002342614);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(6,0.002392785);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(7,0.001493095);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(8,0.001626565);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(9,0.001235725);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(10,0.001258658);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(11,0.001291805);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(12,0.001059626);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(13,0.0007803384);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(14,0.0009090441);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(15,0.0008624122);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(16,0.0006989114);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(17,0.0008562967);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(18,0.0006646676);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(19,0.0007782064);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(20,0.000627238);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(21,0.0005068917);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(23,0.0002935987);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(24,0.0004195169);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(25,0.0004718988);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(26,0.0004195169);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(27,0.0005874283);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all__120 = new TH1D("VbbHcc_tags_H_dR_Bj0_all__120","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(1,14654);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(2,57394);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(3,58276);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(4,48268);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(5,40730);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(6,33500);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(7,28237);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(8,24528);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(9,21613);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(10,19590);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(11,17882);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(12,16621);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(13,15117);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(14,13697);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(15,12611);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(16,10879);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(17,8888);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(18,7416);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(19,6048);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(20,5153);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(21,4160);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(22,3400);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(23,2796);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(24,2198);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(25,1668);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(26,1304);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(27,924);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(28,663);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(29,397);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(30,266);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(31,433);
   VbbHcc_tags_H_dR_Bj0_all__120->SetEntries(479340);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all__120->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all__120->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj0_all__120->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj0_all__120->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj0_all__120->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all__120->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all__120->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__120->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__120->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all__120->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all__120->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__120->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__120->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all__120->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all__120->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all__120->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__120->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__120->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all__120->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_all_fx1087[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_all_fy1087[30] = {
   14961.92,
   72958.46,
   79564.54,
   67168.06,
   49988.58,
   60745.49,
   41925.27,
   36185.12,
   31355.41,
   25712.79,
   22506.61,
   24352.24,
   22994.46,
   18207.5,
   15760.04,
   15320.78,
   10493.96,
   8464.661,
   22634.52,
   3966.08,
   4693.042,
   2813.734,
   4925.655,
   2242.631,
   2383.624,
   986.1525,
   918.1929,
   734.4481,
   132.8096,
   211.5163};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_all_fex1087[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_all_fey1087[30] = {
   1101.996,
   3660.018,
   3735.043,
   4200.028,
   2744.603,
   15202.74,
   3177.683,
   3365.979,
   2484.994,
   2469.031,
   2268.986,
   2323.495,
   2370.357,
   1684.58,
   1943.825,
   2008.926,
   1198.966,
   1065.117,
   14843.68,
   507.0031,
   821.08,
   489.7172,
   1776.596,
   486.8054,
   556.302,
   120.5063,
   384.415,
   278.2104,
   34.94317,
   65.41314};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj0_all_fx1087,Graph_from_VbbHcc_tags_H_dR_Bj0_all_fy1087,Graph_from_VbbHcc_tags_H_dR_Bj0_all_fex1087,Graph_from_VbbHcc_tags_H_dR_Bj0_all_fey1087);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetMinimum(88.07981);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetMaximum(91619.76);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj0_all","MC unc. (stat.)","fl");

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
   H_dR_Bj0_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__121 = new TH1D("data_mc_ratio__121","",30,0,6);
   data_mc_ratio__121->SetBinContent(1,0.9794194);
   data_mc_ratio__121->SetBinContent(2,0.7866668);
   data_mc_ratio__121->SetBinContent(3,0.7324368);
   data_mc_ratio__121->SetBinContent(4,0.7186154);
   data_mc_ratio__121->SetBinContent(5,0.814786);
   data_mc_ratio__121->SetBinContent(6,0.5514813);
   data_mc_ratio__121->SetBinContent(7,0.6735079);
   data_mc_ratio__121->SetBinContent(8,0.6778478);
   data_mc_ratio__121->SetBinContent(9,0.6892909);
   data_mc_ratio__121->SetBinContent(10,0.7618775);
   data_mc_ratio__121->SetBinContent(11,0.7945221);
   data_mc_ratio__121->SetBinContent(12,0.6825244);
   data_mc_ratio__121->SetBinContent(13,0.6574193);
   data_mc_ratio__121->SetBinContent(14,0.7522726);
   data_mc_ratio__121->SetBinContent(15,0.8001883);
   data_mc_ratio__121->SetBinContent(16,0.7100814);
   data_mc_ratio__121->SetBinContent(17,0.8469635);
   data_mc_ratio__121->SetBinContent(18,0.876113);
   data_mc_ratio__121->SetBinContent(19,0.2672025);
   data_mc_ratio__121->SetBinContent(20,1.299268);
   data_mc_ratio__121->SetBinContent(21,0.8864187);
   data_mc_ratio__121->SetBinContent(22,1.208359);
   data_mc_ratio__121->SetBinContent(23,0.5676403);
   data_mc_ratio__121->SetBinContent(24,0.9800988);
   data_mc_ratio__121->SetBinContent(25,0.6997749);
   data_mc_ratio__121->SetBinContent(26,1.322311);
   data_mc_ratio__121->SetBinContent(27,1.006324);
   data_mc_ratio__121->SetBinContent(28,0.9027186);
   data_mc_ratio__121->SetBinContent(29,2.989241);
   data_mc_ratio__121->SetBinContent(30,1.257586);
   data_mc_ratio__121->SetBinContent(31,1.23758);
   data_mc_ratio__121->SetBinError(1,0.008090784);
   data_mc_ratio__121->SetBinError(2,0.003283655);
   data_mc_ratio__121->SetBinError(3,0.003034068);
   data_mc_ratio__121->SetBinError(4,0.003270897);
   data_mc_ratio__121->SetBinError(5,0.004037257);
   data_mc_ratio__121->SetBinError(6,0.003013064);
   data_mc_ratio__121->SetBinError(7,0.004008053);
   data_mc_ratio__121->SetBinError(8,0.004328138);
   data_mc_ratio__121->SetBinError(9,0.00468862);
   data_mc_ratio__121->SetBinError(10,0.005443371);
   data_mc_ratio__121->SetBinError(11,0.005941525);
   data_mc_ratio__121->SetBinError(12,0.005294069);
   data_mc_ratio__121->SetBinError(13,0.005346994);
   data_mc_ratio__121->SetBinError(14,0.006427802);
   data_mc_ratio__121->SetBinError(15,0.007125534);
   data_mc_ratio__121->SetBinError(16,0.006807907);
   data_mc_ratio__121->SetBinError(17,0.008983854);
   data_mc_ratio__121->SetBinError(18,0.01017361);
   data_mc_ratio__121->SetBinError(19,0.003435853);
   data_mc_ratio__121->SetBinError(20,0.01809958);
   data_mc_ratio__121->SetBinError(21,0.01374334);
   data_mc_ratio__121->SetBinError(22,0.02072318);
   data_mc_ratio__121->SetBinError(23,0.01073506);
   data_mc_ratio__121->SetBinError(24,0.02090528);
   data_mc_ratio__121->SetBinError(25,0.01713406);
   data_mc_ratio__121->SetBinError(26,0.03661801);
   data_mc_ratio__121->SetBinError(27,0.03310564);
   data_mc_ratio__121->SetBinError(28,0.03505869);
   data_mc_ratio__121->SetBinError(29,0.1500257);
   data_mc_ratio__121->SetBinError(30,0.07710755);
   data_mc_ratio__121->SetBinError(31,0.3091332);
   data_mc_ratio__121->SetMinimum(0.4);
   data_mc_ratio__121->SetMaximum(1.6);
   data_mc_ratio__121->SetEntries(491.5614);
   data_mc_ratio__121->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__121->SetLineColor(ci);
   data_mc_ratio__121->SetLineWidth(2);
   data_mc_ratio__121->SetMarkerStyle(20);
   data_mc_ratio__121->SetMarkerSize(1.2);
   data_mc_ratio__121->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__121->GetXaxis()->SetRange(1,30);
   data_mc_ratio__121->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__121->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__121->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__121->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__121->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__121->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__121->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__121->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__121->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__121->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__121->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__121->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__121->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__121->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__121->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__121->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__121->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1088[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1088[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1088[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1088[30] = {
   0.07365339,
   0.05016578,
   0.04694356,
   0.06253014,
   0.0549046,
   0.2502695,
   0.07579399,
   0.09302108,
   0.07925248,
   0.09602343,
   0.1008142,
   0.09541197,
   0.1030839,
   0.09252124,
   0.1233388,
   0.1311242,
   0.114253,
   0.1258311,
   0.6557984,
   0.1278348,
   0.1749569,
   0.1740453,
   0.3606822,
   0.2170689,
   0.233385,
   0.1221985,
   0.4186647,
   0.378802,
   0.2631072,
   0.3092581};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1088,Graph_from_mc_statistical_error_fy1088,Graph_from_mc_statistical_error_fex1088,Graph_from_mc_statistical_error_fey1088);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1088 = new TH1F("Graph_Graph_from_mc_statistical_error1088","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1088->SetMinimum(0.2130419);
   Graph_Graph_from_mc_statistical_error1088->SetMaximum(1.786958);
   Graph_Graph_from_mc_statistical_error1088->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1088->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1088->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1088);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_tags_all->cd();
   H_dR_Bj0_tags_all->Modified();
   H_dR_Bj0_tags_all->cd();
   H_dR_Bj0_tags_all->SetSelected(H_dR_Bj0_tags_all);
}
