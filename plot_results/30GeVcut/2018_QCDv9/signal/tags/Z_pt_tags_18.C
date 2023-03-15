#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_18()
{
//=========Macro generated from canvas: Z_pt_tags_18/Z_pt_tags_18
//=========  (Tue Feb 14 15:57:08 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_tags_18 = new TCanvas("Z_pt_tags_18", "Z_pt_tags_18",0,0,600,600);
   Z_pt_tags_18->SetHighLightColor(2);
   Z_pt_tags_18->Range(37.97653,-1.836834,1705.96,13.47012);
   Z_pt_tags_18->SetFillColor(0);
   Z_pt_tags_18->SetFillStyle(4000);
   Z_pt_tags_18->SetBorderMode(0);
   Z_pt_tags_18->SetBorderSize(2);
   Z_pt_tags_18->SetLeftMargin(0.15709);
   Z_pt_tags_18->SetRightMargin(0.1234783);
   Z_pt_tags_18->SetBottomMargin(0.12);
   Z_pt_tags_18->SetFrameFillStyle(1000);
   Z_pt_tags_18->SetFrameBorderMode(0);
   Z_pt_tags_18->SetFrameFillStyle(1000);
   Z_pt_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(11.93942);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",40,0,2000);
   st_stack_11->SetMinimum(0);
   st_stack_11->SetMaximum(11.93942);
   st_stack_11->SetDirectory(0);
   st_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_11->SetLineColor(ci);
   st_stack_11->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_11->GetXaxis()->SetRange(7,30);
   st_stack_11->GetXaxis()->SetLabelFont(42);
   st_stack_11->GetXaxis()->SetTitleOffset(1);
   st_stack_11->GetXaxis()->SetTitleFont(42);
   st_stack_11->GetYaxis()->SetTitle("Events/50.0");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetTitleSize(0.037);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetTitleOffset(1);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,4.158104);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,7.959615);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,5.167549);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,2.602831);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,1.374314);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,0.7735268);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,0.433998);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,0.2992871);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,0.1147832);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,0.07116198);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,0.01569855);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,0.0164449);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,0.002958322);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(14,0.01022762);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(15,0.002736771);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(16,0.003340468);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(17,0.009651359);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,0.1092447);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,0.1519529);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,0.1188668);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,0.09721894);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,0.06821561);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,0.0472023);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,0.03413808);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,0.03453642);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,0.01769469);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,0.01381825);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,0.006045411);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,0.006791094);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,0.002958322);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(14,0.005254239);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(15,0.002736771);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(16,0.003340468);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(17,0.007143407);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(9189);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_2 = new TH1D("VbbHcc_tags_Z_pt_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,0.6576302);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,1.74126);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,2.037731);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,1.334238);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,0.7405351);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,0.3833878);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,0.1924659);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,0.1030668);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,0.04126808);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,0.02255353);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,0.008781396);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,0.003829277);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,0.0004371028);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,0.0006678741);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(15,0.0002938073);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(16,0.001067161);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(19,0.0003240891);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(21,0.0002658739);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,0.01620785);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,0.02854711);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,0.0311577);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,0.02286206);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,0.01630323);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,0.01216);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,0.008245024);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,0.006178563);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,0.003747797);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,0.002804403);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,0.001702655);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,0.001115243);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,0.0004371028);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,0.0004756561);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(15,0.0002938073);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(16,0.0006195251);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(19,0.0003240891);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(21,0.0002658739);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(21359);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_tags_18->Modified();
   Z_pt_tags_18->cd();
   Z_pt_tags_18->SetSelected(Z_pt_tags_18);
}
