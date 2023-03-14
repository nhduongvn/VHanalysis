#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2183529,-0.04536024,1.171633,0.3326417);
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
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_125 = new TH1F("st_stack_125","",50,0,1);
   st_stack_125->SetMinimum(-2.338743e+09);
   st_stack_125->SetMaximum(-0.3117795);
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
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,0.2180933);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,0.141699);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,0.09749428);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,0.05996763);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.04932075);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.03144157);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,0.03601046);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.01775974);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.0109385);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,0.01550385);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,0.01084061);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,0.006461541);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,0.008500778);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,0.006497359);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.02205105);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.01754691);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.0146677);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.01152154);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.01033954);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.008411885);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,0.008841035);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.006287321);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.00596329);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,0.005865637);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,0.004860911);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,0.003730727);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,0.004251103);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,0.00377574);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
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
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,0.06270813);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,0.05276686);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.03667197);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.0302686);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.01935689);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.01337754);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.0116791);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.007027748);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.005585225);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.00320078);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.00160969);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.001740315);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.001278018);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.004188957);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.003871721);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.003242478);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.002962035);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.002361478);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.001952243);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.001850052);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.00141015);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.001255631);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.0009661465);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.000658308);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.0007119226);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.0005970265);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
