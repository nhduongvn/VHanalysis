void H_mass_tags_18()
{
//=========Macro generated from canvas: H_mass_tags_18/H_mass_tags_18
//=========  (Tue Aug 22 09:20:06 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_18 = new TCanvas("H_mass_tags_18", "H_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_18->SetHighLightColor(2);
   H_mass_tags_18->Range(-80,-0.002156469,453.3333,0.01940822);
   H_mass_tags_18->SetFillColor(0);
   H_mass_tags_18->SetBorderMode(0);
   H_mass_tags_18->SetBorderSize(2);
   H_mass_tags_18->SetLeftMargin(0.15);
   H_mass_tags_18->SetFrameBorderMode(0);
   H_mass_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass_stack_11 = new TH1D("VbbHcc_tags_H_mass_stack_11","",40,0,400);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(3,0.00221053);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(5,0.002026054);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(7,0.003700991);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(8,0.004634412);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(9,0.002398405);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(10,0.003312494);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(11,0.007908606);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(12,0.01255336);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(13,0.0144282);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(14,0.01643024);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(15,0.008842812);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(16,0.003218807);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(17,0.002227489);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(19,0.002640973);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(20,0.004610055);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(21,0.002294171);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(22,0.006394171);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(23,0.00483052);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(24,0.00225108);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(25,0.00210716);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(26,0.00292757);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(27,0.002203227);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(36,0.002284175);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(37,0.00221053);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(41,0.05740106);
   VbbHcc_tags_H_mass_stack_11->SetBinError(3,0.00221053);
   VbbHcc_tags_H_mass_stack_11->SetBinError(5,0.002026054);
   VbbHcc_tags_H_mass_stack_11->SetBinError(7,0.002683144);
   VbbHcc_tags_H_mass_stack_11->SetBinError(8,0.003279104);
   VbbHcc_tags_H_mass_stack_11->SetBinError(9,0.002398405);
   VbbHcc_tags_H_mass_stack_11->SetBinError(10,0.003312494);
   VbbHcc_tags_H_mass_stack_11->SetBinError(11,0.004629449);
   VbbHcc_tags_H_mass_stack_11->SetBinError(12,0.005703386);
   VbbHcc_tags_H_mass_stack_11->SetBinError(13,0.006149704);
   VbbHcc_tags_H_mass_stack_11->SetBinError(14,0.006219162);
   VbbHcc_tags_H_mass_stack_11->SetBinError(15,0.004511655);
   VbbHcc_tags_H_mass_stack_11->SetBinError(16,0.003218807);
   VbbHcc_tags_H_mass_stack_11->SetBinError(17,0.002227489);
   VbbHcc_tags_H_mass_stack_11->SetBinError(19,0.002640973);
   VbbHcc_tags_H_mass_stack_11->SetBinError(20,0.00326206);
   VbbHcc_tags_H_mass_stack_11->SetBinError(21,0.002294171);
   VbbHcc_tags_H_mass_stack_11->SetBinError(22,0.003765867);
   VbbHcc_tags_H_mass_stack_11->SetBinError(23,0.003461277);
   VbbHcc_tags_H_mass_stack_11->SetBinError(24,0.00225108);
   VbbHcc_tags_H_mass_stack_11->SetBinError(25,0.00210716);
   VbbHcc_tags_H_mass_stack_11->SetBinError(26,0.00292757);
   VbbHcc_tags_H_mass_stack_11->SetBinError(27,0.002203227);
   VbbHcc_tags_H_mass_stack_11->SetBinError(36,0.002284175);
   VbbHcc_tags_H_mass_stack_11->SetBinError(37,0.00221053);
   VbbHcc_tags_H_mass_stack_11->SetBinError(41,0.01133952);
   VbbHcc_tags_H_mass_stack_11->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_mass_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_18->Modified();
   H_mass_tags_18->cd();
   H_mass_tags_18->SetSelected(H_mass_tags_18);
}
