#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_18_logY()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.310117,-0.1430565,7.029799,1.049081);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetFillStyle(4000);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLogy();
   H_dR_both_18->SetLeftMargin(0.15709);
   H_dR_both_18->SetRightMargin(0.1234783);
   H_dR_both_18->SetBottomMargin(0.12);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_151 = new TH1F("st_stack_151","",30,0,6);
   st_stack_151->SetMinimum(-2.483618e+09);
   st_stack_151->SetMaximum(-0.894934);
   st_stack_151->SetDirectory(0);
   st_stack_151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_151->SetLineColor(ci);
   st_stack_151->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_151->GetXaxis()->SetRange(1,31);
   st_stack_151->GetXaxis()->SetLabelFont(42);
   st_stack_151->GetXaxis()->SetTitleOffset(1);
   st_stack_151->GetXaxis()->SetTitleFont(42);
   st_stack_151->GetYaxis()->SetTitle("Event/0.2");
   st_stack_151->GetYaxis()->SetLabelFont(42);
   st_stack_151->GetYaxis()->SetTitleSize(0.037);
   st_stack_151->GetYaxis()->SetTitleFont(42);
   st_stack_151->GetZaxis()->SetLabelFont(42);
   st_stack_151->GetZaxis()->SetTitleOffset(1);
   st_stack_151->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_151);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,0.1562862);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,0.3418877);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,0.4478807);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,0.6267689);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,0.5583707);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,0.4599082);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,0.3965382);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,0.2945189);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,0.3030847);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,0.3136083);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,0.3094531);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,0.3560697);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,0.3822483);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,0.3852103);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,0.1375113);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,0.07036023);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,0.04852451);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,0.02665417);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,0.01281779);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,0.01577758);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,0.005382731);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,0.007327691);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,0.003592207);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,0.0175305);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,0.0291268);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,0.03012051);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,0.04662088);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,0.03342128);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,0.03501121);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,0.02728643);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,0.02366758);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,0.02395133);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,0.02462132);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,0.02445527);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,0.02926663);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,0.02676496);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,0.02870555);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,0.01583722);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,0.0113187);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,0.009823869);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,0.00672093);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,0.004616094);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,0.005314934);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,0.003126042);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,0.003360712);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,0.002541167);
   VbbHcc_both_H_dR_stack_1->SetEntries(3234);

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
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,0.06148657);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,0.1251636);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,0.1820129);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,0.2588188);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,0.2702667);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,0.2259674);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,0.1794608);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,0.1395802);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,0.1134021);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,0.1216948);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,0.1236399);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,0.1393023);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,0.1579728);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,0.1529757);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,0.07490476);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,0.04759553);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,0.0298438);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,0.01628079);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,0.01456617);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,0.006493734);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,0.005181379);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,0.0019011);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,0.003384908);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.000552028);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.0005101173);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,0.0003052025);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,0.003890703);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,0.005717396);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,0.006720384);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,0.009346355);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,0.008820885);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,0.007458225);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,0.006713973);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,0.006086659);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,0.005330527);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,0.005485834);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,0.005543497);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,0.00590559);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,0.006412084);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,0.006611279);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,0.004950252);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,0.00391254);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,0.002685547);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,0.00203975);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,0.001955083);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.001266127);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.00114205);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.0006445067);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.0009260996);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.0003918928);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.0003627924);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.0003052025);
   VbbHcc_both_H_dR_stack_2->SetEntries(10352);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
