#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Mar  9 13:18:03 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2183529,-0.4360731,1.171633,7.013455);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetFillStyle(4000);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLogy();
   Sphericity_both_16->SetLeftMargin(0.15709);
   Sphericity_both_16->SetRightMargin(0.1234783);
   Sphericity_both_16->SetBottomMargin(0.12);
   Sphericity_both_16->SetFrameFillStyle(1000);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameFillStyle(1000);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(930739.2);
   
   TH1F *st_stack_185 = new TH1F("st_stack_185","",25,0,1);
   st_stack_185->SetMinimum(2.869923);
   st_stack_185->SetMaximum(1855676);
   st_stack_185->SetDirectory(0);
   st_stack_185->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_185->SetLineColor(ci);
   st_stack_185->GetXaxis()->SetTitle("Sphericity");
   st_stack_185->GetXaxis()->SetRange(1,25);
   st_stack_185->GetXaxis()->SetLabelFont(42);
   st_stack_185->GetXaxis()->SetTitleOffset(1);
   st_stack_185->GetXaxis()->SetTitleFont(42);
   st_stack_185->GetYaxis()->SetTitle("Event/0.04");
   st_stack_185->GetYaxis()->SetLabelFont(42);
   st_stack_185->GetYaxis()->SetTitleSize(0.037);
   st_stack_185->GetYaxis()->SetTitleFont(42);
   st_stack_185->GetZaxis()->SetLabelFont(42);
   st_stack_185->GetZaxis()->SetTitleOffset(1);
   st_stack_185->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_185);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,266309.1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,637366.3);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,702819.1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,651614.4);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,510233.3);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,457806.2);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,401162.5);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,352120.7);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,262984.7);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,248427);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,222382.7);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,167755.2);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,165786.8);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,117088.9);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,93391.55);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,73921.95);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,51489.91);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,40612.15);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,18692.87);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,8239.618);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,2878.922);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,397.8582);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(23,28.76496);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,7697.383);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,24583.24);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,27925.78);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,24412.55);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,15603.08);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,14542.35);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,26956.12);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,25704.17);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,10755.02);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,24442.89);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,23908.32);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,9177.533);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,22952.05);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,7474.172);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,6248.466);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,5304.237);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,4228.765);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,4344.412);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,3087.118);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,2145.828);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,827.7791);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,294.3085);
   VbbHcc_both_Sphericity_stack_1->SetBinError(23,26.49273);
   VbbHcc_both_Sphericity_stack_1->SetEntries(256983);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,19223.93);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,52511.39);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,69694.45);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,73163.41);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,70550.47);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,65566.15);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,60151.27);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,54824.32);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,49855.15);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,45022.62);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,40514.44);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,36206.71);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,32214.59);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,28095.07);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,24112.64);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,20112.48);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,16066.66);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,11904.11);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,7693.31);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,3949.996);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,1723.932);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,612.1793);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,163.9479);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(24,22.13438);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(25,0.4903137);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,35.8019);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,59.80559);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,69.28556);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,71.20802);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,70.05046);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,67.59318);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,64.77923);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,61.89314);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,59.03293);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,56.13281);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,53.25445);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,50.35633);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,47.52017);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,44.40099);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,41.14757);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,37.58416);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,33.615);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,28.93355);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,23.27522);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,16.70861);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,11.05825);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,6.580645);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,3.410227);
   VbbHcc_both_Sphericity_stack_2->SetBinError(24,1.247603);
   VbbHcc_both_Sphericity_stack_2->SetBinError(25,0.1811579);
   VbbHcc_both_Sphericity_stack_2->SetEntries(1.206718e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
