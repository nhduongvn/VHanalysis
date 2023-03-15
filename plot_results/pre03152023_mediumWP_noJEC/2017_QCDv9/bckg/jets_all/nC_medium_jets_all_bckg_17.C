#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_bckg_17()
{
//=========Macro generated from canvas: nC_medium_jets_all_bckg_17/nC_medium_jets_all_bckg_17
//=========  (Thu Mar  9 13:30:53 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_bckg_17 = new TCanvas("nC_medium_jets_all_bckg_17", "nC_medium_jets_all_bckg_17",0,0,600,600);
   nC_medium_jets_all_bckg_17->SetHighLightColor(2);
   nC_medium_jets_all_bckg_17->Range(-2.683529,-9.375529e+10,11.21633,6.875388e+11);
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
   st->SetMaximum(6.094094e+11);
   
   TH1F *st_stack_190 = new TH1F("st_stack_190","",10,-0.5,9.5);
   st_stack_190->SetMinimum(0);
   st_stack_190->SetMaximum(6.094094e+11);
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
   st_stack_190->GetYaxis()->SetTitle("Event/1.0");
   st_stack_190->GetYaxis()->SetLabelFont(42);
   st_stack_190->GetYaxis()->SetTitleSize(0.037);
   st_stack_190->GetYaxis()->SetTitleFont(42);
   st_stack_190->GetZaxis()->SetLabelFont(42);
   st_stack_190->GetZaxis()->SetTitleOffset(1);
   st_stack_190->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_190);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,4.303046e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,5.058016e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,2.955348e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,1.211444e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,4.073499e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,1.217012e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,3.326708e+09);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,8.548346e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,2.100323e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(10,4.753005e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(11,1.337122e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,8.398399e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,9.037739e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,6.851291e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,4.352388e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,2.507826e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,1.364839e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,7104321);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,3592783);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,1775920);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(10,843326.7);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(11,444919.2);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(3.060973e+08);

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
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,3239385);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,8220844);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,9912817);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,7641382);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,4296955);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,1912847);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,715674.4);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,234855.4);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(9,69738.36);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(10,19169.73);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(11,6493.613);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,440.6266);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,720.4092);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,808.1769);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,721.3899);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,547.4732);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,368.2732);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,226.4961);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,130.2313);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(9,71.152);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(10,37.36642);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(11,21.76891);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(6.227592e+08);

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_all_bckg_17->Modified();
   nC_medium_jets_all_bckg_17->cd();
   nC_medium_jets_all_bckg_17->SetSelected(nC_medium_jets_all_bckg_17);
}
