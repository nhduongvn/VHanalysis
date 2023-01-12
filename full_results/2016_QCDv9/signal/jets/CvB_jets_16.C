#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_16()
{
//=========Macro generated from canvas: CvB_jets_16/CvB_jets_16
//=========  (Mon Dec 19 11:03:46 2022) by ROOT version 6.26/06
   TCanvas *CvB_jets_16 = new TCanvas("CvB_jets_16", "CvB_jets_16",0,0,600,600);
   CvB_jets_16->SetHighLightColor(2);
   CvB_jets_16->Range(-0.2183529,-54.27038,1.171633,397.9828);
   CvB_jets_16->SetFillColor(0);
   CvB_jets_16->SetFillStyle(4000);
   CvB_jets_16->SetBorderMode(0);
   CvB_jets_16->SetBorderSize(2);
   CvB_jets_16->SetLeftMargin(0.15709);
   CvB_jets_16->SetRightMargin(0.1234783);
   CvB_jets_16->SetBottomMargin(0.12);
   CvB_jets_16->SetFrameFillStyle(1000);
   CvB_jets_16->SetFrameBorderMode(0);
   CvB_jets_16->SetFrameFillStyle(1000);
   CvB_jets_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(352.7575);
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",20,0,1);
   st_stack_13->SetMinimum(0);
   st_stack_13->SetMaximum(352.7575);
   st_stack_13->SetDirectory(0);
   st_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_13->SetLineColor(ci);
   st_stack_13->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_13->GetXaxis()->SetRange(1,20);
   st_stack_13->GetXaxis()->SetLabelFont(42);
   st_stack_13->GetXaxis()->SetTitleOffset(1);
   st_stack_13->GetXaxis()->SetTitleFont(42);
   st_stack_13->GetYaxis()->SetTitle("Events/0.05");
   st_stack_13->GetYaxis()->SetLabelFont(42);
   st_stack_13->GetYaxis()->SetTitleSize(0.037);
   st_stack_13->GetYaxis()->SetTitleFont(42);
   st_stack_13->GetZaxis()->SetLabelFont(42);
   st_stack_13->GetZaxis()->SetTitleOffset(1);
   st_stack_13->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_13);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(0,203.6016);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,93.68342);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,34.21851);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,21.25282);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,24.7172);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,34.34306);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,29.68129);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,36.24369);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,41.94413);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,44.78338);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,77.67879);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,67.87169);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,86.77545);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,86.23808);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,97.57223);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,122.9868);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,137.977);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,159.11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,192.5484);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,198.396);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,66.50524);
   VbbHcc_jets_CvB_stack_1->SetBinContent(21,19.91837);
   VbbHcc_jets_CvB_stack_1->SetBinError(0,0.5688522);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,0.3801019);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,0.2322736);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,0.1845489);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,0.1989218);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,0.2329196);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,0.2171469);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,0.2403438);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,0.2589897);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,0.267386);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,0.3511714);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,0.3288038);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,0.3711369);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,0.3709507);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,0.3941091);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,0.4422963);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,0.4688455);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,0.5033369);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,0.5536054);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,0.5622235);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,0.3262582);
   VbbHcc_jets_CvB_stack_1->SetBinError(21,0.1747036);
   VbbHcc_jets_CvB_stack_1->SetEntries(1384252);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_CvB_stack_2 = new TH1D("VbbHcc_jets_CvB_stack_2","",20,0,1);
   VbbHcc_jets_CvB_stack_2->SetBinContent(0,36.08055);
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,19.67052);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,5.178794);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,4.474708);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,4.64499);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,5.058239);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,5.322516);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,6.274012);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,7.060644);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,8.67748);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,14.4305);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,11.71079);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,14.13318);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,16.48319);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,20.74266);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,24.82038);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,26.70826);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,36.73868);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,41.31779);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,36.77559);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,12.12179);
   VbbHcc_jets_CvB_stack_2->SetBinContent(21,0.004854727);
   VbbHcc_jets_CvB_stack_2->SetBinError(0,0.08262936);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,0.06078163);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,0.03136651);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,0.02915685);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,0.02971574);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,0.03099272);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,0.03177884);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,0.03450652);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,0.03661239);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,0.04056484);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,0.05229808);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,0.04712958);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,0.05177446);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,0.05591065);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,0.06272772);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,0.06860769);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,0.07120945);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,0.08345521);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,0.08856182);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,0.08362353);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,0.04805989);
   VbbHcc_jets_CvB_stack_2->SetBinError(21,0.0009608734);
   VbbHcc_jets_CvB_stack_2->SetEntries(2031837);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvB_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvB_stack_1","ZHcc","F");

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
   CvB_jets_16->Modified();
   CvB_jets_16->cd();
   CvB_jets_16->SetSelected(CvB_jets_16);
}
