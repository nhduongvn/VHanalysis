#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu May 25 11:52:40 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2183529,-0.07263265,1.171633,0.5326394);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetFillStyle(4000);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15709);
   Sphericity_algo_16->SetRightMargin(0.1234783);
   Sphericity_algo_16->SetBottomMargin(0.12);
   Sphericity_algo_16->SetFrameFillStyle(1000);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameFillStyle(1000);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.4721122);
   
   TH1F *st_stack_87 = new TH1F("st_stack_87","",25,0,1);
   st_stack_87->SetMinimum(0);
   st_stack_87->SetMaximum(0.4721122);
   st_stack_87->SetDirectory(0);
   st_stack_87->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_87->SetLineColor(ci);
   st_stack_87->GetXaxis()->SetTitle("Sphericity");
   st_stack_87->GetXaxis()->SetRange(1,25);
   st_stack_87->GetXaxis()->SetLabelFont(42);
   st_stack_87->GetXaxis()->SetTitleOffset(1);
   st_stack_87->GetXaxis()->SetTitleFont(42);
   st_stack_87->GetYaxis()->SetTitle("Event/0.04");
   st_stack_87->GetYaxis()->SetLabelFont(42);
   st_stack_87->GetYaxis()->SetTitleSize(0.037);
   st_stack_87->GetYaxis()->SetTitleFont(42);
   st_stack_87->GetZaxis()->SetLabelFont(42);
   st_stack_87->GetZaxis()->SetTitleOffset(1);
   st_stack_87->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_87);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,0.2855265);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,0.2685085);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,0.1551761);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,0.1206439);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,0.08040733);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,0.04456256);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,0.002975346);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,0.02893251);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,0.02832327);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,0.0214236);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,0.0193061);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,0.01551297);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,0.01135841);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,0.005037196);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,0.1063266);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,0.1037288);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,0.05558659);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,0.03573647);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,0.01841259);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,0.009813224);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,0.00256204);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,0.001157098);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,0.006387452);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,0.006307672);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,0.004620353);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,0.003706666);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,0.00266495);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,0.001953195);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,0.0009717041);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,0.0006686757);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","ZHcc","F");

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
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
