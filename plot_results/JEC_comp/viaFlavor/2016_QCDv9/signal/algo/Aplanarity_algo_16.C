#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2183529,-0.06232172,1.171633,0.457026);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetFillStyle(4000);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15709);
   Aplanarity_algo_16->SetRightMargin(0.1234783);
   Aplanarity_algo_16->SetBottomMargin(0.12);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.4050912);
   
   TH1F *st_stack_157 = new TH1F("st_stack_157","",50,0,1);
   st_stack_157->SetMinimum(0);
   st_stack_157->SetMaximum(0.4050912);
   st_stack_157->SetDirectory(0);
   st_stack_157->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_157->SetLineColor(ci);
   st_stack_157->GetXaxis()->SetTitle("Aplanarity");
   st_stack_157->GetXaxis()->SetRange(1,50);
   st_stack_157->GetXaxis()->SetLabelFont(42);
   st_stack_157->GetXaxis()->SetTitleOffset(1);
   st_stack_157->GetXaxis()->SetTitleFont(42);
   st_stack_157->GetYaxis()->SetTitle("Event/0.02");
   st_stack_157->GetYaxis()->SetLabelFont(42);
   st_stack_157->GetYaxis()->SetTitleSize(0.037);
   st_stack_157->GetYaxis()->SetTitleFont(42);
   st_stack_157->GetZaxis()->SetLabelFont(42);
   st_stack_157->GetZaxis()->SetTitleOffset(1);
   st_stack_157->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_157);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,0.2527618);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,0.0762268);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,0.01993564);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,0.005864898);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.00588341);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.003032998);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.02736294);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.01500977);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.007547399);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.004147109);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.004163159);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.003032998);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(124);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,0.08346394);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,0.02359109);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.006183815);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.002943157);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.0003754982);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.001131997);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.0003879275);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.0004157555);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.005649469);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.002993895);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.001548737);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.001043601);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.0003754982);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.0006589557);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.0003879275);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.0004157555);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(317);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
