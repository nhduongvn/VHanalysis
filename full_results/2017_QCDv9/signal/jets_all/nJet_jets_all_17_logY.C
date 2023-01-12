#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_all_17_logY()
{
//=========Macro generated from canvas: nJet_jets_all_17/nJet_jets_all_17
//=========  (Mon Dec 19 11:03:34 2022) by ROOT version 6.26/06
   TCanvas *nJet_jets_all_17 = new TCanvas("nJet_jets_all_17", "nJet_jets_all_17",0,0,600,600);
   nJet_jets_all_17->SetHighLightColor(2);
   nJet_jets_all_17->Range(-3.556941,0.008284018,15.90286,4.848133);
   nJet_jets_all_17->SetFillColor(0);
   nJet_jets_all_17->SetFillStyle(4000);
   nJet_jets_all_17->SetBorderMode(0);
   nJet_jets_all_17->SetBorderSize(2);
   nJet_jets_all_17->SetLogy();
   nJet_jets_all_17->SetLeftMargin(0.15709);
   nJet_jets_all_17->SetRightMargin(0.1234783);
   nJet_jets_all_17->SetBottomMargin(0.12);
   nJet_jets_all_17->SetFrameFillStyle(1000);
   nJet_jets_all_17->SetFrameBorderMode(0);
   nJet_jets_all_17->SetFrameFillStyle(1000);
   nJet_jets_all_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(14186.03);
   
   TH1F *st_stack_106 = new TH1F("st_stack_106","",14,-0.5,13.5);
   st_stack_106->SetMinimum(3.882092);
   st_stack_106->SetMaximum(23128.52);
   st_stack_106->SetDirectory(0);
   st_stack_106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_106->SetLineColor(ci);
   st_stack_106->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_106->GetXaxis()->SetRange(1,14);
   st_stack_106->GetXaxis()->SetLabelFont(42);
   st_stack_106->GetXaxis()->SetTitleOffset(1);
   st_stack_106->GetXaxis()->SetTitleFont(42);
   st_stack_106->GetYaxis()->SetTitle("Events/1.0");
   st_stack_106->GetYaxis()->SetLabelFont(42);
   st_stack_106->GetYaxis()->SetTitleSize(0.037);
   st_stack_106->GetYaxis()->SetTitleFont(42);
   st_stack_106->GetZaxis()->SetLabelFont(42);
   st_stack_106->GetZaxis()->SetTitleOffset(1);
   st_stack_106->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_106);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,-0.0003197412);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,0.06526121);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,1.927896);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,17.25021);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,62.90313);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,107.2237);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,126.9932);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,119.916);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,97.67046);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,71.69245);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,47.06387);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,29.49654);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,17.35143);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,9.514507);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,9.752131);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,0.004186041);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,0.01158954);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,0.06305506);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,0.187681);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,0.3546843);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,0.4564321);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,0.4899146);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,0.4714253);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,0.4211249);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,0.357314);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,0.2883025);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,0.2257126);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,0.172034);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,0.1261156);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,0.1263912);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(495304);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nJet_stack_2 = new TH1D("VbbHcc_jets_all_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,0.0001751787);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,0.03384743);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,0.6442147);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,3.744527);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,9.508626);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,14.86716);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,17.15972);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,16.11694);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,13.1563);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,9.507909);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,6.289256);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,3.90498);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,2.184937);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,2.306827);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,0.0001751787);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,0.002904419);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,0.01279058);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,0.0308092);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,0.04890779);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,0.06088104);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,0.06502252);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,0.06267695);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,0.05626145);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,0.04757875);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,0.03848911);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,0.03014922);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,0.02236516);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,0.0227011);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(465395);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_all_17->Modified();
   nJet_jets_all_17->cd();
   nJet_jets_all_17->SetSelected(nJet_jets_all_17);
}
