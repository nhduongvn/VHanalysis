#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Tue Feb 14 16:02:04 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2183529,-1.205996,1.171633,11.17433);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetFillStyle(4000);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15709);
   Aplanarity_both_18->SetRightMargin(0.1234783);
   Aplanarity_both_18->SetBottomMargin(0.12);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.197285e+09);
   
   TH1F *st_stack_191 = new TH1F("st_stack_191","",50,0,1);
   st_stack_191->SetMinimum(1.903895);
   st_stack_191->SetMaximum(8.635728e+09);
   st_stack_191->SetDirectory(0);
   st_stack_191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_191->SetLineColor(ci);
   st_stack_191->GetXaxis()->SetTitle("Aplanarity");
   st_stack_191->GetXaxis()->SetRange(1,50);
   st_stack_191->GetXaxis()->SetLabelFont(42);
   st_stack_191->GetXaxis()->SetTitleOffset(1);
   st_stack_191->GetXaxis()->SetTitleFont(42);
   st_stack_191->GetYaxis()->SetTitle("Events/0.02");
   st_stack_191->GetYaxis()->SetLabelFont(42);
   st_stack_191->GetYaxis()->SetTitleSize(0.037);
   st_stack_191->GetYaxis()->SetTitleFont(42);
   st_stack_191->GetZaxis()->SetLabelFont(42);
   st_stack_191->GetZaxis()->SetTitleOffset(1);
   st_stack_191->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_191);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,3.065015e+07);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,1.373921e+07);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,7158543);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,3813559);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,2196819);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,1479389);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,981911);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,646552.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,518327.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,370387.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,171247.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,129325.2);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,73133.41);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,36803.06);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,58247.42);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,17696.15);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,32106.3);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,4949.599);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,2625.85);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,2808.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,2944.883);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,446964.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,342648.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,232572.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,167316.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,113606.3);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,103926.8);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,86157.99);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,72722.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,84423.33);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,62004.98);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,36502.09);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,35823.48);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,11775.12);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,7741.83);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,26009.69);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,6045.001);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,24408.92);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,3074.674);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,1533.519);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,2362.279);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,2866.499);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(497710);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
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
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(0,0.4129542);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,1322704);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,927300);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,619241.2);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,426032.4);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,300141.5);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,214674.7);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,155122.5);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,112682.7);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,81778.86);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,59071.45);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,42503.32);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,30061.33);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,21076.88);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,14422.72);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,9684.12);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,6282.398);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,3935.714);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,2310.448);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,1288.671);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,647.651);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,276.055);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,107.718);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,26.60843);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(24,4.73777);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(25,0.1580879);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(0,0.1813495);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,357.1374);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,298.3965);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,243.7733);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,202.9193);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,170.3389);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,144.2655);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,122.1262);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,104.1642);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,88.61647);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,75.66036);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,63.87692);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,53.31364);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,45.84358);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,37.45916);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,31.09672);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,24.62656);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,19.64548);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,15.20152);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,10.6652);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,7.835052);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,4.913051);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,3.030327);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,1.509403);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(24,0.6270733);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(25,0.1143575);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(5.594992e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
