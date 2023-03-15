#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_16()
{
//=========Macro generated from canvas: CSV_jets_all_16/CSV_jets_all_16
//=========  (Mon Dec 19 11:02:48 2022) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_16 = new TCanvas("CSV_jets_all_16", "CSV_jets_all_16",0,0,600,600);
   CSV_jets_all_16->SetHighLightColor(2);
   CSV_jets_all_16->Range(-0.2183529,-7.601622e+11,1.171633,5.574523e+12);
   CSV_jets_all_16->SetFillColor(0);
   CSV_jets_all_16->SetFillStyle(4000);
   CSV_jets_all_16->SetBorderMode(0);
   CSV_jets_all_16->SetBorderSize(2);
   CSV_jets_all_16->SetLeftMargin(0.15709);
   CSV_jets_all_16->SetRightMargin(0.1234783);
   CSV_jets_all_16->SetBottomMargin(0.12);
   CSV_jets_all_16->SetFrameFillStyle(1000);
   CSV_jets_all_16->SetFrameBorderMode(0);
   CSV_jets_all_16->SetFrameFillStyle(1000);
   CSV_jets_all_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.941054e+12);
   
   TH1F *st_stack_109 = new TH1F("st_stack_109","",20,0,1);
   st_stack_109->SetMinimum(0);
   st_stack_109->SetMaximum(4.941054e+12);
   st_stack_109->SetDirectory(0);
   st_stack_109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_109->SetLineColor(ci);
   st_stack_109->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_109->GetXaxis()->SetRange(1,20);
   st_stack_109->GetXaxis()->SetLabelFont(42);
   st_stack_109->GetXaxis()->SetTitleOffset(1);
   st_stack_109->GetXaxis()->SetTitleFont(42);
   st_stack_109->GetYaxis()->SetTitle("Events/0.05");
   st_stack_109->GetYaxis()->SetLabelFont(42);
   st_stack_109->GetYaxis()->SetTitleSize(0.037);
   st_stack_109->GetYaxis()->SetTitleFont(42);
   st_stack_109->GetZaxis()->SetLabelFont(42);
   st_stack_109->GetZaxis()->SetTitleOffset(1);
   st_stack_109->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_109);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,3.293909e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,1.312277e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,1.740089e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,7.499633e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,4.498582e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,2.820404e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,2.035513e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,1.508731e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,1.130906e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,9.064432e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,7.58498e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,6.285662e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,5.353704e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,4.719559e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,4.331084e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,4.271308e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,4.11716e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,4.493122e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,5.846889e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,2.317317e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,2.386043e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,1.51381e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,5.49117e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,3.603681e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,2.791479e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,2.209477e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,1.876753e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,1.614992e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,1.39736e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,1.250295e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,1.142997e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,1.039574e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,9587245);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,8994782);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,8607261);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,8539326);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,8375768);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,8739769);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,9953830);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,1.965257e+07);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(1.392964e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CSV_stack_2 = new TH1D("VbbHcc_jets_all_CSV_stack_2","",20,0,1);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,1.274076e+08);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,4.266353e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,8855096);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,4743385);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,3363909);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,2607619);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,2200016);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,1936896);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,1729405);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,1613040);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,1542971);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,1477183);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,1437934);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,1458044);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,1525737);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,1707855);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,1865174);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,2267910);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,3413280);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,1.880428e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,3070.305);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,1747.321);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,798.1855);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,586.9285);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,494.7961);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,435.4412);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,399.7936);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,374.4532);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,353.1709);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,340.8705);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,333.9797);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,327.0526);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,322.6696);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,324.8918);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,332.2271);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,351.3727);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,366.9842);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,404.4058);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,495.9496);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,1165.24);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(3.578258e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_1","QCD","F");

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
   CSV_jets_all_16->Modified();
   CSV_jets_all_16->cd();
   CSV_jets_all_16->SetSelected(CSV_jets_all_16);
}
