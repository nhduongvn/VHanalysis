#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_16()
{
//=========Macro generated from canvas: CSV_jets_16/CSV_jets_16
//=========  (Mon Dec 19 11:03:46 2022) by ROOT version 6.26/06
   TCanvas *CSV_jets_16 = new TCanvas("CSV_jets_16", "CSV_jets_16",0,0,600,600);
   CSV_jets_16->SetHighLightColor(2);
   CSV_jets_16->Range(-0.2183529,-323.5412,1.171633,2372.636);
   CSV_jets_16->SetFillColor(0);
   CSV_jets_16->SetFillStyle(4000);
   CSV_jets_16->SetBorderMode(0);
   CSV_jets_16->SetBorderSize(2);
   CSV_jets_16->SetLeftMargin(0.15709);
   CSV_jets_16->SetRightMargin(0.1234783);
   CSV_jets_16->SetBottomMargin(0.12);
   CSV_jets_16->SetFrameFillStyle(1000);
   CSV_jets_16->SetFrameBorderMode(0);
   CSV_jets_16->SetFrameFillStyle(1000);
   CSV_jets_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2103.018);
   
   TH1F *st_stack_5 = new TH1F("st_stack_5","",20,0,1);
   st_stack_5->SetMinimum(0);
   st_stack_5->SetMaximum(2103.018);
   st_stack_5->SetDirectory(0);
   st_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_5->SetLineColor(ci);
   st_stack_5->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_5->GetXaxis()->SetRange(1,20);
   st_stack_5->GetXaxis()->SetLabelFont(42);
   st_stack_5->GetXaxis()->SetTitleOffset(1);
   st_stack_5->GetXaxis()->SetTitleFont(42);
   st_stack_5->GetYaxis()->SetTitle("Events/0.05");
   st_stack_5->GetYaxis()->SetLabelFont(42);
   st_stack_5->GetYaxis()->SetTitleSize(0.037);
   st_stack_5->GetYaxis()->SetTitleFont(42);
   st_stack_5->GetZaxis()->SetLabelFont(42);
   st_stack_5->GetZaxis()->SetTitleOffset(1);
   st_stack_5->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_5);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,1172.526);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,198.5392);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,94.83685);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,60.65311);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,45.15024);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,35.70684);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,29.63363);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,24.76463);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,20.70788);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,18.094);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,16.4619);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,14.75055);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,12.92052);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,11.82791);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,11.1636);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,10.72924);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,10.54036);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,10.77131);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,14.19081);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,64.07848);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,1.364549);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,0.5605547);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,0.3883137);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,0.3111462);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,0.2680524);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,0.2386179);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,0.2174728);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,0.1981015);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,0.1817617);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,0.1697162);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,0.1618169);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,0.1531805);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,0.1431897);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,0.1369537);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,0.1330013);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,0.1307186);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,0.1295095);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,0.1316384);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,0.15027);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,0.3201062);
   VbbHcc_jets_CSV_stack_1->SetEntries(1384252);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_CSV_stack_2 = new TH1D("VbbHcc_jets_CSV_stack_2","",20,0,1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,229.4859);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,35.99853);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,16.88524);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,10.86592);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,7.949538);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,6.338397);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,5.172575);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,4.32956);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,3.603472);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,3.224245);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,2.939163);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,2.604978);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,2.320695);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,2.16946);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,2.063488);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,2.074915);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,1.964954);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,2.081308);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,2.786505);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,13.57129);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,0.2087728);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,0.08238378);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,0.05645589);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,0.04531844);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,0.03877513);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,0.03462435);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,0.03127929);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,0.02862953);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,0.02611011);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,0.02470091);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,0.0235957);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,0.02221518);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,0.02095856);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,0.02026296);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,0.01978253);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,0.01984015);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,0.01930116);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,0.01986614);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,0.02298055);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,0.05085531);
   VbbHcc_jets_CSV_stack_2->SetEntries(2031837);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CSV_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CSV_stack_1","ZHcc","F");

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
   CSV_jets_16->Modified();
   CSV_jets_16->cd();
   CSV_jets_16->SetSelected(CSV_jets_16);
}
