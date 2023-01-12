#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_16_logY()
{
//=========Macro generated from canvas: Z_dR_seljet_16/Z_dR_seljet_16
//=========  (Mon Dec 19 11:10:39 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_16 = new TCanvas("Z_dR_seljet_16", "Z_dR_seljet_16",0,0,600,600);
   Z_dR_seljet_16->SetHighLightColor(2);
   Z_dR_seljet_16->Range(-1.310117,0.2062882,7.029799,3.957576);
   Z_dR_seljet_16->SetFillColor(0);
   Z_dR_seljet_16->SetFillStyle(4000);
   Z_dR_seljet_16->SetBorderMode(0);
   Z_dR_seljet_16->SetBorderSize(2);
   Z_dR_seljet_16->SetLogy();
   Z_dR_seljet_16->SetLeftMargin(0.15709);
   Z_dR_seljet_16->SetRightMargin(0.1234783);
   Z_dR_seljet_16->SetBottomMargin(0.12);
   Z_dR_seljet_16->SetFrameFillStyle(1000);
   Z_dR_seljet_16->SetFrameBorderMode(0);
   Z_dR_seljet_16->SetFrameFillStyle(1000);
   Z_dR_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2579.35);
   
   TH1F *st_stack_241 = new TH1F("st_stack_241","",30,0,6);
   st_stack_241->SetMinimum(4.533595);
   st_stack_241->SetMaximum(3823.376);
   st_stack_241->SetDirectory(0);
   st_stack_241->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_241->SetLineColor(ci);
   st_stack_241->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_241->GetXaxis()->SetRange(1,30);
   st_stack_241->GetXaxis()->SetLabelFont(42);
   st_stack_241->GetXaxis()->SetTitleOffset(1);
   st_stack_241->GetXaxis()->SetTitleFont(42);
   st_stack_241->GetYaxis()->SetTitle("Events/0.2");
   st_stack_241->GetYaxis()->SetLabelFont(42);
   st_stack_241->GetYaxis()->SetTitleSize(0.037);
   st_stack_241->GetYaxis()->SetTitleFont(42);
   st_stack_241->GetZaxis()->SetLabelFont(42);
   st_stack_241->GetZaxis()->SetTitleOffset(1);
   st_stack_241->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_241);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,0.004311181);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,4.758087);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,8.745991);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,9.030725);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,10.46425);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,11.45076);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,12.58975);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,13.66156);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,14.38856);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,15.55369);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,16.5525);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,18.03607);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,19.16276);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,20.55596);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,19.80368);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,9.287286);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,5.138092);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,3.058546);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,2.023197);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,1.371077);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,0.8478974);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,0.6472651);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,0.34768);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,0.1830165);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,0.1185903);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,0.0214349);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,0.006438819);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,0.001581662);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,0.002491013);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,0.0862607);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,0.116733);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,0.1184889);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,0.1279865);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,0.1334662);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,0.1401248);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,0.1457801);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,0.1499836);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,0.1558611);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,0.1612094);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,0.1682531);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,0.1732716);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,0.1795827);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,0.176361);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,0.1203914);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,0.08952152);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,0.06882907);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,0.05570257);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,0.04539779);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,0.03595563);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,0.0312387);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,0.02263825);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,0.01682567);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,0.01320671);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,0.005560184);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,0.002952202);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,0.001581662);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(157244);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,0.00120509);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,1.235234);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,2.162243);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,2.441201);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,2.855598);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,3.170086);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,3.344717);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,3.547954);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,3.787858);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,4.092227);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,4.328929);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,4.696776);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,4.942934);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,5.237543);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,5.098218);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,2.651294);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,1.598408);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,1.033742);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,0.694702);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,0.4408521);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,0.2804715);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,0.1794901);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,0.1077727);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,0.0604102);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,0.02741951);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,0.01330949);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,0.002472841);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,0.0004807776);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,0.0153123);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,0.02023786);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,0.02151664);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,0.02327682);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,0.0245207);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,0.02520294);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,0.02597081);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,0.02682069);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,0.02787799);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,0.02868343);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,0.02988928);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,0.03065398);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,0.03156695);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,0.03113884);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,0.0224402);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,0.01739805);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,0.01397774);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,0.01144719);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,0.009089086);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,0.007238912);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,0.005789343);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,0.004470805);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,0.003344634);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,0.002255491);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,0.001563454);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,0.0006500413);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(328438);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_seljet_16->Modified();
   Z_dR_seljet_16->cd();
   Z_dR_seljet_16->SetSelected(Z_dR_seljet_16);
}
