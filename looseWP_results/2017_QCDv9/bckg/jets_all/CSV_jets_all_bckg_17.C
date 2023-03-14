#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_bckg_17()
{
//=========Macro generated from canvas: CSV_jets_all_bckg_17/CSV_jets_all_bckg_17
//=========  (Fri Mar 10 12:14:02 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_bckg_17 = new TCanvas("CSV_jets_all_bckg_17", "CSV_jets_all_bckg_17",0,0,600,600);
   CSV_jets_all_bckg_17->SetHighLightColor(2);
   CSV_jets_all_bckg_17->Range(-0.2183529,-8.235266e+11,1.171633,6.039195e+12);
   CSV_jets_all_bckg_17->SetFillColor(0);
   CSV_jets_all_bckg_17->SetFillStyle(4000);
   CSV_jets_all_bckg_17->SetBorderMode(0);
   CSV_jets_all_bckg_17->SetBorderSize(2);
   CSV_jets_all_bckg_17->SetLeftMargin(0.15709);
   CSV_jets_all_bckg_17->SetRightMargin(0.1234783);
   CSV_jets_all_bckg_17->SetBottomMargin(0.12);
   CSV_jets_all_bckg_17->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_17->SetFrameBorderMode(0);
   CSV_jets_all_bckg_17->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.352923e+12);
   
   TH1F *st_stack_166 = new TH1F("st_stack_166","",20,0,1);
   st_stack_166->SetMinimum(0);
   st_stack_166->SetMaximum(5.352923e+12);
   st_stack_166->SetDirectory(0);
   st_stack_166->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_166->SetLineColor(ci);
   st_stack_166->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_166->GetXaxis()->SetRange(1,20);
   st_stack_166->GetXaxis()->SetLabelFont(42);
   st_stack_166->GetXaxis()->SetTitleOffset(1);
   st_stack_166->GetXaxis()->SetTitleFont(42);
   st_stack_166->GetYaxis()->SetTitle("Event/0.05");
   st_stack_166->GetYaxis()->SetLabelFont(42);
   st_stack_166->GetYaxis()->SetTitleSize(0.037);
   st_stack_166->GetYaxis()->SetTitleFont(42);
   st_stack_166->GetZaxis()->SetLabelFont(42);
   st_stack_166->GetZaxis()->SetTitleOffset(1);
   st_stack_166->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_166);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,4.442767e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,2.150012e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,2.939781e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,1.24709e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,7.490631e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,4.723668e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,3.457365e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,2.623812e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,1.998239e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,1.621383e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,1.376144e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,1.152326e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,9.778325e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,8.455852e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,7.624109e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,7.269753e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,6.79775e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,7.004188e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,8.758197e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,3.488867e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,2.643194e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,1.852768e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,6.833111e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,4.447261e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,3.44536e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,2.734086e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,2.338199e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,2.036113e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,1.775823e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,1.598512e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,1.471791e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,1.345935e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,1.239117e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,1.150534e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,1.091717e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,1.064498e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,1.02796e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,1.041936e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,1.162395e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,2.298112e+07);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(1.90024e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);
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
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,1.593624e+08);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,6.163631e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,1.22265e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,6410509);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,4520796);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,3491426);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,2957088);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,2608125);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,2303561);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,2146155);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,2073899);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,2004178);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,1926661);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,1959633);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,2047684);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,2291826);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,2508851);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,2968080);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,4449912);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,2.728075e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,3271.874);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,2007.288);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,896.6397);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,652.1184);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,548.0308);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,481.3899);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,442.7251);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,415.0321);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,389.5114);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,375.9012);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,369.9419);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,363.7442);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,356.546);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,359.5137);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,367.362);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,388.4671);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,406.2257);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,441.5404);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,540.303);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,1337.407);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(5.265984e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_all_bckg_17->Modified();
   CSV_jets_all_bckg_17->cd();
   CSV_jets_all_bckg_17->SetSelected(CSV_jets_all_bckg_17);
}
