void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug 10 12:25:09 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-2.318153,1.133333,20.86338);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,17.66212);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,5.932739);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,3.071275);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,1.810873);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,1.125824);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.7274315);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.495432);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.3517431);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.2178295);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.1464931);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.09326851);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.07053818);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.04829988);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.0334426);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.01162079);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.009563266);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.01050986);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.00319598);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.002692429);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.001281443);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.1066734);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.06186602);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.04453604);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.0341632);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.02697156);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.02166707);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.01789221);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.01508483);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.01185075);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.009742226);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.007753823);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.006775712);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.005576188);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.004628731);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.002742239);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.00247694);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.002577747);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.001430147);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.00134703);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0009061174);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(50073);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_stack_10->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
