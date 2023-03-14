#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_signal_17()
{
//=========Macro generated from canvas: CvB_jets_signal_17/CvB_jets_signal_17
//=========  (Wed Mar  1 14:06:11 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_signal_17 = new TCanvas("CvB_jets_signal_17", "CvB_jets_signal_17",0,0,600,600);
   CvB_jets_signal_17->SetHighLightColor(2);
   CvB_jets_signal_17->Range(-0.2183529,-111.355,1.171633,816.6032);
   CvB_jets_signal_17->SetFillColor(0);
   CvB_jets_signal_17->SetFillStyle(4000);
   CvB_jets_signal_17->SetBorderMode(0);
   CvB_jets_signal_17->SetBorderSize(2);
   CvB_jets_signal_17->SetLeftMargin(0.15709);
   CvB_jets_signal_17->SetRightMargin(0.1234783);
   CvB_jets_signal_17->SetBottomMargin(0.12);
   CvB_jets_signal_17->SetFrameFillStyle(1000);
   CvB_jets_signal_17->SetFrameBorderMode(0);
   CvB_jets_signal_17->SetFrameFillStyle(1000);
   CvB_jets_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(723.8074);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",20,0,1);
   st_stack_21->SetMinimum(0);
   st_stack_21->SetMaximum(723.8074);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_21->GetXaxis()->SetRange(1,20);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetTitleOffset(1);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/0.05");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetTitleSize(0.037);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetTitleOffset(1);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,72.97564);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,14.67135);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,11.75866);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,12.32759);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,13.79638);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,14.69861);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,16.45274);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,18.63402);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,22.879);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,27.49399);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,33.31446);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,40.42349);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,54.87167);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,71.10318);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,98.21818);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,138.9926);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,214.3702);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,356.9931);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,398.5544);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,86.20488);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,0.3743614);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,0.16749);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,0.1502165);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,0.154213);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,0.1623168);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,0.1674995);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,0.1776988);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,0.1892943);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,0.2100825);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,0.2300049);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,0.2532242);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,0.2783831);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,0.3242107);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,0.3695451);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,0.4334235);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,0.5151773);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,0.6396447);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,0.8252071);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,0.8741449);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,0.407301);
   VbbHcc_jets_CvB_stack_1->SetEntries(1021879);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_CvB_stack_2 = new TH1D("VbbHcc_jets_CvB_stack_2","",20,0,1);
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,17.0836);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,3.167275);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,2.457912);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,2.496884);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,2.63285);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,2.879666);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,3.128161);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,3.54108);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,4.378987);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,5.328658);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,6.243385);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,7.643324);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,10.30196);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,13.69363);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,19.05732);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,27.79581);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,44.83233);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,79.38306);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,83.98379);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,19.97357);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,0.06412801);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,0.02760727);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,0.0243169);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,0.02454806);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,0.02516432);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,0.02631616);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,0.02740932);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,0.02920714);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,0.03246489);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,0.03574079);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,0.03877094);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,0.04284232);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,0.04969861);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,0.05734126);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,0.06762563);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,0.08165259);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,0.1037327);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,0.1381587);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,0.1422829);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,0.06941617);
   VbbHcc_jets_CvB_stack_2->SetEntries(1564569);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvB_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvB_stack_1","ZHcc","F");

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
   CvB_jets_signal_17->Modified();
   CvB_jets_signal_17->cd();
   CvB_jets_signal_17->SetSelected(CvB_jets_signal_17);
}
