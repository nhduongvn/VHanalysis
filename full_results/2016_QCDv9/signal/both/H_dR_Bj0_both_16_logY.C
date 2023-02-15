#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_both_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_both_16/H_dR_Bj0_both_16
//=========  (Tue Feb 14 16:07:57 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_both_16 = new TCanvas("H_dR_Bj0_both_16", "H_dR_Bj0_both_16",0,0,600,600);
   H_dR_Bj0_both_16->SetHighLightColor(2);
   H_dR_Bj0_both_16->Range(-1.310117,0.5271309,7.029799,2.632892);
   H_dR_Bj0_both_16->SetFillColor(0);
   H_dR_Bj0_both_16->SetFillStyle(4000);
   H_dR_Bj0_both_16->SetBorderMode(0);
   H_dR_Bj0_both_16->SetBorderSize(2);
   H_dR_Bj0_both_16->SetLogy();
   H_dR_Bj0_both_16->SetLeftMargin(0.15709);
   H_dR_Bj0_both_16->SetRightMargin(0.1234783);
   H_dR_Bj0_both_16->SetBottomMargin(0.12);
   H_dR_Bj0_both_16->SetFrameFillStyle(1000);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
   H_dR_Bj0_both_16->SetFrameFillStyle(1000);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(209.186);
   
   TH1F *st_stack_169 = new TH1F("st_stack_169","",30,0,6);
   st_stack_169->SetMinimum(6.02313);
   st_stack_169->SetMaximum(264.4333);
   st_stack_169->SetDirectory(0);
   st_stack_169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_169->SetLineColor(ci);
   st_stack_169->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_169->GetXaxis()->SetRange(1,30);
   st_stack_169->GetXaxis()->SetLabelFont(42);
   st_stack_169->GetXaxis()->SetTitleOffset(1);
   st_stack_169->GetXaxis()->SetTitleFont(42);
   st_stack_169->GetYaxis()->SetTitle("Events/0.2");
   st_stack_169->GetYaxis()->SetLabelFont(42);
   st_stack_169->GetYaxis()->SetTitleSize(0.037);
   st_stack_169->GetYaxis()->SetTitleFont(42);
   st_stack_169->GetZaxis()->SetLabelFont(42);
   st_stack_169->GetZaxis()->SetTitleOffset(1);
   st_stack_169->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_169);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,0.361021);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,1.260838);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,1.569894);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,1.351094);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,1.167848);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,0.8779374);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,0.7740071);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,0.6317867);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,0.4649513);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,0.361021);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,0.3364059);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,0.2762358);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,0.2160656);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,0.2324756);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,0.1613654);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,0.2133306);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,0.09299025);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,0.05743516);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,0.05743516);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,0.0382901);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,0.01367504);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,0.01641004);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,0.005470015);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,0.01094003);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,0.005470015);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,0.005470015);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,0.03142284);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,0.0587231);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,0.06552612);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,0.06078858);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,0.05651613);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,0.04900169);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,0.04600995);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,0.04156851);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,0.03566013);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,0.03142284);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,0.0303327);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,0.02748648);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,0.02430928);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,0.02521552);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,0.02100799);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,0.02415493);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,0.0159477);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,0.01253338);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,0.01253338);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,0.01023346);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,0.006115663);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,0.006699373);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,0.003867885);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,0.005470015);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,0.003867885);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,0.003867885);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(3861);

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
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,0.1311166);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,0.455514);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,0.5219654);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,0.4526558);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,0.3515496);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,0.2743802);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,0.1997116);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,0.1657714);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,0.125043);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,0.09610451);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,0.08717287);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,0.08002755);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,0.06466512);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,0.06180699);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,0.06037793);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,0.05358988);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,0.03001033);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,0.02286501);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,0.01393337);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,0.01214704);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,0.006430785);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,0.007145317);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,0.003572658);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,0.00428719);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,0.003215393);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.001071798);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(29,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(30,0.0003572658);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,0.006844229);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,0.01275694);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,0.01365578);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,0.01271686);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,0.01120699);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,0.009900842);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,0.008446901);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,0.007695742);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,0.006683832);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,0.005859596);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,0.005580671);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,0.005347066);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,0.00480652);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,0.004699099);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,0.004644456);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,0.004375595);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,0.003274396);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,0.002858127);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,0.002231125);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,0.0020832);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.001515751);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.001597741);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.001129774);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.001237605);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.001071798);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.0005052502);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.0006188026);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(29,0.0005052502);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(30,0.0003572658);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(9203);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_both_16->Modified();
   H_dR_Bj0_both_16->cd();
   H_dR_Bj0_both_16->SetSelected(H_dR_Bj0_both_16);
}
