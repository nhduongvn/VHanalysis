#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenB_bckg_18()
{
//=========Macro generated from canvas: GenJet_all_nGenB_bckg_18/GenJet_all_nGenB_bckg_18
//=========  (Thu Mar  9 15:52:36 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenB_bckg_18 = new TCanvas("GenJet_all_nGenB_bckg_18", "GenJet_all_nGenB_bckg_18",0,0,600,600);
   GenJet_all_nGenB_bckg_18->SetHighLightColor(2);
   GenJet_all_nGenB_bckg_18->Range(-4.867058,-3.493984e+11,22.93266,2.562255e+12);
   GenJet_all_nGenB_bckg_18->SetFillColor(0);
   GenJet_all_nGenB_bckg_18->SetFillStyle(4000);
   GenJet_all_nGenB_bckg_18->SetBorderMode(0);
   GenJet_all_nGenB_bckg_18->SetBorderSize(2);
   GenJet_all_nGenB_bckg_18->SetLeftMargin(0.15709);
   GenJet_all_nGenB_bckg_18->SetRightMargin(0.1234783);
   GenJet_all_nGenB_bckg_18->SetBottomMargin(0.12);
   GenJet_all_nGenB_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenB_bckg_18->SetFrameBorderMode(0);
   GenJet_all_nGenB_bckg_18->SetFrameFillStyle(1000);
   GenJet_all_nGenB_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.27109e+12);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",20,-0.5,19.5);
   st_stack_18->SetMinimum(0);
   st_stack_18->SetMaximum(2.27109e+12);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetTitleOffset(1);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Event/1.0");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *GenJet_all_nGenB_stack_1 = new TH1D("GenJet_all_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenB_stack_1->SetBinContent(1,1.885004e+12);
   GenJet_all_nGenB_stack_1->SetBinContent(2,9.832615e+10);
   GenJet_all_nGenB_stack_1->SetBinContent(3,5.811778e+10);
   GenJet_all_nGenB_stack_1->SetBinContent(4,3.193119e+09);
   GenJet_all_nGenB_stack_1->SetBinContent(5,4.735942e+08);
   GenJet_all_nGenB_stack_1->SetBinContent(6,3.063124e+07);
   GenJet_all_nGenB_stack_1->SetBinContent(7,2336159);
   GenJet_all_nGenB_stack_1->SetBinContent(8,185939.2);
   GenJet_all_nGenB_stack_1->SetBinContent(9,3770.967);
   GenJet_all_nGenB_stack_1->SetBinContent(10,19.02972);
   GenJet_all_nGenB_stack_1->SetBinError(1,2.306467e+08);
   GenJet_all_nGenB_stack_1->SetBinError(2,5.244114e+07);
   GenJet_all_nGenB_stack_1->SetBinError(3,3.998807e+07);
   GenJet_all_nGenB_stack_1->SetBinError(4,9137432);
   GenJet_all_nGenB_stack_1->SetBinError(5,3381531);
   GenJet_all_nGenB_stack_1->SetBinError(6,804314.1);
   GenJet_all_nGenB_stack_1->SetBinError(7,213763.9);
   GenJet_all_nGenB_stack_1->SetBinError(8,59982.68);
   GenJet_all_nGenB_stack_1->SetBinError(9,2296.687);
   GenJet_all_nGenB_stack_1->SetBinError(10,14.32723);
   GenJet_all_nGenB_stack_1->SetEntries(3.050092e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenB_stack_1->SetFillColor(ci);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenB_stack_1,"");
   
   TH1D *GenJet_all_nGenB_stack_2 = new TH1D("GenJet_all_nGenB_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenB_stack_2->SetBinContent(1,64132.99);
   GenJet_all_nGenB_stack_2->SetBinContent(2,4165808);
   GenJet_all_nGenB_stack_2->SetBinContent(3,4.490764e+07);
   GenJet_all_nGenB_stack_2->SetBinContent(4,3844193);
   GenJet_all_nGenB_stack_2->SetBinContent(5,663418);
   GenJet_all_nGenB_stack_2->SetBinContent(6,65526.77);
   GenJet_all_nGenB_stack_2->SetBinContent(7,7118.885);
   GenJet_all_nGenB_stack_2->SetBinContent(8,668.7086);
   GenJet_all_nGenB_stack_2->SetBinContent(9,60.94107);
   GenJet_all_nGenB_stack_2->SetBinContent(10,4.362034);
   GenJet_all_nGenB_stack_2->SetBinContent(11,0.5758964);
   GenJet_all_nGenB_stack_2->SetBinError(1,70.29788);
   GenJet_all_nGenB_stack_2->SetBinError(2,570.5424);
   GenJet_all_nGenB_stack_2->SetBinError(3,1871.016);
   GenJet_all_nGenB_stack_2->SetBinError(4,549.1919);
   GenJet_all_nGenB_stack_2->SetBinError(5,229.1244);
   GenJet_all_nGenB_stack_2->SetBinError(6,73.02184);
   GenJet_all_nGenB_stack_2->SetBinError(7,24.06022);
   GenJet_all_nGenB_stack_2->SetBinError(8,7.449648);
   GenJet_all_nGenB_stack_2->SetBinError(9,2.114394);
   GenJet_all_nGenB_stack_2->SetBinError(10,0.5482555);
   GenJet_all_nGenB_stack_2->SetBinError(11,0.1957069);
   GenJet_all_nGenB_stack_2->SetEntries(8.848938e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenB_stack_2->SetFillColor(ci);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenB_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_all_nGenB_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenB_bckg_18->Modified();
   GenJet_all_nGenB_bckg_18->cd();
   GenJet_all_nGenB_bckg_18->SetSelected(GenJet_all_nGenB_bckg_18);
}
