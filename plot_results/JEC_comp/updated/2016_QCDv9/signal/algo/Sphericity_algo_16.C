#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2183529,-0.02476392,1.171633,0.181602);
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
   st->SetMaximum(0.1609655);
   
   TH1F *st_stack_153 = new TH1F("st_stack_153","",25,0,1);
   st_stack_153->SetMinimum(0);
   st_stack_153->SetMaximum(0.1609655);
   st_stack_153->SetDirectory(0);
   st_stack_153->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_153->SetLineColor(ci);
   st_stack_153->GetXaxis()->SetTitle("Sphericity");
   st_stack_153->GetXaxis()->SetRange(1,25);
   st_stack_153->GetXaxis()->SetLabelFont(42);
   st_stack_153->GetXaxis()->SetTitleOffset(1);
   st_stack_153->GetXaxis()->SetTitleFont(42);
   st_stack_153->GetYaxis()->SetTitle("Event/0.04");
   st_stack_153->GetYaxis()->SetLabelFont(42);
   st_stack_153->GetYaxis()->SetTitleSize(0.037);
   st_stack_153->GetYaxis()->SetTitleFont(42);
   st_stack_153->GetZaxis()->SetLabelFont(42);
   st_stack_153->GetZaxis()->SetTitleOffset(1);
   st_stack_153->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_153);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,0.005405053);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,0.038214);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,0.06804598);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,0.1029645);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,0.0672395);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,0.06178903);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,0.01207665);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,0.003973308);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,0.002888021);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,0.003827759);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,0.01062294);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,0.01414306);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,0.01747248);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,0.01409121);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,0.01335399);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,0.006051259);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,0.003238971);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,0.002888021);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(126);

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
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,0.003878362);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,0.01529209);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,0.02525096);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,0.03063687);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,0.01712685);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,0.0122196);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,0.004734836);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,0.003166507);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,0.00118299);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.0003474839);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.000371599);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,0.001184258);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,0.002401968);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,0.003091942);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,0.003416742);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,0.002544119);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,0.002180411);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,0.001321235);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,0.001121407);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.0006833318);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.0003474839);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.000371599);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(308);

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
