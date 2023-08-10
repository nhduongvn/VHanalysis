void Z_mass_both_18_logY()
{
//=========Macro generated from canvas: Z_mass_both_18/Z_mass_both_18
//=========  (Thu Aug 10 12:21:21 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_18 = new TCanvas("Z_mass_both_18", "Z_mass_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_18->SetHighLightColor(2);
   Z_mass_both_18->Range(-80,-3.111884,453.3333,-0.8930548);
   Z_mass_both_18->SetFillColor(0);
   Z_mass_both_18->SetBorderMode(0);
   Z_mass_both_18->SetBorderSize(2);
   Z_mass_both_18->SetLogy();
   Z_mass_both_18->SetLeftMargin(0.15);
   Z_mass_both_18->SetFrameBorderMode(0);
   Z_mass_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass_stack_11 = new TH1D("VbbHcc_both_Z_mass_stack_11","",40,0,400);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(4,0.002811088);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(5,0.002982215);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(6,0.005871203);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(9,0.03450741);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(10,0.04050544);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(11,0.02697935);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(12,0.007168195);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(13,0.002794763);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(14,0.00283147);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(15,0.005636807);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(16,0.002576493);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(18,0.002885672);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(21,0.002885672);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(22,0.00283147);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(23,0.003415932);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(27,0.002811088);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(30,0.00272295);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(31,0.002811088);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(32,0.002662043);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(35,0.005984014);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(37,0.00283147);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(41,0.02802953);
   VbbHcc_both_Z_mass_stack_11->SetBinError(4,0.002811088);
   VbbHcc_both_Z_mass_stack_11->SetBinError(5,0.002982215);
   VbbHcc_both_Z_mass_stack_11->SetBinError(6,0.0041553);
   VbbHcc_both_Z_mass_stack_11->SetBinError(9,0.01007269);
   VbbHcc_both_Z_mass_stack_11->SetBinError(10,0.01106557);
   VbbHcc_both_Z_mass_stack_11->SetBinError(11,0.009136454);
   VbbHcc_both_Z_mass_stack_11->SetBinError(12,0.004241125);
   VbbHcc_both_Z_mass_stack_11->SetBinError(13,0.002794763);
   VbbHcc_both_Z_mass_stack_11->SetBinError(14,0.00283147);
   VbbHcc_both_Z_mass_stack_11->SetBinError(15,0.003985965);
   VbbHcc_both_Z_mass_stack_11->SetBinError(16,0.002576493);
   VbbHcc_both_Z_mass_stack_11->SetBinError(18,0.002885672);
   VbbHcc_both_Z_mass_stack_11->SetBinError(21,0.002885672);
   VbbHcc_both_Z_mass_stack_11->SetBinError(22,0.00283147);
   VbbHcc_both_Z_mass_stack_11->SetBinError(23,0.003415932);
   VbbHcc_both_Z_mass_stack_11->SetBinError(27,0.002811088);
   VbbHcc_both_Z_mass_stack_11->SetBinError(30,0.00272295);
   VbbHcc_both_Z_mass_stack_11->SetBinError(31,0.002811088);
   VbbHcc_both_Z_mass_stack_11->SetBinError(32,0.002662043);
   VbbHcc_both_Z_mass_stack_11->SetBinError(35,0.004232433);
   VbbHcc_both_Z_mass_stack_11->SetBinError(37,0.00283147);
   VbbHcc_both_Z_mass_stack_11->SetBinError(41,0.009119264);
   VbbHcc_both_Z_mass_stack_11->SetEntries(69);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_both_18->Modified();
   Z_mass_both_18->cd();
   Z_mass_both_18->SetSelected(Z_mass_both_18);
}
