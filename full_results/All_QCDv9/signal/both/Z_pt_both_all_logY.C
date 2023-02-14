#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_both_all_logY()
{
//=========Macro generated from canvas: Z_pt_both_all/Z_pt_both_all
//=========  (Tue Feb 14 10:43:08 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_both_all = new TCanvas("Z_pt_both_all", "Z_pt_both_all",0,0,600,600);
   Z_pt_both_all->SetHighLightColor(2);
   Z_pt_both_all->Range(37.97653,0.2514668,1705.96,3.761763);
   Z_pt_both_all->SetFillColor(0);
   Z_pt_both_all->SetFillStyle(4000);
   Z_pt_both_all->SetBorderMode(0);
   Z_pt_both_all->SetBorderSize(2);
   Z_pt_both_all->SetLogy();
   Z_pt_both_all->SetLeftMargin(0.15709);
   Z_pt_both_all->SetRightMargin(0.1234783);
   Z_pt_both_all->SetBottomMargin(0.12);
   Z_pt_both_all->SetFrameFillStyle(1000);
   Z_pt_both_all->SetFrameBorderMode(0);
   Z_pt_both_all->SetFrameFillStyle(1000);
   Z_pt_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1775.828);
   
   TH1F *st_stack_140 = new TH1F("st_stack_140","",40,0,2000);
   st_stack_140->SetMinimum(4.706546);
   st_stack_140->SetMaximum(2574.738);
   st_stack_140->SetDirectory(0);
   st_stack_140->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_140->SetLineColor(ci);
   st_stack_140->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_140->GetXaxis()->SetRange(7,30);
   st_stack_140->GetXaxis()->SetLabelFont(42);
   st_stack_140->GetXaxis()->SetTitleOffset(1);
   st_stack_140->GetXaxis()->SetTitleFont(42);
   st_stack_140->GetYaxis()->SetTitle("Events/50.0");
   st_stack_140->GetYaxis()->SetLabelFont(42);
   st_stack_140->GetYaxis()->SetTitleSize(0.037);
   st_stack_140->GetYaxis()->SetTitleFont(42);
   st_stack_140->GetZaxis()->SetLabelFont(42);
   st_stack_140->GetZaxis()->SetTitleOffset(1);
   st_stack_140->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_140);
   
   
   TH1D *VbbHcc_both_Z_pt_all_stack_1 = new TH1D("VbbHcc_both_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(1,9.252075);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(2,17.75828);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(3,11.83055);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(4,6.014577);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(5,3.241504);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(6,1.723819);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(7,0.990593);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(8,0.6448088);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(9,0.2473952);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(10,0.1290762);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(11,0.07761775);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(12,0.04166253);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(13,0.02400806);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(14,0.0207817);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(15,0.01142304);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(16,0.005077553);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(17,0.01586835);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(18,0.001938755);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(26,0.002001313);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(27,0.001842579);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(1,0.1547218);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(2,0.2144934);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(3,0.1722122);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(4,0.1315093);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(5,0.09412372);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(6,0.06702668);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(7,0.04948652);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(8,0.04450465);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(9,0.02444912);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(10,0.01783393);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(11,0.01438779);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(12,0.01008536);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(13,0.007797735);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(14,0.006969335);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(15,0.005150334);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(16,0.003765128);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(17,0.008015297);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(18,0.001938755);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(26,0.002001313);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(27,0.001842579);
   VbbHcc_both_Z_pt_all_stack_1->SetEntries(23382);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_all_stack_2 = new TH1D("VbbHcc_both_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(1,1.450877);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(2,3.945287);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(3,4.59999);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(4,3.01776);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(5,1.69309);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(6,0.8785167);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(7,0.4263796);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(8,0.2313421);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(9,0.08514925);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(10,0.04379136);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(11,0.01660002);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(12,0.009608071);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(13,0.003635909);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(14,0.00278304);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(15,0.001457121);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(16,0.001692082);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(17,0.0003720141);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(19,0.0009761577);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(20,0.0003105083);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(21,0.0008932667);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(23,0.0003858223);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(26,0.0002536154);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(1,0.02231323);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(2,0.03834151);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(3,0.04164728);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(4,0.03192318);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(5,0.0234255);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(6,0.01720384);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(7,0.0117196);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(8,0.008713421);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(9,0.005117326);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(10,0.003754197);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(11,0.002308932);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(12,0.00173431);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(13,0.001060748);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(14,0.000915972);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(15,0.0006761174);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(16,0.0007609742);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(17,0.0003720141);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(19,0.0005662284);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(20,0.0003105083);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(21,0.0005276549);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(23,0.0003858223);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(26,0.0002536154);
   VbbHcc_both_Z_pt_all_stack_2->SetEntries(54951);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_pt_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_both_all->Modified();
   Z_pt_both_all->cd();
   Z_pt_both_all->SetSelected(Z_pt_both_all);
}
