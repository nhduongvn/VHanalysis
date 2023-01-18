#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_both_all/H_dR_Bj1_both_all
//=========  (Wed Jan 18 11:42:15 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_both_all = new TCanvas("H_dR_Bj1_both_all", "H_dR_Bj1_both_all",0,0,600,600);
   H_dR_Bj1_both_all->SetHighLightColor(2);
   H_dR_Bj1_both_all->Range(-1.310117,0.3804829,7.029799,3.218855);
   H_dR_Bj1_both_all->SetFillColor(0);
   H_dR_Bj1_both_all->SetFillStyle(4000);
   H_dR_Bj1_both_all->SetBorderMode(0);
   H_dR_Bj1_both_all->SetBorderSize(2);
   H_dR_Bj1_both_all->SetLogy();
   H_dR_Bj1_both_all->SetLeftMargin(0.15709);
   H_dR_Bj1_both_all->SetRightMargin(0.1234783);
   H_dR_Bj1_both_all->SetBottomMargin(0.12);
   H_dR_Bj1_both_all->SetFrameFillStyle(1000);
   H_dR_Bj1_both_all->SetFrameBorderMode(0);
   H_dR_Bj1_both_all->SetFrameFillStyle(1000);
   H_dR_Bj1_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(632.98);
   
   TH1F *st_stack_176 = new TH1F("st_stack_176","",30,0,6);
   st_stack_176->SetMinimum(5.261233);
   st_stack_176->SetMaximum(861.0288);
   st_stack_176->SetDirectory(0);
   st_stack_176->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_176->SetLineColor(ci);
   st_stack_176->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_176->GetXaxis()->SetRange(1,30);
   st_stack_176->GetXaxis()->SetLabelFont(42);
   st_stack_176->GetXaxis()->SetTitleOffset(1);
   st_stack_176->GetXaxis()->SetTitleFont(42);
   st_stack_176->GetYaxis()->SetTitle("Events/0.2");
   st_stack_176->GetYaxis()->SetLabelFont(42);
   st_stack_176->GetYaxis()->SetTitleSize(0.037);
   st_stack_176->GetYaxis()->SetTitleFont(42);
   st_stack_176->GetZaxis()->SetLabelFont(42);
   st_stack_176->GetZaxis()->SetTitleOffset(1);
   st_stack_176->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_176);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(1,0.8954945);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(2,3.344551);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(3,4.665475);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(4,4.453479);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(5,3.741475);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(6,3.234077);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(7,2.622643);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(8,2.149706);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(9,1.746477);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(10,1.47151);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(11,1.285903);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(12,1.077476);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(13,1.019117);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(14,0.9336725);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(15,0.7630844);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(16,0.725965);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(17,0.3640706);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(18,0.2764953);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(19,0.1708531);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(20,0.1071972);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(21,0.06830274);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(22,0.02819638);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(23,0.02690217);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(24,0.02284523);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(25,0.01443432);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(26,0.004614803);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(27,0.002323422);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(28,0.001440646);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(1,0.04144946);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(2,0.07927656);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(3,0.09374786);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(4,0.09109861);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(5,0.08386649);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(6,0.0781854);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(7,0.07031903);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(8,0.06359449);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(9,0.05763983);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(10,0.05296411);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(11,0.04885883);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(12,0.04486586);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(13,0.04372326);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(14,0.04189638);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(15,0.03779813);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(16,0.03716578);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(17,0.02585862);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(18,0.022999);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(19,0.01801316);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(20,0.01425888);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(21,0.01148716);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(22,0.007213759);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(23,0.007099733);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(24,0.006484269);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(25,0.004876003);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(26,0.002667039);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(27,0.002323422);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(28,0.001440646);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetEntries(19568);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(1,0.4057443);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(2,1.397407);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(3,1.664325);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(4,1.475539);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(5,1.194571);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(6,0.9593073);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(7,0.7614417);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(8,0.5631078);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(9,0.4708457);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(10,0.3777081);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(11,0.3241802);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(12,0.2934824);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(13,0.2531897);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(14,0.2411541);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(15,0.2208928);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(16,0.2056923);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(17,0.1046701);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(18,0.07333588);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(19,0.04847156);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(20,0.02814611);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(21,0.02115959);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(22,0.01440662);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(23,0.008496006);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(24,0.004321514);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(25,0.003159818);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(26,0.003159818);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(27,0.001228376);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(28,0.0002207758);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(31,0.0005241698);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(1,0.01034693);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(2,0.01923161);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(3,0.02099605);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(4,0.01978409);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(5,0.01779311);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(6,0.01599721);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(7,0.01426737);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(8,0.01222118);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(9,0.01111991);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(10,0.009976805);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(11,0.009204855);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(12,0.008753629);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(13,0.008139992);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(14,0.007891773);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(15,0.007571857);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(16,0.007317098);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(17,0.005183985);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(18,0.004383145);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(19,0.003585176);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(20,0.002745822);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(21,0.002376768);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(22,0.001932256);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(23,0.001413097);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(24,0.001028533);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(25,0.0009114522);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(26,0.0009114522);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(27,0.0005780096);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(28,0.0002207758);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(31,0.0003883826);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetEntries(45428);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_both_all->Modified();
   H_dR_Bj1_both_all->cd();
   H_dR_Bj1_both_all->SetSelected(H_dR_Bj1_both_all);
}
