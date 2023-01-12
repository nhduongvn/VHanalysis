#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_18_logY()
{
//=========Macro generated from canvas: nC_medium_jets_18/nC_medium_jets_18
//=========  (Mon Dec 19 11:03:32 2022) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_18 = new TCanvas("nC_medium_jets_18", "nC_medium_jets_18",0,0,600,600);
   nC_medium_jets_18->SetHighLightColor(2);
   nC_medium_jets_18->Range(-2.683529,-0.1271822,11.21633,5.485506);
   nC_medium_jets_18->SetFillColor(0);
   nC_medium_jets_18->SetFillStyle(4000);
   nC_medium_jets_18->SetBorderMode(0);
   nC_medium_jets_18->SetBorderSize(2);
   nC_medium_jets_18->SetLogy();
   nC_medium_jets_18->SetLeftMargin(0.15709);
   nC_medium_jets_18->SetRightMargin(0.1234783);
   nC_medium_jets_18->SetBottomMargin(0.12);
   nC_medium_jets_18->SetFrameFillStyle(1000);
   nC_medium_jets_18->SetFrameBorderMode(0);
   nC_medium_jets_18->SetFrameFillStyle(1000);
   nC_medium_jets_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(48357.57);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",10,-0.5,9.5);
   st_stack_23->SetMinimum(3.518361);
   st_stack_23->SetMaximum(83991.92);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_23->GetXaxis()->SetRange(1,10);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetTitleOffset(1);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/1.0");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetTitleSize(0.037);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetTitleOffset(1);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,306.5621);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,426.9603);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,249.9915);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,70.00421);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,9.966134);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,0.6441433);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,0.01955877);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(8,0.0008416796);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,0.9335537);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,1.084444);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,0.8243108);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,0.4327681);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,0.1620113);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,0.04022301);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,0.006308294);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(8,0.0008416796);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(486910);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,25.37751);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,56.61545);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,45.22029);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,16.85192);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,3.178134);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,0.2396858);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,0.01011747);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,0.09895818);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,0.1481291);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,0.132218);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,0.08016861);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,0.03465472);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,0.009434207);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,0.001975692);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(428940);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   nC_medium_jets_18->Modified();
   nC_medium_jets_18->cd();
   nC_medium_jets_18->SetSelected(nC_medium_jets_18);
}
