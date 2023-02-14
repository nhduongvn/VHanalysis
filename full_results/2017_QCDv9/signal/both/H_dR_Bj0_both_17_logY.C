#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_both_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_both_17/H_dR_Bj0_both_17
//=========  (Tue Feb 14 10:43:08 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_both_17 = new TCanvas("H_dR_Bj0_both_17", "H_dR_Bj0_both_17",0,0,600,600);
   H_dR_Bj0_both_17->SetHighLightColor(2);
   H_dR_Bj0_both_17->Range(-1.310117,0.4680477,7.029799,2.864824);
   H_dR_Bj0_both_17->SetFillColor(0);
   H_dR_Bj0_both_17->SetFillStyle(4000);
   H_dR_Bj0_both_17->SetBorderMode(0);
   H_dR_Bj0_both_17->SetBorderSize(2);
   H_dR_Bj0_both_17->SetLogy();
   H_dR_Bj0_both_17->SetLeftMargin(0.15709);
   H_dR_Bj0_both_17->SetRightMargin(0.1234783);
   H_dR_Bj0_both_17->SetBottomMargin(0.12);
   H_dR_Bj0_both_17->SetFrameFillStyle(1000);
   H_dR_Bj0_both_17->SetFrameBorderMode(0);
   H_dR_Bj0_both_17->SetFrameFillStyle(1000);
   H_dR_Bj0_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(323.9676);
   
   TH1F *st_stack_170 = new TH1F("st_stack_170","",30,0,6);
   st_stack_170->SetMinimum(5.697192);
   st_stack_170->SetMaximum(421.8383);
   st_stack_170->SetDirectory(0);
   st_stack_170->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_170->SetLineColor(ci);
   st_stack_170->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_170->GetXaxis()->SetRange(1,30);
   st_stack_170->GetXaxis()->SetLabelFont(42);
   st_stack_170->GetXaxis()->SetTitleOffset(1);
   st_stack_170->GetXaxis()->SetTitleFont(42);
   st_stack_170->GetYaxis()->SetTitle("Events/0.2");
   st_stack_170->GetYaxis()->SetLabelFont(42);
   st_stack_170->GetYaxis()->SetTitleSize(0.037);
   st_stack_170->GetYaxis()->SetTitleFont(42);
   st_stack_170->GetZaxis()->SetLabelFont(42);
   st_stack_170->GetZaxis()->SetTitleOffset(1);
   st_stack_170->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_170);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,0.4614333);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,1.942129);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,2.458871);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,2.054326);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,1.752499);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,1.357436);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,1.136201);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,0.9181259);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,0.736397);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,0.5657299);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,0.4756556);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,0.390322);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,0.3555565);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,0.3113095);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,0.3492355);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,0.2228154);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,0.1738276);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,0.1169386);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,0.06321005);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,0.05214829);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,0.02370377);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,0.01422226);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,0.01106176);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,0.01422226);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,0.006321005);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,0.009481507);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(28,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(30,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(31,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,0.02700334);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,0.05539902);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,0.06233485);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,0.05697677);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,0.05262497);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,0.04631511);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,0.04237313);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,0.03809028);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,0.03411293);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,0.02989975);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,0.02741633);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,0.0248356);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,0.02370377);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,0.02217988);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,0.02349212);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,0.01876444);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,0.01657381);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,0.01359383);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,0.009994386);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,0.009077852);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,0.006120286);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,0.004740753);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,0.004180952);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,0.004740753);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,0.003870809);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(28,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(30,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(31,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(10111);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,0.1914124);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,0.7017071);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,0.7808049);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,0.6753412);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,0.5460029);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,0.4208167);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,0.3105781);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,0.2397845);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,0.1930733);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,0.1540434);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,0.1222797);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,0.1181276);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,0.09508339);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,0.09632902);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,0.07743691);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,0.07764452);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,0.04505043);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,0.03238648);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,0.02096817);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,0.01702366);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,0.008304226);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,0.005190141);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,0.004359719);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,0.00332169);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,0.002698874);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.001245634);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.0004152113);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,0.000622817);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(30,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(31,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,0.006303832);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,0.01206973);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,0.01273183);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,0.0118408);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,0.01064675);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,0.009346867);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,0.008029805);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,0.007055539);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,0.006331122);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,0.005655111);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,0.005038449);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,0.004952167);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,0.004442955);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,0.004471963);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,0.004009531);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,0.004014902);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,0.003058222);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,0.002592994);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,0.002086411);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,0.001879949);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.001313013);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.001038028);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.0009513686);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.0008304226);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.0007485328);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.0005085279);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.0002935987);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.0003595835);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(30,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(31,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(23807);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_both_17->Modified();
   H_dR_Bj0_both_17->cd();
   H_dR_Bj0_both_17->SetSelected(H_dR_Bj0_both_17);
}
