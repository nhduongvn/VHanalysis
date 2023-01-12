#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_16_logY()
{
//=========Macro generated from canvas: H_pt_both_16/H_pt_both_16
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *H_pt_both_16 = new TCanvas("H_pt_both_16", "H_pt_both_16",0,0,600,600);
   H_pt_both_16->SetHighLightColor(2);
   H_pt_both_16->Range(37.97653,0.4931858,1705.96,2.765446);
   H_pt_both_16->SetFillColor(0);
   H_pt_both_16->SetFillStyle(4000);
   H_pt_both_16->SetBorderMode(0);
   H_pt_both_16->SetBorderSize(2);
   H_pt_both_16->SetLogy();
   H_pt_both_16->SetLeftMargin(0.15709);
   H_pt_both_16->SetRightMargin(0.1234783);
   H_pt_both_16->SetBottomMargin(0.12);
   H_pt_both_16->SetFrameFillStyle(1000);
   H_pt_both_16->SetFrameBorderMode(0);
   H_pt_both_16->SetFrameFillStyle(1000);
   H_pt_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(268.5613);
   
   TH1F *st_stack_125 = new TH1F("st_stack_125","",40,0,2000);
   st_stack_125->SetMinimum(5.83253);
   st_stack_125->SetMaximum(345.3185);
   st_stack_125->SetDirectory(0);
   st_stack_125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_125->SetLineColor(ci);
   st_stack_125->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_125->GetXaxis()->SetRange(7,30);
   st_stack_125->GetXaxis()->SetLabelFont(42);
   st_stack_125->GetXaxis()->SetTitleOffset(1);
   st_stack_125->GetXaxis()->SetTitleFont(42);
   st_stack_125->GetYaxis()->SetTitle("Events/50.0");
   st_stack_125->GetYaxis()->SetLabelFont(42);
   st_stack_125->GetYaxis()->SetTitleSize(0.037);
   st_stack_125->GetYaxis()->SetTitleFont(42);
   st_stack_125->GetZaxis()->SetLabelFont(42);
   st_stack_125->GetZaxis()->SetTitleOffset(1);
   st_stack_125->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_125);
   
   
   TH1D *VbbHcc_both_H_pt_stack_1 = new TH1D("VbbHcc_both_H_pt_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_stack_1->SetBinContent(1,1.519258);
   VbbHcc_both_H_pt_stack_1->SetBinContent(2,2.685613);
   VbbHcc_both_H_pt_stack_1->SetBinContent(3,1.66055);
   VbbHcc_both_H_pt_stack_1->SetBinContent(4,0.8301152);
   VbbHcc_both_H_pt_stack_1->SetBinContent(5,0.3789267);
   VbbHcc_both_H_pt_stack_1->SetBinContent(6,0.238294);
   VbbHcc_both_H_pt_stack_1->SetBinContent(7,0.1287429);
   VbbHcc_both_H_pt_stack_1->SetBinContent(8,0.1077791);
   VbbHcc_both_H_pt_stack_1->SetBinContent(9,0.04730171);
   VbbHcc_both_H_pt_stack_1->SetBinContent(10,0.02625168);
   VbbHcc_both_H_pt_stack_1->SetBinContent(11,0.0217422);
   VbbHcc_both_H_pt_stack_1->SetBinContent(12,0.01364291);
   VbbHcc_both_H_pt_stack_1->SetBinContent(13,0.006156105);
   VbbHcc_both_H_pt_stack_1->SetBinContent(14,0.002240301);
   VbbHcc_both_H_pt_stack_1->SetBinContent(15,0.003027773);
   VbbHcc_both_H_pt_stack_1->SetBinContent(16,0.001503752);
   VbbHcc_both_H_pt_stack_1->SetBinContent(17,0.00152612);
   VbbHcc_both_H_pt_stack_1->SetBinContent(19,0.001250184);
   VbbHcc_both_H_pt_stack_1->SetBinError(1,0.04888507);
   VbbHcc_both_H_pt_stack_1->SetBinError(2,0.06471654);
   VbbHcc_both_H_pt_stack_1->SetBinError(3,0.05086367);
   VbbHcc_both_H_pt_stack_1->SetBinError(4,0.03584715);
   VbbHcc_both_H_pt_stack_1->SetBinError(5,0.02420131);
   VbbHcc_both_H_pt_stack_1->SetBinError(6,0.01894275);
   VbbHcc_both_H_pt_stack_1->SetBinError(7,0.0139436);
   VbbHcc_both_H_pt_stack_1->SetBinError(8,0.0128357);
   VbbHcc_both_H_pt_stack_1->SetBinError(9,0.008493496);
   VbbHcc_both_H_pt_stack_1->SetBinError(10,0.006299319);
   VbbHcc_both_H_pt_stack_1->SetBinError(11,0.005819246);
   VbbHcc_both_H_pt_stack_1->SetBinError(12,0.004552526);
   VbbHcc_both_H_pt_stack_1->SetBinError(13,0.003078305);
   VbbHcc_both_H_pt_stack_1->SetBinError(14,0.001679259);
   VbbHcc_both_H_pt_stack_1->SetBinError(15,0.002140267);
   VbbHcc_both_H_pt_stack_1->SetBinError(16,0.001503752);
   VbbHcc_both_H_pt_stack_1->SetBinError(17,0.00152612);
   VbbHcc_both_H_pt_stack_1->SetBinError(19,0.001250184);
   VbbHcc_both_H_pt_stack_1->SetEntries(5612);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_1,"");
   
   TH1D *VbbHcc_both_H_pt_stack_2 = new TH1D("VbbHcc_both_H_pt_stack_2","",40,0,2000);
   VbbHcc_both_H_pt_stack_2->SetBinContent(1,0.3104451);
   VbbHcc_both_H_pt_stack_2->SetBinContent(2,0.6907883);
   VbbHcc_both_H_pt_stack_2->SetBinContent(3,0.703718);
   VbbHcc_both_H_pt_stack_2->SetBinContent(4,0.4753058);
   VbbHcc_both_H_pt_stack_2->SetBinContent(5,0.2598311);
   VbbHcc_both_H_pt_stack_2->SetBinContent(6,0.135799);
   VbbHcc_both_H_pt_stack_2->SetBinContent(7,0.08920421);
   VbbHcc_both_H_pt_stack_2->SetBinContent(8,0.05917021);
   VbbHcc_both_H_pt_stack_2->SetBinContent(9,0.04233877);
   VbbHcc_both_H_pt_stack_2->SetBinContent(10,0.02334579);
   VbbHcc_both_H_pt_stack_2->SetBinContent(11,0.01473319);
   VbbHcc_both_H_pt_stack_2->SetBinContent(12,0.01136584);
   VbbHcc_both_H_pt_stack_2->SetBinContent(13,0.008989758);
   VbbHcc_both_H_pt_stack_2->SetBinContent(14,0.00405577);
   VbbHcc_both_H_pt_stack_2->SetBinContent(15,0.004773404);
   VbbHcc_both_H_pt_stack_2->SetBinContent(16,0.002013749);
   VbbHcc_both_H_pt_stack_2->SetBinContent(17,0.001169377);
   VbbHcc_both_H_pt_stack_2->SetBinContent(18,0.002121557);
   VbbHcc_both_H_pt_stack_2->SetBinContent(19,0.001686549);
   VbbHcc_both_H_pt_stack_2->SetBinContent(20,0.0009893607);
   VbbHcc_both_H_pt_stack_2->SetBinContent(21,0.0009824874);
   VbbHcc_both_H_pt_stack_2->SetBinContent(22,0.0004518424);
   VbbHcc_both_H_pt_stack_2->SetBinContent(23,0.0004562821);
   VbbHcc_both_H_pt_stack_2->SetBinContent(24,0.0001737629);
   VbbHcc_both_H_pt_stack_2->SetBinContent(25,0.0003965703);
   VbbHcc_both_H_pt_stack_2->SetBinContent(27,0.0002057899);
   VbbHcc_both_H_pt_stack_2->SetBinContent(30,0.0001867829);
   VbbHcc_both_H_pt_stack_2->SetBinContent(34,0.0001480239);
   VbbHcc_both_H_pt_stack_2->SetBinContent(38,0.0001892237);
   VbbHcc_both_H_pt_stack_2->SetBinContent(39,0.0001275402);
   VbbHcc_both_H_pt_stack_2->SetBinError(1,0.007661472);
   VbbHcc_both_H_pt_stack_2->SetBinError(2,0.01143856);
   VbbHcc_both_H_pt_stack_2->SetBinError(3,0.01155274);
   VbbHcc_both_H_pt_stack_2->SetBinError(4,0.00948088);
   VbbHcc_both_H_pt_stack_2->SetBinError(5,0.006996404);
   VbbHcc_both_H_pt_stack_2->SetBinError(6,0.00504546);
   VbbHcc_both_H_pt_stack_2->SetBinError(7,0.004085828);
   VbbHcc_both_H_pt_stack_2->SetBinError(8,0.003324659);
   VbbHcc_both_H_pt_stack_2->SetBinError(9,0.002827878);
   VbbHcc_both_H_pt_stack_2->SetBinError(10,0.002085174);
   VbbHcc_both_H_pt_stack_2->SetBinError(11,0.001688781);
   VbbHcc_both_H_pt_stack_2->SetBinError(12,0.001463373);
   VbbHcc_both_H_pt_stack_2->SetBinError(13,0.001303676);
   VbbHcc_both_H_pt_stack_2->SetBinError(14,0.0008637531);
   VbbHcc_both_H_pt_stack_2->SetBinError(15,0.0009567232);
   VbbHcc_both_H_pt_stack_2->SetBinError(16,0.000619096);
   VbbHcc_both_H_pt_stack_2->SetBinError(17,0.0004701088);
   VbbHcc_both_H_pt_stack_2->SetBinError(18,0.0006254374);
   VbbHcc_both_H_pt_stack_2->SetBinError(19,0.0005695099);
   VbbHcc_both_H_pt_stack_2->SetBinError(20,0.0004433285);
   VbbHcc_both_H_pt_stack_2->SetBinError(21,0.0004398475);
   VbbHcc_both_H_pt_stack_2->SetBinError(22,0.0002720678);
   VbbHcc_both_H_pt_stack_2->SetBinError(23,0.0002812633);
   VbbHcc_both_H_pt_stack_2->SetBinError(24,0.0001737629);
   VbbHcc_both_H_pt_stack_2->SetBinError(25,0.0002804482);
   VbbHcc_both_H_pt_stack_2->SetBinError(27,0.0002057899);
   VbbHcc_both_H_pt_stack_2->SetBinError(30,0.0001867829);
   VbbHcc_both_H_pt_stack_2->SetBinError(34,0.0001480239);
   VbbHcc_both_H_pt_stack_2->SetBinError(38,0.0001892237);
   VbbHcc_both_H_pt_stack_2->SetBinError(39,0.0001275402);
   VbbHcc_both_H_pt_stack_2->SetEntries(16360);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_pt_stack_1","ZHcc","F");

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
   H_pt_both_16->Modified();
   H_pt_both_16->cd();
   H_pt_both_16->SetSelected(H_pt_both_16);
}
