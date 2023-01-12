#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_17_logY()
{
//=========Macro generated from canvas: CvL_jets_17/CvL_jets_17
//=========  (Mon Dec 19 11:03:32 2022) by ROOT version 6.26/06
   TCanvas *CvL_jets_17 = new TCanvas("CvL_jets_17", "CvL_jets_17",0,0,600,600);
   CvL_jets_17->SetHighLightColor(2);
   CvL_jets_17->Range(-0.2183529,-0.1703601,1.171633,5.69309);
   CvL_jets_17->SetFillColor(0);
   CvL_jets_17->SetFillStyle(4000);
   CvL_jets_17->SetBorderMode(0);
   CvL_jets_17->SetBorderSize(2);
   CvL_jets_17->SetLogy();
   CvL_jets_17->SetLeftMargin(0.15709);
   CvL_jets_17->SetRightMargin(0.1234783);
   CvL_jets_17->SetBottomMargin(0.12);
   CvL_jets_17->SetFrameFillStyle(1000);
   CvL_jets_17->SetFrameBorderMode(0);
   CvL_jets_17->SetFrameFillStyle(1000);
   CvL_jets_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(72170.74);
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",20,0,1);
   st_stack_10->SetMinimum(3.413924);
   st_stack_10->SetMaximum(127862.9);
   st_stack_10->SetDirectory(0);
   st_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_10->SetLineColor(ci);
   st_stack_10->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_10->GetXaxis()->SetRange(1,20);
   st_stack_10->GetXaxis()->SetLabelFont(42);
   st_stack_10->GetXaxis()->SetTitleOffset(1);
   st_stack_10->GetXaxis()->SetTitleFont(42);
   st_stack_10->GetYaxis()->SetTitle("Events/0.05");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetTitleSize(0.037);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetTitleOffset(1);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *VbbHcc_jets_CvL_stack_1 = new TH1D("VbbHcc_jets_CvL_stack_1","",20,0,1);
   VbbHcc_jets_CvL_stack_1->SetBinContent(1,502.2827);
   VbbHcc_jets_CvL_stack_1->SetBinContent(2,609.7525);
   VbbHcc_jets_CvL_stack_1->SetBinContent(3,251.3925);
   VbbHcc_jets_CvL_stack_1->SetBinContent(4,134.3869);
   VbbHcc_jets_CvL_stack_1->SetBinContent(5,93.61653);
   VbbHcc_jets_CvL_stack_1->SetBinContent(6,70.80766);
   VbbHcc_jets_CvL_stack_1->SetBinContent(7,58.54091);
   VbbHcc_jets_CvL_stack_1->SetBinContent(8,49.54489);
   VbbHcc_jets_CvL_stack_1->SetBinContent(9,46.29415);
   VbbHcc_jets_CvL_stack_1->SetBinContent(10,42.12626);
   VbbHcc_jets_CvL_stack_1->SetBinContent(11,38.87842);
   VbbHcc_jets_CvL_stack_1->SetBinContent(12,34.2983);
   VbbHcc_jets_CvL_stack_1->SetBinContent(13,34.67655);
   VbbHcc_jets_CvL_stack_1->SetBinContent(14,32.45322);
   VbbHcc_jets_CvL_stack_1->SetBinContent(15,30.8744);
   VbbHcc_jets_CvL_stack_1->SetBinContent(16,29.60905);
   VbbHcc_jets_CvL_stack_1->SetBinContent(17,30.25992);
   VbbHcc_jets_CvL_stack_1->SetBinContent(18,30.98971);
   VbbHcc_jets_CvL_stack_1->SetBinContent(19,32.23332);
   VbbHcc_jets_CvL_stack_1->SetBinContent(20,9.647609);
   VbbHcc_jets_CvL_stack_1->SetBinError(1,0.9595512);
   VbbHcc_jets_CvL_stack_1->SetBinError(2,1.054858);
   VbbHcc_jets_CvL_stack_1->SetBinError(3,0.6779787);
   VbbHcc_jets_CvL_stack_1->SetBinError(4,0.4955802);
   VbbHcc_jets_CvL_stack_1->SetBinError(5,0.4141378);
   VbbHcc_jets_CvL_stack_1->SetBinError(6,0.3607788);
   VbbHcc_jets_CvL_stack_1->SetBinError(7,0.3286603);
   VbbHcc_jets_CvL_stack_1->SetBinError(8,0.302225);
   VbbHcc_jets_CvL_stack_1->SetBinError(9,0.2923813);
   VbbHcc_jets_CvL_stack_1->SetBinError(10,0.2786986);
   VbbHcc_jets_CvL_stack_1->SetBinError(11,0.2689854);
   VbbHcc_jets_CvL_stack_1->SetBinError(12,0.2522993);
   VbbHcc_jets_CvL_stack_1->SetBinError(13,0.2535433);
   VbbHcc_jets_CvL_stack_1->SetBinError(14,0.2453568);
   VbbHcc_jets_CvL_stack_1->SetBinError(15,0.2393118);
   VbbHcc_jets_CvL_stack_1->SetBinError(16,0.2347387);
   VbbHcc_jets_CvL_stack_1->SetBinError(17,0.2373182);
   VbbHcc_jets_CvL_stack_1->SetBinError(18,0.2404924);
   VbbHcc_jets_CvL_stack_1->SetBinError(19,0.2446527);
   VbbHcc_jets_CvL_stack_1->SetBinError(20,0.1337489);
   VbbHcc_jets_CvL_stack_1->SetEntries(1460653);

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
   VbbHcc_jets_CvL_stack_2->SetBinContent(1,101.3323);
   VbbHcc_jets_CvL_stack_2->SetBinContent(2,111.9549);
   VbbHcc_jets_CvL_stack_2->SetBinContent(3,43.98791);
   VbbHcc_jets_CvL_stack_2->SetBinContent(4,23.20034);
   VbbHcc_jets_CvL_stack_2->SetBinContent(5,15.98435);
   VbbHcc_jets_CvL_stack_2->SetBinContent(6,12.19108);
   VbbHcc_jets_CvL_stack_2->SetBinContent(7,9.957613);
   VbbHcc_jets_CvL_stack_2->SetBinContent(8,8.568334);
   VbbHcc_jets_CvL_stack_2->SetBinContent(9,8.002738);
   VbbHcc_jets_CvL_stack_2->SetBinContent(10,7.206567);
   VbbHcc_jets_CvL_stack_2->SetBinContent(11,6.614137);
   VbbHcc_jets_CvL_stack_2->SetBinContent(12,6.04674);
   VbbHcc_jets_CvL_stack_2->SetBinContent(13,6.040085);
   VbbHcc_jets_CvL_stack_2->SetBinContent(14,5.587576);
   VbbHcc_jets_CvL_stack_2->SetBinContent(15,5.506507);
   VbbHcc_jets_CvL_stack_2->SetBinContent(16,5.364739);
   VbbHcc_jets_CvL_stack_2->SetBinContent(17,5.495019);
   VbbHcc_jets_CvL_stack_2->SetBinContent(18,5.741982);
   VbbHcc_jets_CvL_stack_2->SetBinContent(19,6.399267);
   VbbHcc_jets_CvL_stack_2->SetBinContent(20,2.260441);
   VbbHcc_jets_CvL_stack_2->SetBinError(1,0.1574911);
   VbbHcc_jets_CvL_stack_2->SetBinError(2,0.1649497);
   VbbHcc_jets_CvL_stack_2->SetBinError(3,0.1031643);
   VbbHcc_jets_CvL_stack_2->SetBinError(4,0.0750093);
   VbbHcc_jets_CvL_stack_2->SetBinError(5,0.06233629);
   VbbHcc_jets_CvL_stack_2->SetBinError(6,0.05445792);
   VbbHcc_jets_CvL_stack_2->SetBinError(7,0.04924822);
   VbbHcc_jets_CvL_stack_2->SetBinError(8,0.04571616);
   VbbHcc_jets_CvL_stack_2->SetBinError(9,0.04417774);
   VbbHcc_jets_CvL_stack_2->SetBinError(10,0.04198318);
   VbbHcc_jets_CvL_stack_2->SetBinError(11,0.04018074);
   VbbHcc_jets_CvL_stack_2->SetBinError(12,0.03846693);
   VbbHcc_jets_CvL_stack_2->SetBinError(13,0.03846854);
   VbbHcc_jets_CvL_stack_2->SetBinError(14,0.03699255);
   VbbHcc_jets_CvL_stack_2->SetBinError(15,0.03675743);
   VbbHcc_jets_CvL_stack_2->SetBinError(16,0.03631242);
   VbbHcc_jets_CvL_stack_2->SetBinError(17,0.03683125);
   VbbHcc_jets_CvL_stack_2->SetBinError(18,0.03764331);
   VbbHcc_jets_CvL_stack_2->SetBinError(19,0.03968619);
   VbbHcc_jets_CvL_stack_2->SetBinError(20,0.02364322);
   VbbHcc_jets_CvL_stack_2->SetEntries(1858913);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_17->Modified();
   CvL_jets_17->cd();
   CvL_jets_17->SetSelected(CvL_jets_17);
}
