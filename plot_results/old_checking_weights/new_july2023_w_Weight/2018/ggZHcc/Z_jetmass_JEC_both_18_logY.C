void Z_jetmass_JEC_both_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_18/Z_jetmass_JEC_both_18
//=========  (Thu Aug 10 10:43:52 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_18 = new TCanvas("Z_jetmass_JEC_both_18", "Z_jetmass_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_18->SetHighLightColor(2);
   Z_jetmass_JEC_both_18->Range(-60,-4.261133,340,-1.08079);
   Z_jetmass_JEC_both_18->SetFillColor(0);
   Z_jetmass_JEC_both_18->SetBorderMode(0);
   Z_jetmass_JEC_both_18->SetBorderSize(2);
   Z_jetmass_JEC_both_18->SetLogy();
   Z_jetmass_JEC_both_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_12 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(3,0.0004371028);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(4,0.003281902);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(5,0.01644672);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(6,0.02106815);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(7,0.01830146);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(8,0.01457128);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(9,0.0115327);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(10,0.01007681);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(11,0.003304468);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(12,0.00331348);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(13,0.001488583);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(14,0.001430344);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(15,0.001718114);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(16,0.0003219266);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(17,0.0008718009);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(18,0.0003219266);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(19,0.0007571959);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(20,0.0002279979);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(21,0.0007082291);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(24,0.0003400733);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(27,0.0003219266);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(3,0.0004371028);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(4,0.001107113);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(5,0.002439757);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(6,0.002735592);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(7,0.00251862);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(8,0.002196666);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(9,0.00202372);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(10,0.001894136);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(11,0.001064647);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(12,0.001072019);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(13,0.0006690874);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(14,0.0007222746);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(15,0.0007794802);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(16,0.0003219266);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(17,0.0006164587);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(18,0.0003219266);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(19,0.0005405127);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(20,0.0002279979);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(21,0.0005032921);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(24,0.0003400733);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(27,0.0003219266);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetEntries(330);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_18->Modified();
   Z_jetmass_JEC_both_18->cd();
   Z_jetmass_JEC_both_18->SetSelected(Z_jetmass_JEC_both_18);
}
