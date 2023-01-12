#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_17()
{
//=========Macro generated from canvas: CSV_jets_17/CSV_jets_17
//=========  (Mon Dec 19 11:03:46 2022) by ROOT version 6.26/06
   TCanvas *CSV_jets_17 = new TCanvas("CSV_jets_17", "CSV_jets_17",0,0,600,600);
   CSV_jets_17->SetHighLightColor(2);
   CSV_jets_17->Range(-0.2183529,-361.6901,1.171633,2652.394);
   CSV_jets_17->SetFillColor(0);
   CSV_jets_17->SetFillStyle(4000);
   CSV_jets_17->SetBorderMode(0);
   CSV_jets_17->SetBorderSize(2);
   CSV_jets_17->SetLeftMargin(0.15709);
   CSV_jets_17->SetRightMargin(0.1234783);
   CSV_jets_17->SetBottomMargin(0.12);
   CSV_jets_17->SetFrameFillStyle(1000);
   CSV_jets_17->SetFrameBorderMode(0);
   CSV_jets_17->SetFrameFillStyle(1000);
   CSV_jets_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2350.986);
   
   TH1F *st_stack_6 = new TH1F("st_stack_6","",20,0,1);
   st_stack_6->SetMinimum(0);
   st_stack_6->SetMaximum(2350.986);
   st_stack_6->SetDirectory(0);
   st_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_6->SetLineColor(ci);
   st_stack_6->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_6->GetXaxis()->SetRange(1,20);
   st_stack_6->GetXaxis()->SetLabelFont(42);
   st_stack_6->GetXaxis()->SetTitleOffset(1);
   st_stack_6->GetXaxis()->SetTitleFont(42);
   st_stack_6->GetYaxis()->SetTitle("Events/0.05");
   st_stack_6->GetYaxis()->SetLabelFont(42);
   st_stack_6->GetYaxis()->SetTitleSize(0.037);
   st_stack_6->GetYaxis()->SetTitleFont(42);
   st_stack_6->GetZaxis()->SetLabelFont(42);
   st_stack_6->GetZaxis()->SetTitleOffset(1);
   st_stack_6->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_6);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,1316.889);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,220.3976);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,111.9936);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,74.84153);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,55.8981);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,44.9065);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,36.92697);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,31.13897);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,25.11064);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,22.37127);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,20.17882);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,17.56859);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,15.388);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,14.39823);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,13.03723);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,12.83994);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,12.5453);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,13.10204);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,16.55711);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,86.57596);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,1.552283);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,0.6361952);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,0.4540183);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,0.3713615);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,0.3210436);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,0.2878058);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,0.2607924);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,0.2403666);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,0.2154516);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,0.2039935);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,0.1927851);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,0.1800069);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,0.1685324);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,0.163541);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,0.1542279);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,0.1540255);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,0.152419);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,0.1553402);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,0.1745104);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,0.39942);
   VbbHcc_jets_CSV_stack_1->SetEntries(1460653);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_CSV_stack_2 = new TH1D("VbbHcc_jets_CSV_stack_2","",20,0,1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,250.4348);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,38.27062);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,18.86973);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,12.56313);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,9.405393);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,7.540855);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,6.119627);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,5.085914);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,4.250341);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,3.641219);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,3.433914);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,3.024252);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,2.576374);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,2.385711);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,2.28829);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,2.300422);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,2.239632);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,2.350913);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,3.097843);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,17.56365);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,0.2470593);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,0.09645926);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,0.06781897);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,0.05535061);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,0.04787668);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,0.04286562);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,0.03862603);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,0.03521242);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,0.0321977);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,0.02977473);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,0.02892323);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,0.0271401);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,0.02506568);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,0.02412657);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,0.02363134);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,0.0237044);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,0.02338838);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,0.02395353);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,0.02752326);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,0.06564468);
   VbbHcc_jets_CSV_stack_2->SetEntries(1858913);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CSV_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CSV_stack_1","ZHcc","F");

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
   CSV_jets_17->Modified();
   CSV_jets_17->cd();
   CSV_jets_17->SetSelected(CSV_jets_17);
}
