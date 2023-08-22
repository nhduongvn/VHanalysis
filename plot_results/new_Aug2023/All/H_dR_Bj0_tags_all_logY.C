void H_dR_Bj0_tags_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_all/H_dR_Bj0_tags_all
//=========  (Tue Aug 22 09:16:19 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.9193524,-1.363876,6.314516,12.83587);
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
   st->SetMaximum(7.932881e+10);
   
   TH1F *st_stack_44 = new TH1F("st_stack_44","",30,0,6);
   st_stack_44->SetMinimum(0.0447017);
   st_stack_44->SetMaximum(2.605525e+11);
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
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(1,13620.39);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(2,66148.56);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(3,71575.46);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(4,59433.43);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(5,43683.55);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(6,56282.47);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(7,38633.56);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(8,32601.94);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(9,29007.55);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(10,22387.78);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(11,20012.27);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(12,21361.04);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(13,20741.59);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(14,16558.72);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(15,14137.56);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(16,13827.72);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(17,9286.453);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(18,7622.307);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(19,24211.07);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(20,3112.222);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(21,4092.749);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(22,2444.911);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(23,4853.167);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(24,1922.494);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(25,2281.034);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(26,806.2284);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(27,864.8791);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(28,705.6933);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(29,89.83133);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(30,169.2189);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(31,295.1569);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(1,1138.113);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(2,3772.161);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(3,3853.817);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(4,4350.351);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(5,2815.145);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(6,17305.32);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(7,3294.634);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(8,3523.607);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(9,2561.386);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(10,2576.833);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(11,2351.523);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(12,2368.873);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(13,2438.616);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(14,1761.094);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(15,2022.381);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(16,2062.678);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(17,1220.692);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(18,1111.253);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(19,17060.61);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(20,504.7213);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(21,835.4999);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(22,515.9564);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(23,1941.704);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(24,486.9562);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(25,616.9212);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(26,125.7063);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(27,413.9831);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(28,318.1061);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(29,39.28507);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(30,65.07601);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(31,88.27983);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetEntries(27568);

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
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(1,78.24836);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(2,318.1461);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(3,361.7481);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(4,308.8077);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(5,258.6602);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(6,222.8801);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(7,185.3356);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(8,153.0304);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(9,139.2654);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(10,121.1104);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(11,107.4179);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(12,109.1089);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(13,97.47128);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(14,87.7333);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(15,82.24439);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(16,66.97472);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(17,58.0161);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(18,44.12044);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(19,38.01229);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(20,30.17777);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(21,26.35742);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(22,20.28595);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(23,19.21425);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(24,11.55355);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(25,13.74524);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(26,8.448178);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(27,4.605822);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(28,4.450895);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(29,3.307436);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(30,1.340508);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(31,3.793368);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(1,3.642239);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(2,7.222068);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(3,7.629188);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(4,7.114998);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(5,6.401727);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(6,5.963538);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(7,5.477889);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(8,4.961428);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(9,4.677393);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(10,4.425834);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(11,4.003387);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(12,4.221806);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(13,3.955477);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(14,3.679336);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(15,3.620455);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(16,3.189593);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(17,2.912798);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(18,2.510771);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(19,2.389667);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(20,2.072427);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(21,1.967519);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(22,1.756376);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(23,1.710211);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(24,1.14434);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(25,1.550353);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(26,1.094131);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(27,0.8108354);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(28,0.7667128);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(29,0.7618131);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(30,0.3653743);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(31,0.7820246);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetEntries(34548);

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
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(1,1167.841);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(2,5605.222);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(3,7227.741);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(4,6616.511);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(5,5493.808);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(6,4446.385);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(7,3599.974);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(8,3052.875);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(9,2658.889);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(10,2406.593);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(11,2170.478);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(12,2002.609);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(13,1835.365);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(14,1636.265);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(15,1455.117);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(16,1274.489);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(17,1045.09);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(18,847.3402);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(19,703.3893);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(20,581.9273);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(21,468.7353);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(22,370.4374);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(23,293.3248);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(24,227.4219);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(25,169.8515);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(26,125.8315);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(27,88.62569);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(28,61.27538);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(29,40.9);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(30,24.60989);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(31,43.18152);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(1,8.753785);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(2,19.2126);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(3,21.88735);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(4,20.978);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(5,19.11063);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(6,17.1877);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(7,15.45168);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(8,14.22381);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(9,13.28511);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(10,12.64008);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(11,12.00441);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(12,11.54168);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(13,11.04431);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(14,10.43544);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(15,9.826381);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(16,9.182488);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(17,8.316605);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(18,7.481876);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(19,6.811394);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(20,6.197558);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(21,5.55754);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(22,4.923581);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(23,4.37585);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(24,3.846186);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(25,3.341095);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(26,2.87507);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(27,2.408119);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(28,1.990019);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(29,1.632092);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(30,1.258694);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(31,1.662502);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetEntries(905703);

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
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(1,215.6279);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(2,883.9598);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(3,999.4655);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(4,820.5982);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(5,642.3874);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(6,548.8125);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(7,435.6804);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(8,408.2651);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(9,334.2658);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(10,300.989);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(11,290.0708);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(12,267.2172);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(13,253.8133);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(14,229.8149);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(15,194.0435);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(16,177.5032);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(17,136.2554);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(18,108.1151);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(19,93.42916);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(20,73.20993);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(21,60.38471);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(22,43.02178);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(23,43.12953);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(24,32.7915);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(25,27.7023);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(26,13.28473);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(27,12.77871);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(28,7.590387);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(29,3.329393);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(30,3.110612);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(31,3.542988);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(1,7.239453);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(2,19.42486);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(3,22.84226);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(4,21.56407);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(5,18.60548);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(6,16.95796);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(7,15.46589);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(8,15.1324);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(9,11.61895);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(10,10.66697);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(11,11.08691);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(12,11.9625);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(13,12.4436);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(14,10.36949);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(15,9.741322);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(16,10.24754);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(17,9.011853);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(18,7.150612);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(19,5.680026);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(20,5.61802);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(21,6.022299);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(22,3.704503);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(23,5.426717);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(24,4.738701);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(25,4.358);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(26,1.593237);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(27,1.674253);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(28,1.102568);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(29,0.6647936);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(30,0.8246159);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(31,0.9305814);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetEntries(49827);

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
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(1,30.45877);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(2,83.58559);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(3,87.67105);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(4,76.34913);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(5,72.15687);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(6,51.1912);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(7,39.87258);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(8,39.86535);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(9,34.44734);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(10,28.47115);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(11,23.98403);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(12,26.95499);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(13,25.71661);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(14,21.1205);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(15,20.79255);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(16,14.65452);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(17,14.41217);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(18,15.57661);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(19,11.89197);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(20,6.814112);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(21,5.612339);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(22,16.39942);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(23,6.037034);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(24,2.67396);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(25,2.746729);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(26,2.576238);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(27,2.935121);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(28,0.8621557);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(29,0.8145855);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(30,0.8430837);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(31,0.6648323);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(1,7.36907);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(2,6.285387);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(3,6.858801);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(4,12.63116);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(5,12.06996);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(6,5.458792);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(7,4.959561);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(8,4.873633);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(9,4.198006);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(10,4.240602);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(11,3.052313);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(12,4.016478);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(13,4.713952);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(14,2.823821);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(15,3.66293);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(16,2.092085);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(17,2.259842);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(18,3.132824);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(19,2.855739);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(20,1.465346);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(21,1.022112);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(22,7.570998);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(23,1.659408);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(24,0.5866067);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(25,0.6541354);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(26,0.6889238);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(27,1.294533);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(28,0.2847193);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(29,0.2919795);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(30,0.4614355);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(31,0.2884598);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetEntries(7212);

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
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(1,0.5709342);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(2,1.412335);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(3,0.1511118);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(4,0.1511118);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(7,0.4533354);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(8,0.1511118);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(10,0.1511118);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(12,0.1511118);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(15,0.1511118);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(16,0.5709342);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(25,0.3153059);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(1,0.5709342);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(2,0.6484643);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(3,0.1511118);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(4,0.1511118);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(7,0.2617333);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(8,0.1511118);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(10,0.1511118);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(12,0.1511118);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(15,0.1511118);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(16,0.5709342);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(25,0.3153059);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetEntries(17);

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
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(1,0.9076095);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(2,2.27125);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(3,0.5611256);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(4,0.1122251);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(5,0.1122251);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(6,0.3366753);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(8,0.3366753);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(9,0.3366753);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(10,0.3366753);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(11,0.2244502);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(12,0.3366753);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(14,0.3366753);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(15,0.1122251);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(16,0.6831593);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(17,0.1122251);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(19,0.1122251);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(21,0.1122251);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(25,0.427531);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(1,0.6031163);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(2,0.7148577);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(3,0.250943);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(4,0.1122251);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(5,0.1122251);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(6,0.1943796);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(8,0.1943796);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(9,0.1943796);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(10,0.1943796);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(11,0.1587103);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(12,0.1943796);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(14,0.1943796);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(15,0.1122251);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(16,0.5818594);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(17,0.1122251);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(19,0.1122251);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(21,0.1122251);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(25,0.3346824);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetEntries(52);

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
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(1,2.903074);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(2,19.89054);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(3,20.91056);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(4,19.89869);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(5,11.04672);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(6,9.05179);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(7,5.04441);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(8,4.993578);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(9,5.403936);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(10,9.117004);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(11,7.573006);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(12,7.188837);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(13,4.897485);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(14,5.657162);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(15,4.286793);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(16,3.142947);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(17,2.675522);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(18,2.117208);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(19,1.370368);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(21,0.5064512);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(23,0.7987025);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(24,0.8120543);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(25,0.2660625);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(26,0.7858656);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(28,0.2532256);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(1,0.8762523);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(2,2.298831);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(3,2.369522);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(4,2.315033);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(5,1.726483);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(6,1.553584);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(7,1.157928);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(8,1.146626);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(9,1.209367);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(10,1.564668);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(11,1.432253);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(12,1.384731);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(13,1.155129);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(14,1.235594);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(15,1.072799);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(16,0.9081069);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(17,0.8467744);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(18,0.7493325);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(19,0.6130217);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(21,0.3581151);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(22,0.2532256);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(23,0.4615028);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(24,0.4693271);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(25,0.2660625);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(26,0.4542233);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(28,0.2532256);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetEntries(564);

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
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(1,3.752309);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(2,18.04625);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(3,21.63563);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(4,18.12202);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(5,13.49852);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(6,9.908206);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(7,7.880224);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(8,6.675011);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(9,6.257633);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(10,6.447424);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(11,6.229629);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(12,5.899065);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(13,5.572894);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(14,4.568772);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(15,3.57629);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(16,2.663617);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(17,1.8943);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(18,1.334131);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(19,0.9364421);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(20,0.6763136);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(21,0.5793096);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(22,0.4906786);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(23,0.3559271);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(24,0.3347053);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(25,0.2493804);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(26,0.1735064);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(27,0.1257235);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(28,0.04219909);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(29,0.01915523);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(30,0.01756305);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(31,0.01463908);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(1,0.08831237);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(2,0.1946841);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(3,0.2114677);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(4,0.1929658);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(5,0.1664324);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(6,0.143047);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(7,0.1276579);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(8,0.1172423);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(9,0.1132218);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(10,0.1156551);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(11,0.1134801);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(12,0.110314);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(13,0.1073771);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(14,0.09723252);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(15,0.0854912);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(16,0.0733299);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(17,0.06225201);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(18,0.05216485);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(19,0.04272615);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(20,0.03691162);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(21,0.03468999);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(22,0.03195857);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(23,0.02674049);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(24,0.02647494);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(25,0.02349287);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(26,0.01893812);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(27,0.01633454);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(28,0.008945224);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(29,0.005693154);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(30,0.006471762);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(31,0.005438208);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetEntries(79284);

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
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(1,1.534074);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(2,7.569723);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(3,9.819699);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(4,8.735295);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(5,6.569734);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(6,4.80352);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(7,3.663921);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(8,3.134706);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(9,2.811658);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(10,2.51783);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(11,2.5227);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(12,2.274326);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(13,2.042186);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(14,1.823032);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(15,1.477257);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(16,1.189922);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(17,0.9740155);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(18,0.7061612);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(19,0.5665523);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(20,0.4318135);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(21,0.3376587);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(22,0.275971);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(23,0.2256469);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(24,0.1704527);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(25,0.1055183);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(26,0.06655772);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(27,0.05844093);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(28,0.02272703);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(29,0.01948031);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(30,0.006493436);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(31,0.01623359);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(1,0.02951696);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(2,0.06556747);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(3,0.07467883);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(4,0.07043479);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(5,0.06108327);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(6,0.05223098);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(7,0.04561645);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(8,0.04219362);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(9,0.03996038);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(10,0.03781478);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(11,0.03785134);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(12,0.03593973);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(13,0.03405619);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(14,0.032177);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(15,0.02896519);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(16,0.02599607);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(17,0.02351968);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(18,0.02002628);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(19,0.01793777);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(20,0.01566017);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(21,0.01384801);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(22,0.0125193);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(23,0.01132043);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(24,0.009838986);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(25,0.007741273);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(26,0.006148195);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(27,0.00576112);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(28,0.00359269);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(29,0.003326184);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(30,0.001920373);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(31,0.003036377);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetEntries(122844);

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
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(1,14244);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(2,55601);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(3,56525);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(4,46803);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(5,39441);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(6,32479);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(7,27462);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(8,23788);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(9,21005);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(10,18974);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(11,17364);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(12,16105);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(13,14664);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(14,13306);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(15,12200);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(16,10602);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(17,8618);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(18,7197);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(19,5862);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(20,5001);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(21,4017);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(22,3295);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(23,2719);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(24,2124);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(25,1624);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(26,1251);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(27,898);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(28,642);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(29,388);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(30,254);
   VbbHcc_tags_H_dR_Bj0_all__120->SetBinContent(31,414);
   VbbHcc_tags_H_dR_Bj0_all__120->SetEntries(464896);

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
   15122.26,
   73088.75,
   80305.25,
   67302.82,
   50181.85,
   61575.89,
   42911.5,
   36271.29,
   32189.24,
   25263.52,
   22620.79,
   23782.79,
   22966.47,
   18546.05,
   15899.37,
   15369.61,
   10545.89,
   8641.623,
   25060.79,
   3805.469,
   4655.379,
   2896.084,
   5216.258,
   2198.253,
   2496.444,
   957.3957,
   974.0096,
   780.1905,
   138.2214,
   199.1471};
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
   1138.2,
   3772.273,
   3853.961,
   4350.479,
   2815.305,
   17305.33,
   3294.715,
   3523.676,
   2561.455,
   2576.894,
   2351.585,
   2368.939,
   2438.681,
   1761.162,
   2022.435,
   2062.727,
   1220.76,
   1111.308,
   17060.61,
   504.797,
   835.5431,
   516.0518,
   1941.718,
   486.9963,
   616.9482,
   125.7568,
   413.9963,
   318.1153,
   39.33304,
   65.09607};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj0_all_fx1087,Graph_from_VbbHcc_tags_H_dR_Bj0_all_fy1087,Graph_from_VbbHcc_tags_H_dR_Bj0_all_fex1087,Graph_from_VbbHcc_tags_H_dR_Bj0_all_fey1087);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetMinimum(88.9995);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetMaximum(92565.24);
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
   data_mc_ratio__121->SetBinContent(1,0.9419229);
   data_mc_ratio__121->SetBinContent(2,0.7607327);
   data_mc_ratio__121->SetBinContent(3,0.7038768);
   data_mc_ratio__121->SetBinContent(4,0.6954092);
   data_mc_ratio__121->SetBinContent(5,0.7859615);
   data_mc_ratio__121->SetBinContent(6,0.527463);
   data_mc_ratio__121->SetBinContent(7,0.6399684);
   data_mc_ratio__121->SetBinContent(8,0.6558355);
   data_mc_ratio__121->SetBinContent(9,0.6525472);
   data_mc_ratio__121->SetBinContent(10,0.7510433);
   data_mc_ratio__121->SetBinContent(11,0.7676126);
   data_mc_ratio__121->SetBinContent(12,0.6771704);
   data_mc_ratio__121->SetBinContent(13,0.638496);
   data_mc_ratio__121->SetBinContent(14,0.7174572);
   data_mc_ratio__121->SetBinContent(15,0.7673261);
   data_mc_ratio__121->SetBinContent(16,0.6898029);
   data_mc_ratio__121->SetBinContent(17,0.8171904);
   data_mc_ratio__121->SetBinContent(18,0.8328297);
   data_mc_ratio__121->SetBinContent(19,0.2339112);
   data_mc_ratio__121->SetBinContent(20,1.314161);
   data_mc_ratio__121->SetBinContent(21,0.8628728);
   data_mc_ratio__121->SetBinContent(22,1.137743);
   data_mc_ratio__121->SetBinContent(23,0.5212548);
   data_mc_ratio__121->SetBinContent(24,0.9662218);
   data_mc_ratio__121->SetBinContent(25,0.6505253);
   data_mc_ratio__121->SetBinContent(26,1.30667);
   data_mc_ratio__121->SetBinContent(27,0.9219621);
   data_mc_ratio__121->SetBinContent(28,0.8228759);
   data_mc_ratio__121->SetBinContent(29,2.807091);
   data_mc_ratio__121->SetBinContent(30,1.275439);
   data_mc_ratio__121->SetBinContent(31,1.195252);
   data_mc_ratio__121->SetBinError(1,0.007892223);
   data_mc_ratio__121->SetBinError(2,0.003226196);
   data_mc_ratio__121->SetBinError(3,0.002960577);
   data_mc_ratio__121->SetBinError(4,0.003214427);
   data_mc_ratio__121->SetBinError(5,0.003957558);
   data_mc_ratio__121->SetBinError(6,0.002926784);
   data_mc_ratio__121->SetBinError(7,0.003861824);
   data_mc_ratio__121->SetBinError(8,0.004252222);
   data_mc_ratio__121->SetBinError(9,0.004502467);
   data_mc_ratio__121->SetBinError(10,0.005452373);
   data_mc_ratio__121->SetBinError(11,0.005825285);
   data_mc_ratio__121->SetBinError(12,0.005336022);
   data_mc_ratio__121->SetBinError(13,0.005272686);
   data_mc_ratio__121->SetBinError(14,0.00621974);
   data_mc_ratio__121->SetBinError(15,0.006947044);
   data_mc_ratio__121->SetBinError(16,0.006699327);
   data_mc_ratio__121->SetBinError(17,0.008802783);
   data_mc_ratio__121->SetBinError(18,0.009817037);
   data_mc_ratio__121->SetBinError(19,0.003055119);
   data_mc_ratio__121->SetBinError(20,0.01858319);
   data_mc_ratio__121->SetBinError(21,0.01361432);
   data_mc_ratio__121->SetBinError(22,0.01982059);
   data_mc_ratio__121->SetBinError(23,0.009996443);
   data_mc_ratio__121->SetBinError(24,0.02096523);
   data_mc_ratio__121->SetBinError(25,0.01614252);
   data_mc_ratio__121->SetBinError(26,0.03694343);
   data_mc_ratio__121->SetBinError(27,0.03076627);
   data_mc_ratio__121->SetBinError(28,0.03247632);
   data_mc_ratio__121->SetBinError(29,0.1425085);
   data_mc_ratio__121->SetBinError(30,0.08002817);
   data_mc_ratio__121->SetBinError(31,0.3103302);
   data_mc_ratio__121->SetMinimum(0.4);
   data_mc_ratio__121->SetMaximum(1.6);
   data_mc_ratio__121->SetEntries(452.0629);
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
   0.07526655,
   0.05161223,
   0.0479914,
   0.06464037,
   0.05610207,
   0.2810408,
   0.07677931,
   0.09714778,
   0.07957486,
   0.1020006,
   0.1039568,
   0.09960728,
   0.1061844,
   0.09496152,
   0.1272022,
   0.1342082,
   0.1157569,
   0.1285995,
   0.6807691,
   0.1326504,
   0.1794791,
   0.1781895,
   0.3722434,
   0.2215379,
   0.2471308,
   0.131353,
   0.4250433,
   0.4077406,
   0.2845656,
   0.3268743};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1088,Graph_from_mc_statistical_error_fy1088,Graph_from_mc_statistical_error_fex1088,Graph_from_mc_statistical_error_fey1088);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1088 = new TH1F("Graph_Graph_from_mc_statistical_error1088","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1088->SetMinimum(0.1830771);
   Graph_Graph_from_mc_statistical_error1088->SetMaximum(1.816923);
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
