#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_18_logY()
{
//=========Macro generated from canvas: nC_medium_jets_all_18/nC_medium_jets_all_18
//=========  (Mon Dec 19 11:02:06 2022) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_18 = new TCanvas("nC_medium_jets_all_18", "nC_medium_jets_all_18",0,0,600,600);
   nC_medium_jets_all_18->SetHighLightColor(2);
   nC_medium_jets_all_18->Range(-2.683529,2.79841,11.21633,15.59672);
   nC_medium_jets_all_18->SetFillColor(0);
   nC_medium_jets_all_18->SetFillStyle(4000);
   nC_medium_jets_all_18->SetBorderMode(0);
   nC_medium_jets_all_18->SetBorderSize(2);
   nC_medium_jets_all_18->SetLogy();
   nC_medium_jets_all_18->SetLeftMargin(0.15709);
   nC_medium_jets_all_18->SetRightMargin(0.1234783);
   nC_medium_jets_all_18->SetBottomMargin(0.12);
   nC_medium_jets_all_18->SetFrameFillStyle(1000);
   nC_medium_jets_all_18->SetFrameBorderMode(0);
   nC_medium_jets_all_18->SetFrameFillStyle(1000);
   nC_medium_jets_all_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(116668.5);
   st->SetMaximum(7.51119e+13);
   
   TH1F *st_stack_127 = new TH1F("st_stack_127","",10,-0.5,9.5);
   st_stack_127->SetMinimum(21587.78);
   st_stack_127->SetMaximum(2.074404e+14);
   st_stack_127->SetDirectory(0);
   st_stack_127->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_127->SetLineColor(ci);
   st_stack_127->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_127->GetXaxis()->SetRange(1,10);
   st_stack_127->GetXaxis()->SetLabelFont(42);
   st_stack_127->GetXaxis()->SetTitleOffset(1);
   st_stack_127->GetXaxis()->SetTitleFont(42);
   st_stack_127->GetYaxis()->SetTitle("Events/1.0");
   st_stack_127->GetYaxis()->SetLabelFont(42);
   st_stack_127->GetYaxis()->SetTitleSize(0.037);
   st_stack_127->GetYaxis()->SetTitleFont(42);
   st_stack_127->GetZaxis()->SetLabelFont(42);
   st_stack_127->GetZaxis()->SetTitleOffset(1);
   st_stack_127->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_127);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,6.629568e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,7.511059e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,4.138466e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,1.554245e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,4.640875e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,1.198142e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,2.762638e+09);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,5.938792e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,1.166066e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(10,2.176615e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(11,4325838);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,1.434032e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,1.459802e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,1.03483e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,6.055373e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,3.190332e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,1.57096e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,7366765);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,3359026);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,1458379);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(10,620602.3);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(11,268228.9);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(3.026752e+08);

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
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,5453457);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,1.312081e+07);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,1.499119e+07);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,1.091125e+07);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,5747515);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,2368638);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,807956.9);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,237502.4);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(9,61951.94);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(10,14763.55);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(11,4067.59);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,694.8623);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,1084.747);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,1159.59);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,983.0159);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,705.8752);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,447.0049);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,257.64);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,137.6729);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(9,69.28635);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(10,33.35928);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(11,17.25497);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(7.771882e+08);

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_all_18->Modified();
   nC_medium_jets_all_18->cd();
   nC_medium_jets_all_18->SetSelected(nC_medium_jets_all_18);
}
