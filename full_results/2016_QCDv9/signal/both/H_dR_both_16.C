#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.353788,-0.2194098,7.264125,1.609005);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetFillStyle(4000);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15709);
   H_dR_both_16->SetRightMargin(0.1234783);
   H_dR_both_16->SetBottomMargin(0.12);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.426164);
   
   TH1F *st_stack_133 = new TH1F("st_stack_133","",30,0,6);
   st_stack_133->SetMinimum(0);
   st_stack_133->SetMaximum(1.426164);
   st_stack_133->SetDirectory(0);
   st_stack_133->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_133->SetLineColor(ci);
   st_stack_133->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_133->GetXaxis()->SetRange(1,31);
   st_stack_133->GetXaxis()->SetLabelFont(42);
   st_stack_133->GetXaxis()->SetTitleOffset(1);
   st_stack_133->GetXaxis()->SetTitleFont(42);
   st_stack_133->GetYaxis()->SetTitle("Events/0.2");
   st_stack_133->GetYaxis()->SetLabelFont(42);
   st_stack_133->GetYaxis()->SetTitleSize(0.037);
   st_stack_133->GetYaxis()->SetTitleFont(42);
   st_stack_133->GetZaxis()->SetLabelFont(42);
   st_stack_133->GetZaxis()->SetTitleOffset(1);
   st_stack_133->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_133);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,0.1587639);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,0.290757);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,0.3269338);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,0.4091681);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,0.5574319);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,0.4812708);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,0.5215358);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,0.5619523);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,0.5395428);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,0.5827267);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,0.6004808);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,0.5989471);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,0.7236099);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,0.6607697);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,0.2747233);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,0.1452462);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,0.07359352);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,0.06998701);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,0.0343918);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,0.01518817);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,0.02541498);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,0.01097717);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,0.001561075);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,0.005916441);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,0.003031947);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,0.01559592);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,0.02112147);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,0.02272166);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,0.02528748);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,0.02982743);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,0.02780265);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,0.02817281);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,0.02952545);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,0.02896971);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,0.03041892);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,0.03050211);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,0.03056107);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,0.03335555);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,0.03203448);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,0.02070678);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,0.0147927);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,0.01048086);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,0.01016954);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,0.007061462);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,0.004775333);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,0.006162689);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,0.003918126);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,0.001455521);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,0.002959386);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,0.002146872);
   VbbHcc_both_H_dR_stack_1->SetEntries(5612);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,0.0001892188);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,0.07892113);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,0.1349994);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,0.1435233);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,0.1881611);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,0.2084399);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,0.218765);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,0.2004626);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,0.1800715);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,0.1756855);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,0.1782081);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,0.1878459);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,0.2015817);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,0.2271658);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,0.2240985);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,0.1083634);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,0.07038681);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,0.04533151);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,0.02636817);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,0.01613685);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,0.01210197);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,0.008509539);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,0.004617183);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,0.00319027);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.0007888857);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.0007168473);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,0.000533292);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,0.0001892188);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,0.003852666);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,0.005053491);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,0.005210556);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,0.005966692);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,0.006282129);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,0.006450119);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,0.006172132);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,0.005847908);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,0.005767492);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,0.005802855);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,0.00596839);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,0.006156432);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,0.006552042);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,0.006511117);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,0.004519127);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,0.003631705);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,0.002905968);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,0.00222815);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,0.001726451);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.001470445);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.001256938);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.0009266207);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.0007733202);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.0003576733);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.0003598525);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.0003083126);
   VbbHcc_both_H_dR_stack_2->SetEntries(16360);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","ZHcc","F");

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
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
