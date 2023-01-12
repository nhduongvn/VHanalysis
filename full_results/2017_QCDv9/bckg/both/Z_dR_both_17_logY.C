#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Mon Dec 19 11:15:39 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(-1.310117,-1.063828,7.029799,10.37496);
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
   st->SetMaximum(6.638797e+08);
   
   TH1F *st_stack_130 = new TH1F("st_stack_130","",30,0,6);
   st_stack_130->SetMinimum(2.036227);
   st_stack_130->SetMaximum(1.702465e+09);
   st_stack_130->SetDirectory(0);
   st_stack_130->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_130->SetLineColor(ci);
   st_stack_130->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_130->GetXaxis()->SetRange(1,30);
   st_stack_130->GetXaxis()->SetLabelFont(42);
   st_stack_130->GetXaxis()->SetTitleOffset(1);
   st_stack_130->GetXaxis()->SetTitleFont(42);
   st_stack_130->GetYaxis()->SetTitle("Events/0.2");
   st_stack_130->GetYaxis()->SetLabelFont(42);
   st_stack_130->GetYaxis()->SetTitleSize(0.037);
   st_stack_130->GetYaxis()->SetTitleFont(42);
   st_stack_130->GetZaxis()->SetLabelFont(42);
   st_stack_130->GetZaxis()->SetTitleOffset(1);
   st_stack_130->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_130);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,2543.145);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,4643357);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,5848580);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,4526610);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,4124941);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,3866432);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,3932319);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,3669371);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,3854764);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,3859929);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,4114488);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,4653092);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,5026723);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,5550628);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,6307699);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,4071776);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,2467406);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,1746105);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,1292819);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,989913.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,590156.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,507499.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,243663.3);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,144249.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,81299.54);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,37182.06);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,26358.95);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,10.18727);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,729.2875);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,137432.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,168390);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,160720.3);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,160896.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,164148.3);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,173125);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,166329.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,171591.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,173533.9);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,175259);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,192567.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,198823.9);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,206817.3);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,228573.3);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,190550.5);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,142431.9);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,118966.9);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,104798.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,95956.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,70059.32);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,69280.02);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,41313.29);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,38316.46);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,24619.82);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,13274.86);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,17643.75);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,9.805245);
   VbbHcc_both_Z_dR_stack_1->SetEntries(620777);

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
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,28.68395);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,45651.57);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,91052.01);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,108449.3);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,132014);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,154472.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,175806.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,196728.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,218055.3);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,240594.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,264889.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,290356);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,315325.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,338235.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,331097.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,174635.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,100031.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,59640.62);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,35372.44);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,20548.54);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,11643.86);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,6299.609);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,3224.65);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,1539.445);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,651.2772);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,218.0448);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,49.18951);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,2.631434);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,1.427858);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,57.44622);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,81.3444);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,88.86634);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,98.09143);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,106.1466);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,113.2529);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,119.8268);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,126.175);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,132.5814);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,139.1805);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,145.8044);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,152.058);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,157.5843);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,156.0108);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,113.2963);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,85.69468);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,66.13888);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,50.89554);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,38.73291);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,29.10071);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,21.33913);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,15.18218);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,10.48268);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,6.787169);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,3.867224);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,1.824128);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.4137582);
   VbbHcc_both_Z_dR_stack_2->SetEntries(5.027594e+07);

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
