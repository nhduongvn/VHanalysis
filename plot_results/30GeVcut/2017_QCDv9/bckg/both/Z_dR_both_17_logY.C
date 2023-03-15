#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Tue Feb 14 16:02:03 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(-1.310117,-1.027538,7.029799,10.1729);
   Z_dR_both_17->SetFillColor(0);
   Z_dR_both_17->SetFillStyle(4000);
   Z_dR_both_17->SetBorderMode(0);
   Z_dR_both_17->SetBorderSize(2);
   Z_dR_both_17->SetLogy();
   Z_dR_both_17->SetLeftMargin(0.15709);
   Z_dR_both_17->SetRightMargin(0.1234783);
   Z_dR_both_17->SetBottomMargin(0.12);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(4.464169e+08);
   
   TH1F *st_stack_146 = new TH1F("st_stack_146","",30,0,6);
   st_stack_146->SetMinimum(2.072595);
   st_stack_146->SetMaximum(1.129411e+09);
   st_stack_146->SetDirectory(0);
   st_stack_146->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_146->SetLineColor(ci);
   st_stack_146->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_146->GetXaxis()->SetRange(1,30);
   st_stack_146->GetXaxis()->SetLabelFont(42);
   st_stack_146->GetXaxis()->SetTitleOffset(1);
   st_stack_146->GetXaxis()->SetTitleFont(42);
   st_stack_146->GetYaxis()->SetTitle("Events/0.2");
   st_stack_146->GetYaxis()->SetLabelFont(42);
   st_stack_146->GetYaxis()->SetTitleSize(0.037);
   st_stack_146->GetYaxis()->SetTitleFont(42);
   st_stack_146->GetZaxis()->SetLabelFont(42);
   st_stack_146->GetZaxis()->SetTitleOffset(1);
   st_stack_146->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_146);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,2873.32);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,3723282);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,4377669);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,3388208);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,2941636);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,2718085);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,2571206);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,2359203);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,2515562);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,2517588);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,2666457);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,2812334);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,3151444);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,3348639);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,3807121);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,2319751);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,1414938);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,1086487);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,739425.6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,504259.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,290545.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,298792.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,123324.6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,48101.73);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,45358.18);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,15029.88);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,4507.709);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,9.710887);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,811.9069);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,106019.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,117425.8);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,121808);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,117365.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,120576.5);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,118546.7);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,108895);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,123461.5);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,117531.4);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,125827.9);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,121237.3);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,140362.5);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,130132.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,149611.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,121863.9);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,88672.06);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,85961.75);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,71520.34);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,52573.46);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,35018.28);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,51284.86);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,21646.76);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,5938.91);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,19905.34);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,3871.526);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,2053.219);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,9.287382);
   VbbHcc_both_Z_dR_stack_1->SetEntries(539612);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,27.70735);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,43479.91);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,86499.72);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,103018.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,125425.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,146605);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,166777.5);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,186634.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,207040.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,228393.1);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,251678.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,276023.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,299821.1);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,321776.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,314838.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,165607);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,94561.63);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,56113.21);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,33119.63);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,19111.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,10740.96);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,5763.04);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,2907.922);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,1373.359);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,570.0156);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,186.4492);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,41.79828);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,2.383555);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,1.417374);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,56.36695);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,79.70788);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,87.06481);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,96.10858);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,103.9375);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,110.8787);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,117.3153);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,123.5865);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,129.8514);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,136.3714);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,142.9);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,149.0368);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,154.5014);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,152.9233);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,110.9113);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,83.76406);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,64.50154);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,49.52763);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,37.5673);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,28.11766);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,20.53802);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,14.50316);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,9.960808);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,6.384185);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,3.596308);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,1.689804);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.4049791);
   VbbHcc_both_Z_dR_stack_2->SetEntries(4.685053e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   Z_dR_both_17->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->SetSelected(Z_dR_both_17);
}
