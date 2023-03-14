#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenB_all__bckg_18_logY()
{
//=========Macro generated from canvas: nGenB_all__bckg_18/nGenB_all__bckg_18
//=========  (Mon Mar  6 10:58:23 2023) by ROOT version 6.26/06
   TCanvas *nGenB_all__bckg_18 = new TCanvas("nGenB_all__bckg_18", "nGenB_all__bckg_18",0,0,600,600);
   nGenB_all__bckg_18->SetHighLightColor(2);
   nGenB_all__bckg_18->Range(-3.775293,-1.761997,17.0745,14.40452);
   nGenB_all__bckg_18->SetFillColor(0);
   nGenB_all__bckg_18->SetFillStyle(4000);
   nGenB_all__bckg_18->SetBorderMode(0);
   nGenB_all__bckg_18->SetBorderSize(2);
   nGenB_all__bckg_18->SetLogy();
   nGenB_all__bckg_18->SetLeftMargin(0.15709);
   nGenB_all__bckg_18->SetRightMargin(0.1234783);
   nGenB_all__bckg_18->SetBottomMargin(0.12);
   nGenB_all__bckg_18->SetFrameFillStyle(1000);
   nGenB_all__bckg_18->SetFrameBorderMode(0);
   nGenB_all__bckg_18->SetFrameFillStyle(1000);
   nGenB_all__bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",15,-0.5,14.5);
   st_stack_18->SetMinimum(1.506556);
   st_stack_18->SetMaximum(6.135802e+12);
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
   st_stack_18->GetYaxis()->SetTitle("Events/1.0");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *nGenB_all_stack_1 = new TH1D("nGenB_all_stack_1","",15,-0.5,14.5);
   nGenB_all_stack_1->SetBinContent(1,1.885003e+12);
   nGenB_all_stack_1->SetBinContent(2,9.832375e+10);
   nGenB_all_stack_1->SetBinContent(3,5.812178e+10);
   nGenB_all_stack_1->SetBinContent(4,3.193856e+09);
   nGenB_all_stack_1->SetBinContent(5,4.744997e+08);
   nGenB_all_stack_1->SetBinContent(6,3.061086e+07);
   nGenB_all_stack_1->SetBinContent(7,2364045);
   nGenB_all_stack_1->SetBinContent(8,187986.5);
   nGenB_all_stack_1->SetBinContent(9,3703.462);
   nGenB_all_stack_1->SetBinContent(10,21.03338);
   nGenB_all_stack_1->SetBinError(1,2.331836e+08);
   nGenB_all_stack_1->SetBinError(2,5.30007e+07);
   nGenB_all_stack_1->SetBinError(3,4.04379e+07);
   nGenB_all_stack_1->SetBinError(4,9223327);
   nGenB_all_stack_1->SetBinError(5,3425493);
   nGenB_all_stack_1->SetBinError(6,812878.3);
   nGenB_all_stack_1->SetBinError(7,217176);
   nGenB_all_stack_1->SetBinError(8,61249.18);
   nGenB_all_stack_1->SetBinError(9,2240.575);
   nGenB_all_stack_1->SetBinError(10,15.83576);
   nGenB_all_stack_1->SetEntries(3.035979e+08);

   ci = TColor::GetColor("#ff6600");
   nGenB_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenB_all_stack_1->SetLineColor(ci);
   nGenB_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenB_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenB_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenB_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenB_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenB_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenB_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenB_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenB_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenB_all_stack_1,"");
   
   TH1D *nGenB_all_stack_2 = new TH1D("nGenB_all_stack_2","",15,-0.5,14.5);
   nGenB_all_stack_2->SetBinContent(1,64128.69);
   nGenB_all_stack_2->SetBinContent(2,4165743);
   nGenB_all_stack_2->SetBinContent(3,4.490788e+07);
   nGenB_all_stack_2->SetBinContent(4,3844201);
   nGenB_all_stack_2->SetBinContent(5,663420.1);
   nGenB_all_stack_2->SetBinContent(6,65522.66);
   nGenB_all_stack_2->SetBinContent(7,7117.682);
   nGenB_all_stack_2->SetBinContent(8,669.0596);
   nGenB_all_stack_2->SetBinContent(9,60.74109);
   nGenB_all_stack_2->SetBinContent(10,4.321931);
   nGenB_all_stack_2->SetBinContent(11,0.5693123);
   nGenB_all_stack_2->SetBinError(1,69.91679);
   nGenB_all_stack_2->SetBinError(2,567.6855);
   nGenB_all_stack_2->SetBinError(3,1861.766);
   nGenB_all_stack_2->SetBinError(4,546.3908);
   nGenB_all_stack_2->SetBinError(5,227.9405);
   nGenB_all_stack_2->SetBinError(6,72.65642);
   nGenB_all_stack_2->SetBinError(7,23.92194);
   nGenB_all_stack_2->SetBinError(8,7.4102);
   nGenB_all_stack_2->SetBinError(9,2.098222);
   nGenB_all_stack_2->SetBinError(10,0.5422794);
   nGenB_all_stack_2->SetBinError(11,0.1932019);
   nGenB_all_stack_2->SetEntries(8.905796e+08);

   ci = TColor::GetColor("#990099");
   nGenB_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenB_all_stack_2->SetLineColor(ci);
   nGenB_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenB_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenB_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenB_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenB_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenB_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenB_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenB_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenB_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenB_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenB_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("nGenB_all_stack_1","QCD","F");

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
   nGenB_all__bckg_18->Modified();
   nGenB_all__bckg_18->cd();
   nGenB_all__bckg_18->SetSelected(nGenB_all__bckg_18);
}
