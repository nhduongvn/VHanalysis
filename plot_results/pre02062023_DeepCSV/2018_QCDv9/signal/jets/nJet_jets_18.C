#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_18()
{
//=========Macro generated from canvas: nJet_jets_18/nJet_jets_18
//=========  (Mon Dec 19 11:03:46 2022) by ROOT version 6.26/06
   TCanvas *nJet_jets_18 = new TCanvas("nJet_jets_18", "nJet_jets_18",0,0,600,600);
   nJet_jets_18->SetHighLightColor(2);
   nJet_jets_18->Range(-3.556941,-80.58423,15.90286,590.951);
   nJet_jets_18->SetFillColor(0);
   nJet_jets_18->SetFillStyle(4000);
   nJet_jets_18->SetBorderMode(0);
   nJet_jets_18->SetBorderSize(2);
   nJet_jets_18->SetLeftMargin(0.15709);
   nJet_jets_18->SetRightMargin(0.1234783);
   nJet_jets_18->SetBottomMargin(0.12);
   nJet_jets_18->SetFrameFillStyle(1000);
   nJet_jets_18->SetFrameBorderMode(0);
   nJet_jets_18->SetFrameFillStyle(1000);
   nJet_jets_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(523.7975);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",14,-0.5,13.5);
   st_stack_3->SetMinimum(0);
   st_stack_3->SetMaximum(523.7975);
   st_stack_3->SetDirectory(0);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_3->GetXaxis()->SetRange(1,14);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetTitleOffset(1);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/1.0");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetTitleSize(0.037);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,41.59916);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,108.0993);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,227.5818);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,314.2101);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,238.258);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,92.35098);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,29.8413);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,8.691891);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,2.600024);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,0.6923869);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,0.1664444);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,0.04210377);
   VbbHcc_jets_nJet_stack_1->SetBinContent(13,0.01290909);
   VbbHcc_jets_nJet_stack_1->SetBinContent(15,0.002353708);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,0.3593267);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,0.5634886);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,0.8006888);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,0.9290023);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,0.8006677);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,0.4920856);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,0.2770865);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,0.1497329);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,0.08171995);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,0.04208566);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,0.02094227);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,0.01040311);
   VbbHcc_jets_nJet_stack_1->SetBinError(13,0.00508789);
   VbbHcc_jets_nJet_stack_1->SetBinError(15,0.002353708);
   VbbHcc_jets_nJet_stack_1->SetEntries(486910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_stack_2 = new TH1D("VbbHcc_jets_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,0.2905647);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,2.608696);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,13.20846);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,34.98821);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,47.05679);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,30.54149);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,12.96713);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,4.233898);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,1.200713);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,0.3126636);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,0.06748735);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,0.0133756);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,0.00324505);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,0.0003708078);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,0.01051078);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,0.03156964);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,0.07158567);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,0.116262);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,0.1348961);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,0.1085163);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,0.07068761);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,0.04013027);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,0.02141362);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,0.01092051);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,0.005009005);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,0.002209618);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,0.001049781);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,0.0003708078);
   VbbHcc_jets_nJet_stack_2->SetEntries(428940);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","ZHcc","F");

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
   nJet_jets_18->Modified();
   nJet_jets_18->cd();
   nJet_jets_18->SetSelected(nJet_jets_18);
}
