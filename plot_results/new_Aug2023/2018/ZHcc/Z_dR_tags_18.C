void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Tue Aug 22 09:20:17 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.2,-0.003979036,6.8,0.03581132);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLeftMargin(0.15);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.02745516);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.03031646);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.02401802);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.009685329);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.006923072);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(8,0.004693953);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(9,0.002141222);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.004379837);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.003399939);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(13,0.002299241);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.01149612);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.007386181);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.004208021);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.004715082);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.00201936);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.008857804);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(20,0.007028554);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(22,0.002234631);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.007758758);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(27,0.002219202);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(29,0.00281116);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.008044565);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.008515717);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.008040779);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.004595253);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.004002936);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(8,0.003319966);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(9,0.002141222);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.00309707);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.002595079);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(13,0.002299241);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.005144843);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.004298464);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.003070892);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.003352817);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.00201936);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.004428947);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(20,0.004096342);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(22,0.002234631);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.004506257);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(27,0.002219202);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(29,0.00281116);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}
