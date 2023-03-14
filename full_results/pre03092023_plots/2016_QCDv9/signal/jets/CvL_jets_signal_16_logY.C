#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_signal_16_logY()
{
//=========Macro generated from canvas: CvL_jets_signal_16/CvL_jets_signal_16
//=========  (Wed Mar  1 14:06:39 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_signal_16 = new TCanvas("CvL_jets_signal_16", "CvL_jets_signal_16",0,0,600,600);
   CvL_jets_signal_16->SetHighLightColor(2);
   CvL_jets_signal_16->Range(-0.2183529,-0.1292982,1.171633,5.495631);
   CvL_jets_signal_16->SetFillColor(0);
   CvL_jets_signal_16->SetFillStyle(4000);
   CvL_jets_signal_16->SetBorderMode(0);
   CvL_jets_signal_16->SetBorderSize(2);
   CvL_jets_signal_16->SetLogy();
   CvL_jets_signal_16->SetLeftMargin(0.15709);
   CvL_jets_signal_16->SetRightMargin(0.1234783);
   CvL_jets_signal_16->SetBottomMargin(0.12);
   CvL_jets_signal_16->SetFrameFillStyle(1000);
   CvL_jets_signal_16->SetFrameBorderMode(0);
   CvL_jets_signal_16->SetFrameFillStyle(1000);
   CvL_jets_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(49310.73);
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",20,0,1);
   st_stack_13->SetMinimum(3.513122);
   st_stack_13->SetMaximum(85731.05);
   st_stack_13->SetDirectory(0);
   st_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_13->SetLineColor(ci);
   st_stack_13->GetXaxis()->SetTitle("CvL tagging score");
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
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,250.9454);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,406.8607);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,171.4116);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,86.62393);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,53.95612);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,38.36398);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,30.92081);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,25.36102);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,22.99685);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,21.11548);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,20.04891);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,18.92337);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,18.06132);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,18.03579);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,19.4252);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,21.48554);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,23.17711);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,26.83938);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,33.70475);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,95.52372);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,0.8755641);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,1.114617);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,0.7222438);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,0.5148618);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,0.4061642);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,0.344331);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,0.3086656);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,0.2792653);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,0.2653245);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,0.2548709);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,0.2482874);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,0.2415061);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,0.2359837);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,0.2358684);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,0.2450837);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,0.2572485);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,0.2674492);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,0.2875782);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,0.3221797);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,0.543106);
   VbbHcc_jets_CvL_stack_1->SetEntries(508987);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_CvL_stack_2 = new TH1D("VbbHcc_jets_CvL_stack_2","",20,0,1);
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,57.85964);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,86.24659);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,33.72589);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,16.91817);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,10.38037);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,7.508646);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,5.895964);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,4.865724);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,4.506898);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,4.115642);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,3.892641);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,3.813461);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,3.676688);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,3.8203);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,4.055758);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,4.443792);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,4.996656);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,5.985287);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,7.455183);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,20.58881);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,0.1490845);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,0.1814735);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,0.113296);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,0.08024188);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,0.06286512);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,0.05347244);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,0.04741574);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,0.04307196);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,0.04149464);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,0.0396692);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,0.03857747);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,0.03816711);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,0.03748892);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,0.03822469);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,0.03943356);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,0.04126523);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,0.0437658);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,0.04793437);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,0.05348415);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,0.08897354);
   VbbHcc_jets_CvL_stack_2->SetEntries(785295);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvL_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvL_stack_1","ZHcc","F");

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
   CvL_jets_signal_16->Modified();
   CvL_jets_signal_16->cd();
   CvL_jets_signal_16->SetSelected(CvL_jets_signal_16);
}
