#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_17_logY()
{
//=========Macro generated from canvas: nB_medium_jets_17/nB_medium_jets_17
//=========  (Mon Dec 19 11:03:32 2022) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_17 = new TCanvas("nB_medium_jets_17", "nB_medium_jets_17",0,0,600,600);
   nB_medium_jets_17->SetHighLightColor(2);
   nB_medium_jets_17->Range(-2.683529,-0.1279505,11.21633,5.489182);
   nB_medium_jets_17->SetFillColor(0);
   nB_medium_jets_17->SetFillStyle(4000);
   nB_medium_jets_17->SetBorderMode(0);
   nB_medium_jets_17->SetBorderSize(2);
   nB_medium_jets_17->SetLogy();
   nB_medium_jets_17->SetLeftMargin(0.15709);
   nB_medium_jets_17->SetRightMargin(0.1234783);
   nB_medium_jets_17->SetBottomMargin(0.12);
   nB_medium_jets_17->SetFrameFillStyle(1000);
   nB_medium_jets_17->SetFrameBorderMode(0);
   nB_medium_jets_17->SetFrameFillStyle(1000);
   nB_medium_jets_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(48701.44);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",10,-0.5,9.5);
   st_stack_18->SetMinimum(3.516458);
   st_stack_18->SetMaximum(84619.16);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_18->GetXaxis()->SetRange(1,10);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetTitleOffset(1);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Events/1.0");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_jets_nB_medium_stack_1 = new TH1D("VbbHcc_jets_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(1,434.4993);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(2,208.9165);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(3,63.03796);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(4,11.37514);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(5,0.9617521);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(6,0.0255079);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(7,0.004193915);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(1,0.9003576);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(2,0.6223173);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(3,0.3402012);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(4,0.1443029);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(5,0.04202618);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(6,0.006648375);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(7,0.002763133);
   VbbHcc_jets_nB_medium_stack_1->SetEntries(495304);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_2 = new TH1D("VbbHcc_jets_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(1,52.51506);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(2,31.05305);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(3,12.65721);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(4,2.878437);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(5,0.30652);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(6,0.01439556);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(7,0.0007436921);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(1,0.1129586);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(2,0.0870293);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(3,0.05561127);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(4,0.02656979);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(5,0.00867179);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(6,0.001840027);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(7,0.0004299897);
   VbbHcc_jets_nB_medium_stack_2->SetEntries(465395);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_1","ZHcc","F");

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
   nB_medium_jets_17->Modified();
   nB_medium_jets_17->cd();
   nB_medium_jets_17->SetSelected(nB_medium_jets_17);
}
