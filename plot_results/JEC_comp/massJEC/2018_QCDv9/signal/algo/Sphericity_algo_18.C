#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Mon Mar 20 11:50:03 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2183529,-0.1788287,1.171633,1.311411);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetFillStyle(4000);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15709);
   Sphericity_algo_18->SetRightMargin(0.1234783);
   Sphericity_algo_18->SetBottomMargin(0.12);
   Sphericity_algo_18->SetFrameFillStyle(1000);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameFillStyle(1000);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.162387);
   
   TH1F *st_stack_155 = new TH1F("st_stack_155","",25,0,1);
   st_stack_155->SetMinimum(0);
   st_stack_155->SetMaximum(1.162387);
   st_stack_155->SetDirectory(0);
   st_stack_155->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_155->SetLineColor(ci);
   st_stack_155->GetXaxis()->SetTitle("Sphericity");
   st_stack_155->GetXaxis()->SetRange(1,25);
   st_stack_155->GetXaxis()->SetLabelFont(42);
   st_stack_155->GetXaxis()->SetTitleOffset(1);
   st_stack_155->GetXaxis()->SetTitleFont(42);
   st_stack_155->GetYaxis()->SetTitle("Event/0.04");
   st_stack_155->GetYaxis()->SetLabelFont(42);
   st_stack_155->GetYaxis()->SetTitleSize(0.037);
   st_stack_155->GetYaxis()->SetTitleFont(42);
   st_stack_155->GetZaxis()->SetLabelFont(42);
   st_stack_155->GetZaxis()->SetTitleOffset(1);
   st_stack_155->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_155);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,0.5998113);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,0.7135734);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,0.3957251);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,0.2677807);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,0.1725834);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,0.05854744);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,0.01626094);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,0.002499098);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,0.04118895);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,0.04443204);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,0.03334272);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,0.02743725);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,0.04393201);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,0.01250397);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,0.006745216);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,0.002499098);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(907);

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
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,0.2310651);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,0.2512077);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,0.1247886);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,0.08160034);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,0.04971735);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,0.02202416);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,0.004306435);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,0.00137295);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,0.000489912);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,0.001051532);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,0.0003035629);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.0001447381);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,0.009265449);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,0.01005003);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,0.006641397);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,0.005395535);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,0.005214374);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,0.002907876);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,0.001255173);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,0.0006882348);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.0003561972);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,0.0006091153);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.0003035629);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.0001447381);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(2258);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
