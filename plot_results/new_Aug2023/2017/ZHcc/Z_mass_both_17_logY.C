void Z_mass_both_17_logY()
{
//=========Macro generated from canvas: Z_mass_both_17/Z_mass_both_17
//=========  (Tue Aug 22 09:18:01 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_17 = new TCanvas("Z_mass_both_17", "Z_mass_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_17->SetHighLightColor(2);
   Z_mass_both_17->Range(-80,-3.52344,453.3333,-1.076721);
   Z_mass_both_17->SetFillColor(0);
   Z_mass_both_17->SetBorderMode(0);
   Z_mass_both_17->SetBorderSize(2);
   Z_mass_both_17->SetLogy();
   Z_mass_both_17->SetLeftMargin(0.15);
   Z_mass_both_17->SetFrameBorderMode(0);
   Z_mass_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass_stack_11 = new TH1D("VbbHcc_both_Z_mass_stack_11","",40,0,400);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(5,0.00138712);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(6,0.00439266);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(8,0.007213751);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(9,0.01471684);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(10,0.02518013);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(11,0.02243623);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(12,0.0043532);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(13,0.001430948);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(14,0.002948567);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(15,0.003649727);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(16,0.001741739);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(17,0.001441711);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(18,0.003811375);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(20,0.00345065);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(21,0.001587341);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(22,0.00573574);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(24,0.00111652);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(26,0.001052596);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(28,0.00157443);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(30,0.002442404);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(32,0.001087114);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(40,0.001435202);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(41,0.03245202);
   VbbHcc_both_Z_mass_stack_11->SetBinError(5,0.00138712);
   VbbHcc_both_Z_mass_stack_11->SetBinError(6,0.00253862);
   VbbHcc_both_Z_mass_stack_11->SetBinError(8,0.00328299);
   VbbHcc_both_Z_mass_stack_11->SetBinError(9,0.00496222);
   VbbHcc_both_Z_mass_stack_11->SetBinError(10,0.006356217);
   VbbHcc_both_Z_mass_stack_11->SetBinError(11,0.005729068);
   VbbHcc_both_Z_mass_stack_11->SetBinError(12,0.002559542);
   VbbHcc_both_Z_mass_stack_11->SetBinError(13,0.001430948);
   VbbHcc_both_Z_mass_stack_11->SetBinError(14,0.002092856);
   VbbHcc_both_Z_mass_stack_11->SetBinError(15,0.002584094);
   VbbHcc_both_Z_mass_stack_11->SetBinError(16,0.001741739);
   VbbHcc_both_Z_mass_stack_11->SetBinError(17,0.001441711);
   VbbHcc_both_Z_mass_stack_11->SetBinError(18,0.002745529);
   VbbHcc_both_Z_mass_stack_11->SetBinError(20,0.002445298);
   VbbHcc_both_Z_mass_stack_11->SetBinError(21,0.001587341);
   VbbHcc_both_Z_mass_stack_11->SetBinError(22,0.003372219);
   VbbHcc_both_Z_mass_stack_11->SetBinError(24,0.00111652);
   VbbHcc_both_Z_mass_stack_11->SetBinError(26,0.001052596);
   VbbHcc_both_Z_mass_stack_11->SetBinError(28,0.00157443);
   VbbHcc_both_Z_mass_stack_11->SetBinError(30,0.001731649);
   VbbHcc_both_Z_mass_stack_11->SetBinError(32,0.001087114);
   VbbHcc_both_Z_mass_stack_11->SetBinError(40,0.001435202);
   VbbHcc_both_Z_mass_stack_11->SetBinError(41,0.007463863);
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
