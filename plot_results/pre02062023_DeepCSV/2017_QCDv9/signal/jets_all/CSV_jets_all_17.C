#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_17()
{
//=========Macro generated from canvas: CSV_jets_all_17/CSV_jets_all_17
//=========  (Mon Dec 19 11:03:48 2022) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_17 = new TCanvas("CSV_jets_all_17", "CSV_jets_all_17",0,0,600,600);
   CSV_jets_all_17->SetHighLightColor(2);
   CSV_jets_all_17->Range(-0.2183529,-727.0623,1.171633,5331.79);
   CSV_jets_all_17->SetFillColor(0);
   CSV_jets_all_17->SetFillStyle(4000);
   CSV_jets_all_17->SetBorderMode(0);
   CSV_jets_all_17->SetBorderSize(2);
   CSV_jets_all_17->SetLeftMargin(0.15709);
   CSV_jets_all_17->SetRightMargin(0.1234783);
   CSV_jets_all_17->SetBottomMargin(0.12);
   CSV_jets_all_17->SetFrameFillStyle(1000);
   CSV_jets_all_17->SetFrameBorderMode(0);
   CSV_jets_all_17->SetFrameFillStyle(1000);
   CSV_jets_all_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4725.905);
   
   TH1F *st_stack_110 = new TH1F("st_stack_110","",20,0,1);
   st_stack_110->SetMinimum(0);
   st_stack_110->SetMaximum(4725.905);
   st_stack_110->SetDirectory(0);
   st_stack_110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_110->SetLineColor(ci);
   st_stack_110->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_110->GetXaxis()->SetRange(1,20);
   st_stack_110->GetXaxis()->SetLabelFont(42);
   st_stack_110->GetXaxis()->SetTitleOffset(1);
   st_stack_110->GetXaxis()->SetTitleFont(42);
   st_stack_110->GetYaxis()->SetTitle("Events/0.05");
   st_stack_110->GetYaxis()->SetLabelFont(42);
   st_stack_110->GetYaxis()->SetTitleSize(0.037);
   st_stack_110->GetYaxis()->SetTitleFont(42);
   st_stack_110->GetZaxis()->SetLabelFont(42);
   st_stack_110->GetZaxis()->SetTitleOffset(1);
   st_stack_110->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_110);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,2713.978);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,1351.368);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,270.0895);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,143.1094);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,99.37287);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,74.48479);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,60.38736);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,49.7282);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,39.84782);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,35.06439);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,31.30659);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,27.38866);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,23.57899);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,21.96148);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,19.66605);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,19.297);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,18.0918);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,18.6215);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,23.06966);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,103.1616);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,2.228252);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,1.56882);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,0.7038591);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,0.5131904);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,0.4277763);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,0.3709197);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,0.3339876);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,0.3036099);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,0.2714683);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,0.2551308);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,0.2404491);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,0.2245594);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,0.2091391);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,0.2017134);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,0.1899281);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,0.1887062);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,0.183295);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,0.1850828);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,0.2061245);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,0.436214);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(3671272);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CSV_stack_2 = new TH1D("VbbHcc_jets_all_CSV_stack_2","",20,0,1);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,436.6254);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,192.7418);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,39.67565);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,21.40182);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,14.95839);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,11.21268);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,8.999178);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,7.402717);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,6.077109);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,5.181356);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,4.798779);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,4.201094);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,3.58916);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,3.27499);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,3.06053);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,2.9845);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,2.853215);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,2.958922);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,3.787611);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,19.29795);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,0.3250766);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,0.2146739);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,0.09787051);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,0.07205089);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,0.06025584);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,0.05217815);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,0.04676873);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,0.04245061);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,0.03845927);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,0.03548338);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,0.03416697);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,0.03198191);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,0.02958958);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,0.02823812);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,0.02730643);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,0.02698399);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,0.02638186);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,0.02685958);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,0.03044025);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,0.06878067);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(3862038);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_all_17->Modified();
   CSV_jets_all_17->cd();
   CSV_jets_all_17->SetSelected(CSV_jets_all_17);
}
