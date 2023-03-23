#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_all()
{
//=========Macro generated from canvas: H_dR_algo_all/H_dR_algo_all
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_all = new TCanvas("H_dR_algo_all", "H_dR_algo_all",0,0,600,600);
   H_dR_algo_all->SetHighLightColor(2);
   H_dR_algo_all->Range(-1.353788,-0.07381602,7.264125,0.5413175);
   H_dR_algo_all->SetFillColor(0);
   H_dR_algo_all->SetFillStyle(4000);
   H_dR_algo_all->SetBorderMode(0);
   H_dR_algo_all->SetBorderSize(2);
   H_dR_algo_all->SetLeftMargin(0.15709);
   H_dR_algo_all->SetRightMargin(0.1234783);
   H_dR_algo_all->SetBottomMargin(0.12);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.4798041);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",30,0,6);
   st_stack_120->SetMinimum(0);
   st_stack_120->SetMaximum(0.4798041);
   st_stack_120->SetDirectory(0);
   st_stack_120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_120->SetLineColor(ci);
   st_stack_120->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_120->GetXaxis()->SetRange(1,31);
   st_stack_120->GetXaxis()->SetLabelFont(42);
   st_stack_120->GetXaxis()->SetTitleOffset(1);
   st_stack_120->GetXaxis()->SetTitleFont(42);
   st_stack_120->GetYaxis()->SetTitle("Event/0.2");
   st_stack_120->GetYaxis()->SetLabelFont(42);
   st_stack_120->GetYaxis()->SetTitleSize(0.037);
   st_stack_120->GetYaxis()->SetTitleFont(42);
   st_stack_120->GetZaxis()->SetLabelFont(42);
   st_stack_120->GetZaxis()->SetTitleOffset(1);
   st_stack_120->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_120);
   
   
   TH1D *VbbHcc_algo_H_dR_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,0.06011749);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,0.1438042);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,0.2188222);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,0.3083784);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,0.2385483);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,0.1939575);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,0.1121604);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,0.06309277);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,0.06940738);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,0.04700843);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,0.07265672);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,0.03631128);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,0.05041476);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,0.06951566);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,0.03621515);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,0.01712422);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,0.007076542);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,0.006665713);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,0.007271219);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,0.0120807);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,0.01941016);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,0.02371666);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,0.04771694);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,0.02434973);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,0.0225821);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,0.01691485);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,0.01203256);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,0.01279893);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,0.01102191);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,0.0136335);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,0.00905174);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,0.01111958);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,0.01299355);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,0.009688027);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,0.00661501);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,0.004397285);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,0.003904388);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,0.00429134);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(781);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,0.01449017);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,0.03498485);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,0.06667219);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,0.08985901);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,0.09083368);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,0.07338689);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,0.04513019);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,0.02741739);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,0.02097265);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,0.01680061);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,0.02181922);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,0.02174417);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,0.02204006);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,0.01876633);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,0.009937136);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,0.009740125);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,0.004968167);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,0.002820098);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,0.002193949);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,0.001345128);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(23,0.0006236466);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,0.002212971);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,0.00325429);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,0.004585396);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,0.006175628);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,0.005491092);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,0.00486621);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,0.00383834);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,0.002953811);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,0.002567584);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,0.002284562);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,0.002660253);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,0.002569603);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,0.002740526);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,0.002394202);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,0.001745811);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,0.001833543);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,0.001263946);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,0.000920361);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,0.0008502093);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,0.0006851562);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(23,0.0004720689);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(2012);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_all->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->SetSelected(H_dR_algo_all);
}
