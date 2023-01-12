#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_17/Z_dR_Bj1_both_17
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_17 = new TCanvas("Z_dR_Bj1_both_17", "Z_dR_Bj1_both_17",0,0,600,600);
   Z_dR_Bj1_both_17->SetHighLightColor(2);
   Z_dR_Bj1_both_17->Range(-1.310117,0.4983758,7.029799,2.745056);
   Z_dR_Bj1_both_17->SetFillColor(0);
   Z_dR_Bj1_both_17->SetFillStyle(4000);
   Z_dR_Bj1_both_17->SetBorderMode(0);
   Z_dR_Bj1_both_17->SetBorderSize(2);
   Z_dR_Bj1_both_17->SetLogy();
   Z_dR_Bj1_both_17->SetLeftMargin(0.15709);
   Z_dR_Bj1_both_17->SetRightMargin(0.1234783);
   Z_dR_Bj1_both_17->SetBottomMargin(0.12);
   Z_dR_Bj1_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_17->SetFrameBorderMode(0);
   Z_dR_Bj1_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(258.4292);
   
   TH1F *st_stack_166 = new TH1F("st_stack_166","",30,0,6);
   st_stack_166->SetMinimum(5.861078);
   st_stack_166->SetMaximum(331.4273);
   st_stack_166->SetDirectory(0);
   st_stack_166->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_166->SetLineColor(ci);
   st_stack_166->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_166->GetXaxis()->SetRange(1,30);
   st_stack_166->GetXaxis()->SetLabelFont(42);
   st_stack_166->GetXaxis()->SetTitleOffset(1);
   st_stack_166->GetXaxis()->SetTitleFont(42);
   st_stack_166->GetYaxis()->SetTitle("Events/0.2");
   st_stack_166->GetYaxis()->SetLabelFont(42);
   st_stack_166->GetYaxis()->SetTitleSize(0.037);
   st_stack_166->GetYaxis()->SetTitleFont(42);
   st_stack_166->GetZaxis()->SetLabelFont(42);
   st_stack_166->GetZaxis()->SetTitleOffset(1);
   st_stack_166->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_166);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,0.3920084);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,1.3633);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,1.914017);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,1.685477);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,1.404565);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,1.041124);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,0.8363904);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,0.6030898);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,0.5158005);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,0.3666151);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,0.2920225);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,0.2475843);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,0.2317135);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,0.2094944);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,0.14125);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,0.14125);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,0.1031601);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,0.06189606);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,0.03808989);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,0.03015449);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,0.01269663);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,0.01269663);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,0.001587079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,0.003174157);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,0.001587079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,0.001587079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(30,0.001587079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,0.0249429);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,0.04651521);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,0.05511529);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,0.05172026);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,0.04721392);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,0.04064904);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,0.03643374);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,0.03093786);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,0.02861147);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,0.02412151);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,0.02152818);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,0.0198226);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,0.01917674);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,0.01823414);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,0.01497247);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,0.01497247);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,0.01279544);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,0.009911302);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,0.007775065);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,0.006917915);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,0.004488936);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,0.004488936);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,0.001587079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,0.002244468);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,0.001587079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,0.001587079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(30,0.001587079);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(7343);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,0.1503483);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,0.5287581);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,0.6702754);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,0.5353814);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,0.367371);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,0.241308);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,0.1653611);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,0.1183358);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,0.0940505);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,0.07837542);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,0.07263524);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,0.06137568);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,0.05055766);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,0.05077844);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,0.04283051);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,0.03863577);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,0.02406456);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,0.01501276);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,0.01037646);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,0.007064826);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,0.004194741);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,0.003090861);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,0.001766207);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,0.0006623275);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,0.0008831033);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,0.0004415516);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,0.005761361);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,0.01080449);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,0.01216473);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,0.01087195);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,0.009005922);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,0.00729897);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,0.006042163);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,0.00511133);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,0.004556762);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,0.004159735);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,0.004004511);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,0.003681069);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,0.003340944);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,0.003348231);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,0.003075051);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,0.00292059);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,0.002304967);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,0.001820564);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,0.001513563);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,0.001248897);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,0.0009623395);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,0.0008260675);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.0006244483);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.0003823949);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.0004415516);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.0003122242);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(15101);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_both_17->Modified();
   Z_dR_Bj1_both_17->cd();
   Z_dR_Bj1_both_17->SetSelected(Z_dR_Bj1_both_17);
}
