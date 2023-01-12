#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_alljet_16()
{
//=========Macro generated from canvas: H_pt_alljet_16/H_pt_alljet_16
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *H_pt_alljet_16 = new TCanvas("H_pt_alljet_16", "H_pt_alljet_16",0,0,600,600);
   H_pt_alljet_16->SetHighLightColor(2);
   H_pt_alljet_16->Range(37.97653,-66.1238,1705.96,484.9078);
   H_pt_alljet_16->SetFillColor(0);
   H_pt_alljet_16->SetFillStyle(4000);
   H_pt_alljet_16->SetBorderMode(0);
   H_pt_alljet_16->SetBorderSize(2);
   H_pt_alljet_16->SetLeftMargin(0.15709);
   H_pt_alljet_16->SetRightMargin(0.1234783);
   H_pt_alljet_16->SetBottomMargin(0.12);
   H_pt_alljet_16->SetFrameFillStyle(1000);
   H_pt_alljet_16->SetFrameBorderMode(0);
   H_pt_alljet_16->SetFrameFillStyle(1000);
   H_pt_alljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(429.8047);
   
   TH1F *st_stack_181 = new TH1F("st_stack_181","",40,0,2000);
   st_stack_181->SetMinimum(0);
   st_stack_181->SetMaximum(429.8047);
   st_stack_181->SetDirectory(0);
   st_stack_181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_181->SetLineColor(ci);
   st_stack_181->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_181->GetXaxis()->SetRange(7,30);
   st_stack_181->GetXaxis()->SetLabelFont(42);
   st_stack_181->GetXaxis()->SetTitleOffset(1);
   st_stack_181->GetXaxis()->SetTitleFont(42);
   st_stack_181->GetYaxis()->SetTitle("Events/50.0");
   st_stack_181->GetYaxis()->SetLabelFont(42);
   st_stack_181->GetYaxis()->SetTitleSize(0.037);
   st_stack_181->GetYaxis()->SetTitleFont(42);
   st_stack_181->GetZaxis()->SetLabelFont(42);
   st_stack_181->GetZaxis()->SetTitleOffset(1);
   st_stack_181->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_181);
   
   
   TH1D *VbbHcc_alljet_H_pt_stack_1 = new TH1D("VbbHcc_alljet_H_pt_stack_1","",40,0,2000);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(1,286.5364);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(2,237.4713);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(3,55.04128);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(4,12.82365);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(5,4.237267);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(6,1.756527);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(7,0.7400309);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(8,0.3423606);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(9,0.197838);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(10,0.07914635);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(11,0.03706705);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(12,0.02095151);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(13,0.01578677);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(14,0.00545045);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(15,0.003216199);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(16,0.01130955);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(17,0.001731172);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(18,0.003279265);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(19,0.001514127);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(20,0.003130023);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(25,0.001119176);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(1,0.6839383);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(2,0.6168361);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(3,0.2913555);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(4,0.139461);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(5,0.07993077);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(6,0.05135137);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(7,0.03332294);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(8,0.02265731);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(9,0.01717331);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(10,0.01078832);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(11,0.007434751);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(12,0.005605652);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(13,0.004840041);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(14,0.002785277);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(15,0.002278073);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(16,0.004027443);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(17,0.001731172);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(18,0.002320469);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(19,0.001514127);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(20,0.00221374);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(25,0.001119176);
   VbbHcc_alljet_H_pt_stack_1->SetEntries(451639);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_pt_stack_1,"");
   
   TH1D *VbbHcc_alljet_H_pt_stack_2 = new TH1D("VbbHcc_alljet_H_pt_stack_2","",40,0,2000);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(1,25.21663);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(2,33.21978);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(3,15.46059);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(4,6.489706);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(5,2.876238);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(6,1.323118);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(7,0.6623482);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(8,0.3441867);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(9,0.1962529);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(10,0.09843281);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(11,0.05448439);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(12,0.03747821);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(13,0.01795568);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(14,0.01088694);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(15,0.006743137);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(16,0.004474112);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(17,0.002600377);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(18,0.001546761);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(19,0.002236928);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(20,0.0008669473);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(21,0.0005631651);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(22,0.0002127011);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(23,0.000534751);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(24,0.0001480239);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(25,5.57783e-05);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(26,0.000215911);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(30,0.0001867829);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(32,1.371525e-05);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(1,0.06924288);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(2,0.07941082);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(3,0.05403888);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(4,0.03492895);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(5,0.02323471);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(6,0.01574722);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(7,0.01114986);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(8,0.008032353);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(9,0.006066263);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(10,0.00428956);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(11,0.003208514);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(12,0.002633788);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(13,0.001838416);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(14,0.001416394);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(15,0.001116434);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(16,0.0009197149);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(17,0.0006759388);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(18,0.0005470093);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(19,0.0006549145);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(20,0.0003995475);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(21,0.0003252119);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(22,0.0002127011);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(23,0.0003151165);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(24,0.0001480239);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(25,5.57783e-05);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(26,0.000215911);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(30,0.0001867829);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(32,1.371525e-05);
   VbbHcc_alljet_H_pt_stack_2->SetEntries(488414);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_H_pt_stack_1","ZHcc","F");

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
   H_pt_alljet_16->Modified();
   H_pt_alljet_16->cd();
   H_pt_alljet_16->SetSelected(H_pt_alljet_16);
}
