void Z_mass_both_17_logY()
{
//=========Macro generated from canvas: Z_mass_both_17/Z_mass_both_17
//=========  (Thu Aug 10 10:42:51 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_17 = new TCanvas("Z_mass_both_17", "Z_mass_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_17->SetHighLightColor(2);
   Z_mass_both_17->Range(-80,-3.474637,453.3333,-1.000413);
   Z_mass_both_17->SetFillColor(0);
   Z_mass_both_17->SetBorderMode(0);
   Z_mass_both_17->SetBorderSize(2);
   Z_mass_both_17->SetLogy();
   Z_mass_both_17->SetLeftMargin(0.15);
   Z_mass_both_17->SetFrameBorderMode(0);
   Z_mass_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass_stack_11 = new TH1D("VbbHcc_both_Z_mass_stack_11","",40,0,400);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(5,0.001452482);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(6,0.005885559);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(8,0.008330828);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(9,0.0175094);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(10,0.02982742);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(11,0.02694254);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(12,0.005270454);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(13,0.001730288);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(14,0.003400884);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(15,0.004005772);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(16,0.002008926);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(17,0.001530478);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(18,0.004330521);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(20,0.003935131);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(21,0.001979228);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(22,0.006791267);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(24,0.001185265);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(26,0.001245676);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(28,0.001903785);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(30,0.002736124);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(32,0.00125388);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(40,0.001698464);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(41,0.03691101);
   VbbHcc_both_Z_mass_stack_11->SetBinError(5,0.001452482);
   VbbHcc_both_Z_mass_stack_11->SetBinError(6,0.003399549);
   VbbHcc_both_Z_mass_stack_11->SetBinError(8,0.003776809);
   VbbHcc_both_Z_mass_stack_11->SetBinError(9,0.00587666);
   VbbHcc_both_Z_mass_stack_11->SetBinError(10,0.007490854);
   VbbHcc_both_Z_mass_stack_11->SetBinError(11,0.006880525);
   VbbHcc_both_Z_mass_stack_11->SetBinError(12,0.003090079);
   VbbHcc_both_Z_mass_stack_11->SetBinError(13,0.001730288);
   VbbHcc_both_Z_mass_stack_11->SetBinError(14,0.002413905);
   VbbHcc_both_Z_mass_stack_11->SetBinError(15,0.002832519);
   VbbHcc_both_Z_mass_stack_11->SetBinError(16,0.002008926);
   VbbHcc_both_Z_mass_stack_11->SetBinError(17,0.001530478);
   VbbHcc_both_Z_mass_stack_11->SetBinError(18,0.00308267);
   VbbHcc_both_Z_mass_stack_11->SetBinError(20,0.002783179);
   VbbHcc_both_Z_mass_stack_11->SetBinError(21,0.001979228);
   VbbHcc_both_Z_mass_stack_11->SetBinError(22,0.003933483);
   VbbHcc_both_Z_mass_stack_11->SetBinError(24,0.001185265);
   VbbHcc_both_Z_mass_stack_11->SetBinError(26,0.001245676);
   VbbHcc_both_Z_mass_stack_11->SetBinError(28,0.001903785);
   VbbHcc_both_Z_mass_stack_11->SetBinError(30,0.001951926);
   VbbHcc_both_Z_mass_stack_11->SetBinError(32,0.00125388);
   VbbHcc_both_Z_mass_stack_11->SetBinError(40,0.001698464);
   VbbHcc_both_Z_mass_stack_11->SetBinError(41,0.008487195);
   VbbHcc_both_Z_mass_stack_11->SetEntries(95);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_mass_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_both_17->Modified();
   Z_mass_both_17->cd();
   Z_mass_both_17->SetSelected(Z_mass_both_17);
}
