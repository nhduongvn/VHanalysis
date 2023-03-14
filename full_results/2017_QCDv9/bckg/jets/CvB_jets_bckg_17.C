#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_bckg_17()
{
//=========Macro generated from canvas: CvB_jets_bckg_17/CvB_jets_bckg_17
//=========  (Thu Mar  9 13:30:49 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_bckg_17 = new TCanvas("CvB_jets_bckg_17", "CvB_jets_bckg_17",0,0,600,600);
   CvB_jets_bckg_17->SetHighLightColor(2);
   CvB_jets_bckg_17->Range(-0.2183529,-5.834275e+10,1.171633,4.278468e+11);
   CvB_jets_bckg_17->SetFillColor(0);
   CvB_jets_bckg_17->SetFillStyle(4000);
   CvB_jets_bckg_17->SetBorderMode(0);
   CvB_jets_bckg_17->SetBorderSize(2);
   CvB_jets_bckg_17->SetLeftMargin(0.15709);
   CvB_jets_bckg_17->SetRightMargin(0.1234783);
   CvB_jets_bckg_17->SetBottomMargin(0.12);
   CvB_jets_bckg_17->SetFrameFillStyle(1000);
   CvB_jets_bckg_17->SetFrameBorderMode(0);
   CvB_jets_bckg_17->SetFrameFillStyle(1000);
   CvB_jets_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.792279e+11);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",20,0,1);
   st_stack_22->SetMinimum(0);
   st_stack_22->SetMaximum(3.792279e+11);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_22->GetXaxis()->SetRange(1,20);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetTitleOffset(1);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Event/0.05");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetTitleOffset(1);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,1.40681e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,2.552559e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,1.953525e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,2.01326e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,2.225287e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,2.54681e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,3.000394e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,3.680863e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,4.815468e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,6.651661e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,9.061176e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,1.271989e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,1.886749e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,2.799547e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,4.553704e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,7.793577e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,1.510286e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,3.147416e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,2.251182e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,1.853204e+10);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,1.380005e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,5869416);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,5131910);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,5227680);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,5507818);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,5907111);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,6422767);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,7128809);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,8172859);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,9627283);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,1.12571e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,1.336034e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,1.628168e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,1.987029e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,2.536882e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,3.324389e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,4.620807e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,6.662085e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,5.68687e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,1.577768e+07);
   VbbHcc_jets_CvB_stack_1->SetEntries(6.351199e+08);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,2.145082e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,3063780);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,1982371);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,1732290);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,1575137);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,1417838);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,1363147);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,1360750);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,1479145);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,1600817);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,1742398);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,1990854);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,2521012);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,3204118);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,4415512);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,6319392);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,1.012213e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,1.749536e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,1.805008e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,3166047);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,1193.169);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,451.3389);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,363.4091);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,340.0834);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,324.7366);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,308.531);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,302.9584);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,303.0954);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,316.3835);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,329.6872);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,344.6237);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,369.0136);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,416.0177);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,469.7837);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,553.0397);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,664.7795);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,843.9511);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,1113.089);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,1139.727);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,477.6847);
   VbbHcc_jets_CvB_stack_2->SetEntries(1.727621e+09);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvB_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_jets_CvB_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_bckg_17->Modified();
   CvB_jets_bckg_17->cd();
   CvB_jets_bckg_17->SetSelected(CvB_jets_bckg_17);
}
