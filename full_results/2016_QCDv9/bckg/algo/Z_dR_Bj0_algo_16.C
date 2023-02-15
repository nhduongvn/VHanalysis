#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_16/Z_dR_Bj0_algo_16
//=========  (Tue Feb 14 16:10:11 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_16 = new TCanvas("Z_dR_Bj0_algo_16", "Z_dR_Bj0_algo_16",0,0,600,600);
   Z_dR_Bj0_algo_16->SetHighLightColor(2);
   Z_dR_Bj0_algo_16->Range(-1.310117,-282763.3,7.029799,2073598);
   Z_dR_Bj0_algo_16->SetFillColor(0);
   Z_dR_Bj0_algo_16->SetFillStyle(4000);
   Z_dR_Bj0_algo_16->SetBorderMode(0);
   Z_dR_Bj0_algo_16->SetBorderSize(2);
   Z_dR_Bj0_algo_16->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_16->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_16->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1837962);
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",30,0,6);
   st_stack_113->SetMinimum(0);
   st_stack_113->SetMaximum(1837962);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_113->GetXaxis()->SetRange(1,30);
   st_stack_113->GetXaxis()->SetLabelFont(42);
   st_stack_113->GetXaxis()->SetTitleOffset(1);
   st_stack_113->GetXaxis()->SetTitleFont(42);
   st_stack_113->GetYaxis()->SetTitle("Events/0.2");
   st_stack_113->GetYaxis()->SetLabelFont(42);
   st_stack_113->GetYaxis()->SetTitleSize(0.037);
   st_stack_113->GetYaxis()->SetTitleFont(42);
   st_stack_113->GetZaxis()->SetLabelFont(42);
   st_stack_113->GetZaxis()->SetTitleOffset(1);
   st_stack_113->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_113);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,290528.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,1209556);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,747740.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,623263.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,363302.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,230188.4);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,88603.17);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,53376.86);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,61604.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,39747.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,23261.87);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,20009.65);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,36125.16);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,8061.62);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,4380.367);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,2378.22);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,987.1299);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,2016.326);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,69.01164);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,665.1012);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,3232.276);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,345.8753);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,9.168776);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,23.84662);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,9.168776);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(31,1604.444);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,12939.72);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,73401.32);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,51437.35);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,73232.17);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,47920.79);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,46179.43);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,9828.91);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,7273.712);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,23115.67);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,7170.846);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,5057.704);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,5177.399);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,22591.1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,2946.451);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,1828.926);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,1663.874);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,536.5981);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,1634.655);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,35.71793);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,438.4722);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,2269.148);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,310.2046);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,9.168776);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,23.39181);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,9.168776);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(31,1604.444);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(33466);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,2256.353);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,15751.9);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,21552.14);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,17770.61);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,11962.48);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,7423.16);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,4577.801);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,2903.437);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,1893.257);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,1271.485);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,855.0689);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,575.1612);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,400.1162);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,273.7847);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,191.8898);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,132.3714);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,89.98125);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,62.17417);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,42.79061);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,29.42895);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,18.73384);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,15.8042);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,9.809414);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,5.750818);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,4.368372);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,2.872286);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,1.991925);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,1.44995);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,0.9270692);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.5347332);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,1.213923);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,11.83445);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,31.38337);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,36.75614);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,33.38275);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,27.36698);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,21.52643);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,16.89268);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,13.43578);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,10.83383);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,8.876055);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,7.262767);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,5.952616);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,4.963659);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,4.109337);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,3.443859);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,2.855553);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,2.355304);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,1.951127);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,1.626722);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,1.34861);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.06259);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,0.9892885);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,0.7813029);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.6018804);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.5124446);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.4200089);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.356228);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.3001051);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.2357588);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.1812743);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.2747461);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(1481664);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","t#bar{t}","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_16->Modified();
   Z_dR_Bj0_algo_16->cd();
   Z_dR_Bj0_algo_16->SetSelected(Z_dR_Bj0_algo_16);
}
