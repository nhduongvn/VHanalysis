void nC_medium_jets_16()
{
//=========Macro generated from canvas: nC_medium_jets_16/nC_medium_jets_16
//=========  (Thu Dec 15 10:04:52 2022) by ROOT version 6.14/09
   TCanvas *nC_medium_jets_16 = new TCanvas("nC_medium_jets_16", "nC_medium_jets_16",0,0,600,600);
   nC_medium_jets_16->SetHighLightColor(2);
   nC_medium_jets_16->Range(-2.683529,-68.93631,11.21633,505.5329);
   nC_medium_jets_16->SetFillColor(0);
   nC_medium_jets_16->SetFillStyle(4000);
   nC_medium_jets_16->SetBorderMode(0);
   nC_medium_jets_16->SetBorderSize(2);
   nC_medium_jets_16->SetLeftMargin(0.15709);
   nC_medium_jets_16->SetRightMargin(0.1234783);
   nC_medium_jets_16->SetBottomMargin(0.12);
   nC_medium_jets_16->SetFrameFillStyle(1000);
   nC_medium_jets_16->SetFrameBorderMode(0);
   nC_medium_jets_16->SetFrameFillStyle(1000);
   nC_medium_jets_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(426.7486);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",10,-0.5,9.5);
   st_stack_21->SetMinimum(0);
   st_stack_21->SetMaximum(448.086);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_21->GetXaxis()->SetRange(1,10);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetLabelSize(0.035);
   st_stack_21->GetXaxis()->SetTitleSize(0.035);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/1.0");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetLabelSize(0.035);
   st_stack_21->GetYaxis()->SetTitleSize(0.037);
   st_stack_21->GetYaxis()->SetTitleOffset(0);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetLabelSize(0.035);
   st_stack_21->GetZaxis()->SetTitleSize(0.035);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,193.8177);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,251.3662);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,140.1318);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,36.98068);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,4.755618);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,0.3146781);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,0.01031778);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,0.5654875);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,0.636442);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,0.4716761);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,0.2409752);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,0.08565025);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,0.02178793);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,0.00390159);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(472445);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_2 = new TH1D("VbbHcc_jets_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,16.02929);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,33.13285);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,25.68447);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,9.817375);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,1.993943);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,0.1833978);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,0.006795008);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,0.0551444);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,0.07930422);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,0.06975362);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,0.04304734);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,0.01936619);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,0.005852632);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,0.001111496);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(492720);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_16->Modified();
   nC_medium_jets_16->cd();
   nC_medium_jets_16->SetSelected(nC_medium_jets_16);
}
