#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_bckg_17()
{
//=========Macro generated from canvas: nC_medium_jets_all_bckg_17/nC_medium_jets_all_bckg_17
//=========  (Wed Mar  1 14:06:15 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_bckg_17 = new TCanvas("nC_medium_jets_all_bckg_17", "nC_medium_jets_all_bckg_17",0,0,600,600);
   nC_medium_jets_all_bckg_17->SetHighLightColor(2);
   nC_medium_jets_all_bckg_17->Range(-2.683529,-1.167275e+11,11.21633,8.560016e+11);
   nC_medium_jets_all_bckg_17->SetFillColor(0);
   nC_medium_jets_all_bckg_17->SetFillStyle(4000);
   nC_medium_jets_all_bckg_17->SetBorderMode(0);
   nC_medium_jets_all_bckg_17->SetBorderSize(2);
   nC_medium_jets_all_bckg_17->SetLeftMargin(0.15709);
   nC_medium_jets_all_bckg_17->SetRightMargin(0.1234783);
   nC_medium_jets_all_bckg_17->SetBottomMargin(0.12);
   nC_medium_jets_all_bckg_17->SetFrameFillStyle(1000);
   nC_medium_jets_all_bckg_17->SetFrameBorderMode(0);
   nC_medium_jets_all_bckg_17->SetFrameFillStyle(1000);
   nC_medium_jets_all_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(7.587287e+11);
   
   TH1F *st_stack_190 = new TH1F("st_stack_190","",10,-0.5,9.5);
   st_stack_190->SetMinimum(0);
   st_stack_190->SetMaximum(7.587287e+11);
   st_stack_190->SetDirectory(0);
   st_stack_190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_190->SetLineColor(ci);
   st_stack_190->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_190->GetXaxis()->SetRange(1,10);
   st_stack_190->GetXaxis()->SetLabelFont(42);
   st_stack_190->GetXaxis()->SetTitleOffset(1);
   st_stack_190->GetXaxis()->SetTitleFont(42);
   st_stack_190->GetYaxis()->SetTitle("Events/1.0");
   st_stack_190->GetYaxis()->SetLabelFont(42);
   st_stack_190->GetYaxis()->SetTitleSize(0.037);
   st_stack_190->GetYaxis()->SetTitleFont(42);
   st_stack_190->GetZaxis()->SetLabelFont(42);
   st_stack_190->GetZaxis()->SetTitleOffset(1);
   st_stack_190->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_190);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,4.302918e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,5.058109e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,2.955446e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,1.211434e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,4.073235e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,1.216938e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,3.325167e+09);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,8.557694e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,2.100314e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(10,4.755322e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(11,1.343319e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,8.382703e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,9.021138e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,6.838729e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,4.344359e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,2.503135e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,1.36225e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,7089183);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,3588693);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,1773016);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(10,841876);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(11,445121.3);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(3.054959e+08);

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
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,3239435);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,8220923);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,9912754);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,7641290);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,4296945);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,1912847);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,715690.9);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,234837.8);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(9,69742.19);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(10,19177.06);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(11,6494.964);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,437.5699);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,715.3681);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,802.4479);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,716.2054);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,543.4982);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,365.5779);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,224.8303);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,129.2643);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(9,70.62869);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(10,37.09895);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(11,21.60963);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(6.313347e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_all_bckg_17->Modified();
   nC_medium_jets_all_bckg_17->cd();
   nC_medium_jets_all_bckg_17->SetSelected(nC_medium_jets_all_bckg_17);
}
