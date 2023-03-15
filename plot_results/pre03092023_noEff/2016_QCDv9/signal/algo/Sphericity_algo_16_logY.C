#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2183529,-0.01522788,1.171633,0.1116711);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetFillStyle(4000);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
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
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_121 = new TH1F("st_stack_121","",25,0,1);
   st_stack_121->SetMinimum(-2.21591e+09);
   st_stack_121->SetMaximum(-0.1136047);
   st_stack_121->SetDirectory(0);
   st_stack_121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_121->SetLineColor(ci);
   st_stack_121->GetXaxis()->SetTitle("Sphericity");
   st_stack_121->GetXaxis()->SetRange(1,25);
   st_stack_121->GetXaxis()->SetLabelFont(42);
   st_stack_121->GetXaxis()->SetTitleOffset(1);
   st_stack_121->GetXaxis()->SetTitleFont(42);
   st_stack_121->GetYaxis()->SetTitle("Event/0.04");
   st_stack_121->GetYaxis()->SetLabelFont(42);
   st_stack_121->GetYaxis()->SetTitleSize(0.037);
   st_stack_121->GetYaxis()->SetTitleFont(42);
   st_stack_121->GetZaxis()->SetLabelFont(42);
   st_stack_121->GetZaxis()->SetTitleOffset(1);
   st_stack_121->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_121);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,0.001894245);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,0.02967299);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,0.05226035);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,0.03629352);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,0.05717024);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,0.06600752);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,0.07191506);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,0.05139569);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,0.04322489);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,0.04858329);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,0.04367093);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,0.01553461);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,0.04167247);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,0.02553732);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,0.03489746);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,0.03333856);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,0.02409817);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,0.01560729);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,0.01351974);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,0.004235085);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,0.001894245);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,0.008021197);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,0.01049712);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,0.009346274);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,0.01118493);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,0.01209074);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,0.01256458);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,0.01047889);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,0.009712202);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,0.01021449);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,0.009705585);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,0.005879008);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,0.009578465);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,0.008688318);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,0.00879555);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,0.008616621);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,0.007276064);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,0.005823433);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,0.005527542);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,0.003020632);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_1->SetLineColor(ci);
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
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,0.001845741);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,0.008825353);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,0.01496757);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,0.01927255);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,0.01925327);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,0.02261219);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,0.02235276);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,0.02174244);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,0.02076899);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,0.01465396);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,0.01624863);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,0.01562769);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,0.01316693);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,0.007752942);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.006579271);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,0.007475282);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,0.004802073);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.006092002);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.001197166);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.002034059);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,0.0007030509);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,0.001571959);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,0.002033676);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,0.002344715);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,0.002320305);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,0.002531081);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,0.002514663);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,0.002487944);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.002458239);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,0.002058989);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.002177681);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.002126506);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.001925014);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.001496616);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.001359154);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.001472235);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.00116648);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.001306802);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.0005995753);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.000770249);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_2->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
