#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Fri Mar 10 11:27:14 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2183529,-0.2601004,1.171633,0.8470247);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetFillStyle(4000);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
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
   st->SetMinimum(1);
   st->SetMaximum(4.795872);
   
   TH1F *st_stack_125 = new TH1F("st_stack_125","",50,0,1);
   st_stack_125->SetMinimum(0.7460272);
   st_stack_125->SetMaximum(5.448942);
   st_stack_125->SetDirectory(0);
   st_stack_125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_125->SetLineColor(ci);
   st_stack_125->GetXaxis()->SetTitle("Aplanarity");
   st_stack_125->GetXaxis()->SetRange(1,50);
   st_stack_125->GetXaxis()->SetLabelFont(42);
   st_stack_125->GetXaxis()->SetTitleOffset(1);
   st_stack_125->GetXaxis()->SetTitleFont(42);
   st_stack_125->GetYaxis()->SetTitle("Event/0.02");
   st_stack_125->GetYaxis()->SetLabelFont(42);
   st_stack_125->GetYaxis()->SetTitleSize(0.037);
   st_stack_125->GetYaxis()->SetTitleFont(42);
   st_stack_125->GetZaxis()->SetLabelFont(42);
   st_stack_125->GetZaxis()->SetTitleOffset(1);
   st_stack_125->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_125);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,2.978421);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,2.087145);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,1.188856);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,0.8670616);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.6086377);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.3695676);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,0.2670345);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.2297304);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.1347607);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,0.1089142);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,0.09317123);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,0.07396401);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,0.06795623);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,0.03124607);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,0.02977611);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,0.009088192);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,0.005186929);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(18,0.003218024);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.0951322);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.07947978);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.0601758);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.05069773);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.04326206);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.03298061);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,0.02907769);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.02690977);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.02125588);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,0.0183644);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,0.01654537);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,0.01503104);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,0.01409796);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,0.00934035);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,0.009428865);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,0.0052581);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,0.003710581);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(18,0.003218024);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(3307);

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
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,1.002152);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,0.7901811);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.5276205);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.3631911);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.2438846);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.1683835);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.1109252);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.07125768);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.05782881);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.03647523);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.02426929);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.01655146);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.01267256);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.001986923);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.003150686);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.002518103);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,0.001136734);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.0008535871);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,0.000383191);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.01947393);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.0173528);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.01418138);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.011822);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.00969962);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.008045407);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.006557371);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.005236886);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.004711794);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.003772362);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.003068796);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.002516654);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.00218983);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.0008897597);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.00111565);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.0009728781);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,0.000656311);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.0006036139);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,0.000383191);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(9173);

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
