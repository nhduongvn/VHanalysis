void Z_mass_tags_16_logY()
{
//=========Macro generated from canvas: Z_mass_tags_16/Z_mass_tags_16
//=========  (Thu Aug 10 12:31:05 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_16 = new TCanvas("Z_mass_tags_16", "Z_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_16->SetHighLightColor(2);
   Z_mass_tags_16->Range(-80,-3.033663,453.3333,-1.33775);
   Z_mass_tags_16->SetFillColor(0);
   Z_mass_tags_16->SetBorderMode(0);
   Z_mass_tags_16->SetBorderSize(2);
   Z_mass_tags_16->SetLogy();
   Z_mass_tags_16->SetLeftMargin(0.15);
   Z_mass_tags_16->SetFrameBorderMode(0);
   Z_mass_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass_stack_11 = new TH1D("VbbHcc_tags_Z_mass_stack_11","",40,0,400);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(6,0.005470015);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(9,0.01367504);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(10,0.01641004);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(11,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(13,0.008205022);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(16,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(19,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(21,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(27,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(29,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(41,0.03008508);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(6,0.003867885);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(9,0.006115663);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(10,0.006699373);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(11,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(12,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(13,0.004737172);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(15,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(16,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(18,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(19,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(21,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(27,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(29,0.002735007);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(41,0.009070994);
   VbbHcc_tags_Z_mass_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_mass_stack_11->SetFillColor(ci);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_tags_16->Modified();
   Z_mass_tags_16->cd();
   Z_mass_tags_16->SetSelected(Z_mass_tags_16);
}
