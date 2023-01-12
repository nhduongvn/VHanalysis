#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_18/H_dR_Bj0_algo_18
//=========  (Mon Dec 19 11:11:47 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_18 = new TCanvas("H_dR_Bj0_algo_18", "H_dR_Bj0_algo_18",0,0,600,600);
   H_dR_Bj0_algo_18->SetHighLightColor(2);
   H_dR_Bj0_algo_18->Range(-1.310117,-571081.3,7.029799,4187930);
   H_dR_Bj0_algo_18->SetFillColor(0);
   H_dR_Bj0_algo_18->SetFillStyle(4000);
   H_dR_Bj0_algo_18->SetBorderMode(0);
   H_dR_Bj0_algo_18->SetBorderSize(2);
   H_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_18->SetBottomMargin(0.12);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3712029);
   
   TH1F *st_stack_99 = new TH1F("st_stack_99","",30,0,6);
   st_stack_99->SetMinimum(0);
   st_stack_99->SetMaximum(3712029);
   st_stack_99->SetDirectory(0);
   st_stack_99->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_99->SetLineColor(ci);
   st_stack_99->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_99->GetXaxis()->SetRange(1,30);
   st_stack_99->GetXaxis()->SetLabelFont(42);
   st_stack_99->GetXaxis()->SetTitleOffset(1);
   st_stack_99->GetXaxis()->SetTitleFont(42);
   st_stack_99->GetYaxis()->SetTitle("Events/0.2");
   st_stack_99->GetYaxis()->SetLabelFont(42);
   st_stack_99->GetYaxis()->SetTitleSize(0.037);
   st_stack_99->GetYaxis()->SetTitleFont(42);
   st_stack_99->GetZaxis()->SetLabelFont(42);
   st_stack_99->GetZaxis()->SetTitleOffset(1);
   st_stack_99->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_99);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,933970.5);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,2429633);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,2162425);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,1670568);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,973108.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,710457);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,366013.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,340888.5);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,167103.7);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,228757.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,105779.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,52259.19);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,38552.28);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,105055.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,96756.45);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,27735.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,9537.878);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,4246.299);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,4113.546);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,2189.256);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1751.662);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,2051.081);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,44.28145);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,31.5388);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,54894.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,114548);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,134884.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,140976.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,103897.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,93022.15);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,64104.55);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,67330.65);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,45079.42);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,58986.03);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,38760.73);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,22854.43);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,22452.28);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,44241.09);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,44080.98);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,22118.34);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,3503.007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,2439.496);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,2438.916);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,1725.487);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,1689.173);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,1724.473);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,34.01575);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,31.5388);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(42604);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,12145.06);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,45052.6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,44423.32);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,29666.41);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,17754.04);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,10509.39);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,6438.803);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,4085.916);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,2638.061);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,1743.373);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,1157.922);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,781.6834);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,530.7006);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,351.6184);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,236.4137);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,165.8916);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,114.8552);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,77.58183);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,48.8837);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,36.90329);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,23.4808);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,16.22757);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,11.39519);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,8.020495);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,4.986433);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,2.93432);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,2.011231);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.8387532);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,1.103414);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.8182781);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,1.782317);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,27.98073);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,54.39303);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,54.53589);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,44.91001);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,34.9103);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,26.8978);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,21.05581);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,16.76331);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,13.4554);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,10.93586);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,8.90875);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,7.325257);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,6.039319);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,4.901694);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,4.029658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,3.373639);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,2.81344);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,2.312797);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,1.839381);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.588339);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.261256);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,1.052071);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.8810712);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.7433583);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.5863511);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.4470208);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.379447);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.2448709);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.2792387);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.2327166);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.3487321);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(2750781);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_18->Modified();
   H_dR_Bj0_algo_18->cd();
   H_dR_Bj0_algo_18->SetSelected(H_dR_Bj0_algo_18);
}
