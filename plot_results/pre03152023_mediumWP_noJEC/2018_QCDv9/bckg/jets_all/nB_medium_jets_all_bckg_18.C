#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_bckg_18()
{
//=========Macro generated from canvas: nB_medium_jets_all_bckg_18/nB_medium_jets_all_bckg_18
//=========  (Thu Mar  9 13:30:52 2023) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all_bckg_18 = new TCanvas("nB_medium_jets_all_bckg_18", "nB_medium_jets_all_bckg_18",0,0,600,600);
   nB_medium_jets_all_bckg_18->SetHighLightColor(2);
   nB_medium_jets_all_bckg_18->Range(-2.683529,-3.26974e+11,11.21633,2.397809e+12);
   nB_medium_jets_all_bckg_18->SetFillColor(0);
   nB_medium_jets_all_bckg_18->SetFillStyle(4000);
   nB_medium_jets_all_bckg_18->SetBorderMode(0);
   nB_medium_jets_all_bckg_18->SetBorderSize(2);
   nB_medium_jets_all_bckg_18->SetLeftMargin(0.15709);
   nB_medium_jets_all_bckg_18->SetRightMargin(0.1234783);
   nB_medium_jets_all_bckg_18->SetBottomMargin(0.12);
   nB_medium_jets_all_bckg_18->SetFrameFillStyle(1000);
   nB_medium_jets_all_bckg_18->SetFrameBorderMode(0);
   nB_medium_jets_all_bckg_18->SetFrameFillStyle(1000);
   nB_medium_jets_all_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.125331e+12);
   
   TH1F *st_stack_186 = new TH1F("st_stack_186","",10,-0.5,9.5);
   st_stack_186->SetMinimum(0);
   st_stack_186->SetMaximum(2.125331e+12);
   st_stack_186->SetDirectory(0);
   st_stack_186->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_186->SetLineColor(ci);
   st_stack_186->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_186->GetXaxis()->SetRange(1,10);
   st_stack_186->GetXaxis()->SetLabelFont(42);
   st_stack_186->GetXaxis()->SetTitleOffset(1);
   st_stack_186->GetXaxis()->SetTitleFont(42);
   st_stack_186->GetYaxis()->SetTitle("Event/1.0");
   st_stack_186->GetYaxis()->SetLabelFont(42);
   st_stack_186->GetYaxis()->SetTitleSize(0.037);
   st_stack_186->GetYaxis()->SetTitleFont(42);
   st_stack_186->GetZaxis()->SetLabelFont(42);
   st_stack_186->GetZaxis()->SetTitleOffset(1);
   st_stack_186->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_186);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,1.764021e+12);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,2.472945e+11);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,3.155775e+10);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,2.147259e+09);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,1.223499e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,5188260);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(7,228038.2);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(8,29497.58);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(9,440.6586);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,2.239389e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,8.142968e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,2.850536e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,6934407);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,1568757);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,294771);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(7,59626.42);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(8,24332.62);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(9,367.4716);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(3.050092e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_2 = new TH1D("VbbHcc_jets_all_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,3842625);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,1.854811e+07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,2.476563e+07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,5793622);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,700420.4);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,62698.18);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,5011.706);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(8,412.5492);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(9,39.48749);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(10,5.65892);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(11,0.7507508);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,544.5723);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,1201.538);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,1392.28);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,673.1445);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,232.759);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,69.36564);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,19.90161);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(8,5.682397);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(9,1.762372);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(10,0.6799047);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(11,0.2416119);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(8.848938e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_1","QCD","F");

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
   nB_medium_jets_all_bckg_18->Modified();
   nB_medium_jets_all_bckg_18->cd();
   nB_medium_jets_all_bckg_18->SetSelected(nB_medium_jets_all_bckg_18);
}
