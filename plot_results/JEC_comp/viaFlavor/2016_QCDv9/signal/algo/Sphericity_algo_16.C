#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2183529,-0.02040659,1.171633,0.1496483);
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
   st->SetMaximum(0.1326428);
   
   TH1F *st_stack_153 = new TH1F("st_stack_153","",25,0,1);
   st_stack_153->SetMinimum(0);
   st_stack_153->SetMaximum(0.1326428);
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
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,0.02993845);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,0.07351249);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,0.08272475);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,0.06370813);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,0.05751919);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,0.01832225);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,0.005862993);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,0.008920595);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,0.005799042);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,0.003216674);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,0.005844462);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,0.002931423);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,0.003827759);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,0.009490559);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,0.01475468);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,0.01565151);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,0.01364069);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,0.01297552);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,0.007491674);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,0.004145763);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,0.005151337);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,0.004101696);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,0.003216674);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,0.004156713);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,0.002931423);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(124);

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
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,0.002641048);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,0.01811174);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,0.02452342);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,0.02736879);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,0.0196518);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,0.01051611);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,0.005899884);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,0.002814939);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,0.001595309);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,0.0007570616);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,0.0007708547);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,0.0008135517);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,0.001131239);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,0.0008070135);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.0003868693);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,0.0003120004);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.0003915395);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,0.001004821);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,0.002615994);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,0.003044875);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,0.003252933);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,0.002720247);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,0.002030037);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,0.001479769);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,0.001065313);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.0007987496);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,0.0005388557);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.000545088);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.0005756753);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.0006570305);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.0005709076);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.0003868693);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.0003120004);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.0003915395);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(317);

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
