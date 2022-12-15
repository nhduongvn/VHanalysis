void nJet_jets_all_16()
{
//=========Macro generated from canvas: nJet_jets_all_16/nJet_jets_all_16
//=========  (Thu Dec 15 10:04:53 2022) by ROOT version 6.14/09
   TCanvas *nJet_jets_all_16 = new TCanvas("nJet_jets_all_16", "nJet_jets_all_16",0,0,600,600);
   nJet_jets_all_16->SetHighLightColor(2);
   nJet_jets_all_16->Range(-3.556941,-33.2867,15.90286,244.1025);
   nJet_jets_all_16->SetFillColor(0);
   nJet_jets_all_16->SetFillStyle(4000);
   nJet_jets_all_16->SetBorderMode(0);
   nJet_jets_all_16->SetBorderSize(2);
   nJet_jets_all_16->SetLeftMargin(0.15709);
   nJet_jets_all_16->SetRightMargin(0.1234783);
   nJet_jets_all_16->SetBottomMargin(0.12);
   nJet_jets_all_16->SetFrameFillStyle(1000);
   nJet_jets_all_16->SetFrameBorderMode(0);
   nJet_jets_all_16->SetFrameFillStyle(1000);
   nJet_jets_all_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(206.0605);
   
   TH1F *st_stack_45 = new TH1F("st_stack_45","",14,-0.5,13.5);
   st_stack_45->SetMinimum(0);
   st_stack_45->SetMaximum(216.3636);
   st_stack_45->SetDirectory(0);
   st_stack_45->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_45->SetLineColor(ci);
   st_stack_45->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_45->GetXaxis()->SetRange(1,14);
   st_stack_45->GetXaxis()->SetLabelFont(42);
   st_stack_45->GetXaxis()->SetLabelSize(0.035);
   st_stack_45->GetXaxis()->SetTitleSize(0.035);
   st_stack_45->GetXaxis()->SetTitleFont(42);
   st_stack_45->GetYaxis()->SetTitle("Events/1.0");
   st_stack_45->GetYaxis()->SetLabelFont(42);
   st_stack_45->GetYaxis()->SetLabelSize(0.035);
   st_stack_45->GetYaxis()->SetTitleSize(0.037);
   st_stack_45->GetYaxis()->SetTitleOffset(0);
   st_stack_45->GetYaxis()->SetTitleFont(42);
   st_stack_45->GetZaxis()->SetLabelFont(42);
   st_stack_45->GetZaxis()->SetLabelSize(0.035);
   st_stack_45->GetZaxis()->SetTitleSize(0.035);
   st_stack_45->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_45);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,0.01770406);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,0.1262493);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,3.049508);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,24.8532);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,83.64301);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,121.1647);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,122.4492);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,100.3687);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,70.72427);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,44.99468);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,26.60648);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,14.82798);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,7.609573);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,3.778616);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,3.163156);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,0.005225922);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,0.01565655);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,0.07323225);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,0.2091877);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,0.3783473);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,0.4491095);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,0.4458833);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,0.398683);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,0.3313846);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,0.2619122);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,0.1997491);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,0.1482521);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,0.1053434);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,0.07374464);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,0.06617502);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(472445);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nJet_stack_2 = new TH1D("VbbHcc_jets_all_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,0.0001892188);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,0.04984462);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,0.7695971);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,4.250874);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,10.19541);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,14.92445);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,16.20743);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,14.20989);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,10.55458);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,6.967571);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,4.173075);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,2.272748);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,1.225973);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,1.04649);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,0.0001892188);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,0.003117944);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,0.01226068);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,0.02877458);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,0.04442059);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,0.05356643);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,0.05560484);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,0.0518461);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,0.04444948);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,0.03595018);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,0.02768754);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,0.02029914);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,0.01482641);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,0.01349329);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(492720);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_all_16->Modified();
   nJet_jets_all_16->cd();
   nJet_jets_all_16->SetSelected(nJet_jets_all_16);
}
