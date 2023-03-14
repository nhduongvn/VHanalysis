#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_bckg_18()
{
//=========Macro generated from canvas: nC_medium_jets_bckg_18/nC_medium_jets_bckg_18
//=========  (Wed Mar  1 14:06:11 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_bckg_18 = new TCanvas("nC_medium_jets_bckg_18", "nC_medium_jets_bckg_18",0,0,600,600);
   nC_medium_jets_bckg_18->SetHighLightColor(2);
   nC_medium_jets_bckg_18->Range(-2.683529,-4.141588e+11,11.21633,3.037164e+12);
   nC_medium_jets_bckg_18->SetFillColor(0);
   nC_medium_jets_bckg_18->SetFillStyle(4000);
   nC_medium_jets_bckg_18->SetBorderMode(0);
   nC_medium_jets_bckg_18->SetBorderSize(2);
   nC_medium_jets_bckg_18->SetLeftMargin(0.15709);
   nC_medium_jets_bckg_18->SetRightMargin(0.1234783);
   nC_medium_jets_bckg_18->SetBottomMargin(0.12);
   nC_medium_jets_bckg_18->SetFrameFillStyle(1000);
   nC_medium_jets_bckg_18->SetFrameBorderMode(0);
   nC_medium_jets_bckg_18->SetFrameFillStyle(1000);
   nC_medium_jets_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.692032e+12);
   
   TH1F *st_stack_36 = new TH1F("st_stack_36","",10,-0.5,9.5);
   st_stack_36->SetMinimum(0);
   st_stack_36->SetMaximum(2.692032e+12);
   st_stack_36->SetDirectory(0);
   st_stack_36->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_36->SetLineColor(ci);
   st_stack_36->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_36->GetXaxis()->SetRange(1,10);
   st_stack_36->GetXaxis()->SetLabelFont(42);
   st_stack_36->GetXaxis()->SetTitleOffset(1);
   st_stack_36->GetXaxis()->SetTitleFont(42);
   st_stack_36->GetYaxis()->SetTitle("Events/1.0");
   st_stack_36->GetYaxis()->SetLabelFont(42);
   st_stack_36->GetYaxis()->SetTitleSize(0.037);
   st_stack_36->GetYaxis()->SetTitleFont(42);
   st_stack_36->GetZaxis()->SetLabelFont(42);
   st_stack_36->GetZaxis()->SetTitleOffset(1);
   st_stack_36->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_36);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,1.794666e+12);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,2.328682e+11);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,1.716907e+10);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,4.290541e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,1.62197e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,657694);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,25632.46);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(8,1142.12);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(9,163.5144);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(10,0.7273873);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,2.288391e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,7.650502e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,1.866712e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,1574385);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,215866);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,42330.01);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,1450.325);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(8,120.8658);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(9,63.84001);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(10,0.7273873);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(3.038349e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_2 = new TH1D("VbbHcc_jets_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,2.225929e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,2.063887e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,8461876);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,2004147);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,314989.6);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,36068.25);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,3341.189);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(8,267.1858);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(9,21.51297);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(10,1.52747);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(11,0.08059929);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,1359.581);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,1340.075);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,872.9909);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,429.3509);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,171.1047);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,57.86901);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,17.21146);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(8,4.790454);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(9,1.336957);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(10,0.3458424);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(11,0.08059929);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(7.957776e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_1","QCD","F");

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
   nC_medium_jets_bckg_18->Modified();
   nC_medium_jets_bckg_18->cd();
   nC_medium_jets_bckg_18->SetSelected(nC_medium_jets_bckg_18);
}
