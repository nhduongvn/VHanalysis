#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_bckg_18_logY()
{
//=========Macro generated from canvas: nC_medium_jets_all_bckg_18/nC_medium_jets_all_bckg_18
//=========  (Thu Mar  9 13:30:14 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_bckg_18 = new TCanvas("nC_medium_jets_all_bckg_18", "nC_medium_jets_all_bckg_18",0,0,600,600);
   nC_medium_jets_all_bckg_18->SetHighLightColor(2);
   nC_medium_jets_all_bckg_18->Range(-2.683529,-1.699489,11.21633,14.03405);
   nC_medium_jets_all_bckg_18->SetFillColor(0);
   nC_medium_jets_all_bckg_18->SetFillStyle(4000);
   nC_medium_jets_all_bckg_18->SetBorderMode(0);
   nC_medium_jets_all_bckg_18->SetBorderSize(2);
   nC_medium_jets_all_bckg_18->SetLogy();
   nC_medium_jets_all_bckg_18->SetLeftMargin(0.15709);
   nC_medium_jets_all_bckg_18->SetRightMargin(0.1234783);
   nC_medium_jets_all_bckg_18->SetBottomMargin(0.12);
   nC_medium_jets_all_bckg_18->SetFrameFillStyle(1000);
   nC_medium_jets_all_bckg_18->SetFrameBorderMode(0);
   nC_medium_jets_all_bckg_18->SetFrameFillStyle(1000);
   nC_medium_jets_all_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(9.051473e+11);
   
   TH1F *st_stack_192 = new TH1F("st_stack_192","",10,-0.5,9.5);
   st_stack_192->SetMinimum(1.543601);
   st_stack_192->SetMaximum(2.888636e+12);
   st_stack_192->SetDirectory(0);
   st_stack_192->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_192->SetLineColor(ci);
   st_stack_192->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_192->GetXaxis()->SetRange(1,10);
   st_stack_192->GetXaxis()->SetLabelFont(42);
   st_stack_192->GetXaxis()->SetTitleOffset(1);
   st_stack_192->GetXaxis()->SetTitleFont(42);
   st_stack_192->GetYaxis()->SetTitle("Event/1.0");
   st_stack_192->GetYaxis()->SetLabelFont(42);
   st_stack_192->GetYaxis()->SetTitleSize(0.037);
   st_stack_192->GetYaxis()->SetTitleFont(42);
   st_stack_192->GetZaxis()->SetLabelFont(42);
   st_stack_192->GetZaxis()->SetTitleOffset(1);
   st_stack_192->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_192);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,6.664976e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,7.512595e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,4.122038e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,1.541383e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,4.585879e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,1.176849e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,2.714939e+09);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,5.688808e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,1.121778e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(10,2.110422e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(11,4712627);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,1.436731e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,1.462617e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,1.032343e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,6.027432e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,3.171676e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,1.564439e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,7329976);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,3307070);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,1432711);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(10,609770.6);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(11,284279.6);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(3.050092e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_2 = new TH1D("VbbHcc_jets_all_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,5124991);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,1.276819e+07);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,1.500306e+07);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,1.116123e+07);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,5974758);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,2490828);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,856081.3);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,252982.4);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(9,66267.19);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(10,15794.01);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(11,4387.026);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,632.0751);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,1003.207);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,1087.808);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,933.5859);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,676.6802);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,431.4754);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,249.8603);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,134.0363);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(9,67.67614);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(10,32.55136);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(11,16.94102);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(8.848938e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_all_bckg_18->Modified();
   nC_medium_jets_all_bckg_18->cd();
   nC_medium_jets_all_bckg_18->SetSelected(nC_medium_jets_all_bckg_18);
}
