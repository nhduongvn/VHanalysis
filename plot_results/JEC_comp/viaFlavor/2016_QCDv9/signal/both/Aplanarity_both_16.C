#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Mon Mar 27 11:09:53 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2183529,-0.2899204,1.171633,2.126083);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetFillStyle(4000);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15709);
   Aplanarity_both_16->SetRightMargin(0.1234783);
   Aplanarity_both_16->SetBottomMargin(0.12);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.884483);
   
   TH1F *st_stack_253 = new TH1F("st_stack_253","",50,0,1);
   st_stack_253->SetMinimum(0);
   st_stack_253->SetMaximum(1.884483);
   st_stack_253->SetDirectory(0);
   st_stack_253->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_253->SetLineColor(ci);
   st_stack_253->GetXaxis()->SetTitle("Aplanarity");
   st_stack_253->GetXaxis()->SetRange(1,50);
   st_stack_253->GetXaxis()->SetLabelFont(42);
   st_stack_253->GetXaxis()->SetTitleOffset(1);
   st_stack_253->GetXaxis()->SetTitleFont(42);
   st_stack_253->GetYaxis()->SetTitle("Event/0.02");
   st_stack_253->GetYaxis()->SetLabelFont(42);
   st_stack_253->GetYaxis()->SetTitleSize(0.037);
   st_stack_253->GetYaxis()->SetTitleFont(42);
   st_stack_253->GetZaxis()->SetLabelFont(42);
   st_stack_253->GetZaxis()->SetTitleOffset(1);
   st_stack_253->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_253);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,1.096764);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,0.3691849);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,0.1559956);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,0.05540907);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,0.01699439);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.01952236);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.01167844);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.002815528);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.00294401);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.05701034);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.0329395);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.02127296);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.01256689);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.006971024);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.007391122);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.005842463);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.002815528);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.00294401);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(610);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,0.4673564);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,0.1548415);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.06064344);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.03476284);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.01135239);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.005772873);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.003610421);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.003963976);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.000753374);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.001950545);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.0007706912);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.0003915395);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.0003753755);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.01332904);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.007648648);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.004825475);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.003627078);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.002080882);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.001492951);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.001161233);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.001218412);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.000532719);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.0008746884);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.0005449695);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.0003915395);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.0003753755);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(2006);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
