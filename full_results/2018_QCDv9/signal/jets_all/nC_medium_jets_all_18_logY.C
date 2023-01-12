#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_18_logY()
{
//=========Macro generated from canvas: nC_medium_jets_all_18/nC_medium_jets_all_18
//=========  (Mon Dec 19 11:03:35 2022) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_18 = new TCanvas("nC_medium_jets_all_18", "nC_medium_jets_all_18",0,0,600,600);
   nC_medium_jets_all_18->SetHighLightColor(2);
   nC_medium_jets_all_18->Range(-2.683529,-0.1061938,11.21633,5.385357);
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
   st->SetMinimum(10);
   st->SetMaximum(39869.52);
   
   TH1F *st_stack_127 = new TH1F("st_stack_127","",10,-0.5,9.5);
   st_stack_127->SetMinimum(3.57102);
   st_stack_127->SetMaximum(68580.69);
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
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,142.3227);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,353.2402);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,344.9449);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,170.3293);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,46.12149);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,6.730611);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,0.4430936);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,0.01653031);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,0.6361899);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,0.9906928);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,0.9754714);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,0.6791196);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,0.352285);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,0.1342447);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,0.03323599);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,0.005976335);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(486910);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,15.18308);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,45.45506);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,50.5284);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,27.2112);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,7.878658);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,1.148076);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,0.0852356);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,0.003384533);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,0.07667417);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,0.1326904);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,0.1398331);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,0.1020225);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,0.05494186);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,0.02092233);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,0.005692846);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,0.001053112);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(428940);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_1","ZHcc","F");

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
   nC_medium_jets_all_18->Modified();
   nC_medium_jets_all_18->cd();
   nC_medium_jets_all_18->SetSelected(nC_medium_jets_all_18);
}
