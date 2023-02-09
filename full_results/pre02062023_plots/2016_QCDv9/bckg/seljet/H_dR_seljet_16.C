#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_16()
{
//=========Macro generated from canvas: H_dR_seljet_16/H_dR_seljet_16
//=========  (Wed Jan 18 11:43:15 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_16 = new TCanvas("H_dR_seljet_16", "H_dR_seljet_16",0,0,600,600);
   H_dR_seljet_16->SetHighLightColor(2);
   H_dR_seljet_16->Range(-1.353788,-6.049847e+08,7.264125,4.436554e+09);
   H_dR_seljet_16->SetFillColor(0);
   H_dR_seljet_16->SetFillStyle(4000);
   H_dR_seljet_16->SetBorderMode(0);
   H_dR_seljet_16->SetBorderSize(2);
   H_dR_seljet_16->SetLeftMargin(0.15709);
   H_dR_seljet_16->SetRightMargin(0.1234783);
   H_dR_seljet_16->SetBottomMargin(0.12);
   H_dR_seljet_16->SetFrameFillStyle(1000);
   H_dR_seljet_16->SetFrameBorderMode(0);
   H_dR_seljet_16->SetFrameFillStyle(1000);
   H_dR_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.9324e+09);
   
   TH1F *st_stack_277 = new TH1F("st_stack_277","",30,0,6);
   st_stack_277->SetMinimum(0);
   st_stack_277->SetMaximum(3.9324e+09);
   st_stack_277->SetDirectory(0);
   st_stack_277->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_277->SetLineColor(ci);
   st_stack_277->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_277->GetXaxis()->SetRange(1,31);
   st_stack_277->GetXaxis()->SetLabelFont(42);
   st_stack_277->GetXaxis()->SetTitleOffset(1);
   st_stack_277->GetXaxis()->SetTitleFont(42);
   st_stack_277->GetYaxis()->SetTitle("Events/0.2");
   st_stack_277->GetYaxis()->SetLabelFont(42);
   st_stack_277->GetYaxis()->SetTitleSize(0.037);
   st_stack_277->GetYaxis()->SetTitleFont(42);
   st_stack_277->GetZaxis()->SetLabelFont(42);
   st_stack_277->GetZaxis()->SetTitleOffset(1);
   st_stack_277->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_277);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,119944.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,1.307914e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,2.087751e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,1.797568e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,1.890508e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,2.111526e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,2.539523e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,3.196394e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,4.195596e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,5.663932e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,7.952875e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,1.128813e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,1.585761e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,2.178385e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,2.618866e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,1.654151e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,1.15965e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,8.515738e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,6.27897e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,4.552941e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,3.255825e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,2.236819e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,1.442444e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,8.604732e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,4.655638e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,2.101544e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,6194295);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(29,404281.3);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,19550.41);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,1036466);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,1419794);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,1331594);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,1366008);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,1420214);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,1545240);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,1700038);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,1893730);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,2118659);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,2440177);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,2827342);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,3264293);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,3764813);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,4109003);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,3275955);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,2766192);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,2387839);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,2079312);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,1776049);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,1523614);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,1268878);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,1023059);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,788569.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,586501.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,403865.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,225746.8);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(29,57416.32);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(6.188646e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_stack_2 = new TH1D("VbbHcc_seljet_H_dR_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,122.7384);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,129937.5);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,291481.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,397047.4);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,478452.9);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,530427);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,579215.5);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,656165);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,781669.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,971127.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,1240430);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,1601263);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,2047040);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,2537469);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,2734563);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,1408608);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,807264);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,492316.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,303068);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,185214.9);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,111548.9);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,65202.31);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,36308.67);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,18760.89);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,8659.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,3277.093);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,799.0957);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(29,45.78832);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,2.777038);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,91.98068);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,138.6124);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,162.1288);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,178.1976);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,188.0311);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,197.0703);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,210.4359);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,230.52);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,257.9032);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,292.5482);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,333.5388);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,378.3523);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,422.4591);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,439.3729);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,314.6185);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,237.4314);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,184.7726);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,144.3936);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,112.3582);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,86.77075);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,65.9617);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,48.94774);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,34.95062);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,23.56353);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,14.3546);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,6.9767);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(29,1.66788);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(2.87454e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_1","QCD","F");

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
   H_dR_seljet_16->Modified();
   H_dR_seljet_16->cd();
   H_dR_seljet_16->SetSelected(H_dR_seljet_16);
}
