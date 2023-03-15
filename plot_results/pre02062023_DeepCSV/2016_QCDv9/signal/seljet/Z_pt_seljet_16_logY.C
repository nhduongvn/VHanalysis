#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_seljet_16_logY()
{
//=========Macro generated from canvas: Z_pt_seljet_16/Z_pt_seljet_16
//=========  (Wed Jan 18 11:42:17 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_seljet_16 = new TCanvas("Z_pt_seljet_16", "Z_pt_seljet_16",0,0,600,600);
   Z_pt_seljet_16->SetHighLightColor(2);
   Z_pt_seljet_16->Range(37.97653,0.0488622,1705.96,4.661507);
   Z_pt_seljet_16->SetFillColor(0);
   Z_pt_seljet_16->SetFillStyle(4000);
   Z_pt_seljet_16->SetBorderMode(0);
   Z_pt_seljet_16->SetBorderSize(2);
   Z_pt_seljet_16->SetLogy();
   Z_pt_seljet_16->SetLeftMargin(0.15709);
   Z_pt_seljet_16->SetRightMargin(0.1234783);
   Z_pt_seljet_16->SetBottomMargin(0.12);
   Z_pt_seljet_16->SetFrameFillStyle(1000);
   Z_pt_seljet_16->SetFrameBorderMode(0);
   Z_pt_seljet_16->SetFrameFillStyle(1000);
   Z_pt_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(9915.671);
   
   TH1F *st_stack_265 = new TH1F("st_stack_265","",40,0,2000);
   st_stack_265->SetMinimum(4.002944);
   st_stack_265->SetMaximum(15857.78);
   st_stack_265->SetDirectory(0);
   st_stack_265->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_265->SetLineColor(ci);
   st_stack_265->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_265->GetXaxis()->SetRange(7,30);
   st_stack_265->GetXaxis()->SetLabelFont(42);
   st_stack_265->GetXaxis()->SetTitleOffset(1);
   st_stack_265->GetXaxis()->SetTitleFont(42);
   st_stack_265->GetYaxis()->SetTitle("Events/50.0");
   st_stack_265->GetYaxis()->SetLabelFont(42);
   st_stack_265->GetYaxis()->SetTitleSize(0.037);
   st_stack_265->GetYaxis()->SetTitleFont(42);
   st_stack_265->GetZaxis()->SetLabelFont(42);
   st_stack_265->GetZaxis()->SetTitleOffset(1);
   st_stack_265->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_265);
   
   
   TH1D *VbbHcc_seljet_Z_pt_stack_1 = new TH1D("VbbHcc_seljet_Z_pt_stack_1","",40,0,2000);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(1,85.14313);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(2,99.15671);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(3,24.11876);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(4,6.016861);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(5,2.066862);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(6,0.7485827);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(7,0.2724491);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(8,0.1551241);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(9,0.05215637);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(10,0.03207962);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(11,0.01549156);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(12,0.007385003);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(13,0.005024735);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(14,0.007629228);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(15,0.001597611);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(16,0.004605487);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(17,0.004797184);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(19,0.001514127);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(1,0.3660555);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(2,0.3936935);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(3,0.1925412);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(4,0.09565182);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(5,0.05609599);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(6,0.03373122);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(7,0.02034);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(8,0.01531664);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(9,0.008827632);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(10,0.00701612);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(11,0.004739866);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(12,0.003327652);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(13,0.002862168);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(14,0.003412007);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(15,0.001597611);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(16,0.002659478);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(17,0.002773428);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(19,0.001514127);
   VbbHcc_seljet_Z_pt_stack_1->SetEntries(157244);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_pt_stack_2 = new TH1D("VbbHcc_seljet_Z_pt_stack_2","",40,0,2000);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(1,17.23893);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(2,23.02221);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(3,10.56608);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(4,4.032798);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(5,1.677887);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(6,0.7469726);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(7,0.3681796);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(8,0.1828156);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(9,0.0894936);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(10,0.0472552);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(11,0.02641813);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(12,0.01448004);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(13,0.006999845);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(14,0.004483763);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(15,0.001587604);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(16,0.001202755);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(17,0.002086049);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(18,0.0007149158);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(19,0.0003713904);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(20,0.000505842);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(21,5.57783e-05);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(22,0.0005795534);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(23,0.0001894086);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(24,0.0004031255);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(25,0.000215911);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(26,0.0001480239);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(1,0.05728015);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(2,0.06614632);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(3,0.04471529);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(4,0.02762135);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(5,0.01781996);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(6,0.01186324);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(7,0.008355511);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(8,0.005882471);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(9,0.004111524);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(10,0.002979379);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(11,0.002246924);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(12,0.00165589);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(13,0.00114987);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(14,0.0009197961);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(15,0.00056183);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(16,0.000463805);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(17,0.0006335272);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(18,0.0003622388);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(19,0.0002629649);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(20,0.0003074755);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(21,5.57783e-05);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(22,0.0003272121);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(23,0.0001894086);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(24,0.0002858181);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(25,0.000215911);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(26,0.0001480239);
   VbbHcc_seljet_Z_pt_stack_2->SetEntries(328438);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_seljet_16->Modified();
   Z_pt_seljet_16->cd();
   Z_pt_seljet_16->SetSelected(Z_pt_seljet_16);
}
