void H_mass_both_17_logY()
{
//=========Macro generated from canvas: H_mass_both_17/H_mass_both_17
//=========  (Tue Aug 22 09:18:03 2023) by ROOT version 6.14/09
   TCanvas *H_mass_both_17 = new TCanvas("H_mass_both_17", "H_mass_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_17->SetHighLightColor(2);
   H_mass_both_17->Range(-80,-1.21055,453.3333,0.1396282);
   H_mass_both_17->SetFillColor(0);
   H_mass_both_17->SetBorderMode(0);
   H_mass_both_17->SetBorderSize(2);
   H_mass_both_17->SetLogy();
   H_mass_both_17->SetLeftMargin(0.15);
   H_mass_both_17->SetFrameBorderMode(0);
   H_mass_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass_stack_7 = new TH1D("VbbHcc_both_H_mass_stack_7","",40,0,400);
   VbbHcc_both_H_mass_stack_7->SetBinContent(7,0.4941977);
   VbbHcc_both_H_mass_stack_7->SetBinContent(8,0.4917751);
   VbbHcc_both_H_mass_stack_7->SetBinContent(9,0.450759);
   VbbHcc_both_H_mass_stack_7->SetBinContent(12,0.24863);
   VbbHcc_both_H_mass_stack_7->SetBinContent(15,0.2734067);
   VbbHcc_both_H_mass_stack_7->SetBinContent(17,0.2333619);
   VbbHcc_both_H_mass_stack_7->SetBinContent(18,0.5334104);
   VbbHcc_both_H_mass_stack_7->SetBinContent(20,0.1680729);
   VbbHcc_both_H_mass_stack_7->SetBinContent(22,0.2849003);
   VbbHcc_both_H_mass_stack_7->SetBinContent(23,0.2711943);
   VbbHcc_both_H_mass_stack_7->SetBinContent(24,0.3388179);
   VbbHcc_both_H_mass_stack_7->SetBinContent(27,0.2275793);
   VbbHcc_both_H_mass_stack_7->SetBinContent(28,0.2529144);
   VbbHcc_both_H_mass_stack_7->SetBinContent(29,0.2557154);
   VbbHcc_both_H_mass_stack_7->SetBinContent(37,0.3092329);
   VbbHcc_both_H_mass_stack_7->SetBinContent(41,1.678999);
   VbbHcc_both_H_mass_stack_7->SetBinError(7,0.3520755);
   VbbHcc_both_H_mass_stack_7->SetBinError(8,0.2847499);
   VbbHcc_both_H_mass_stack_7->SetBinError(9,0.3247051);
   VbbHcc_both_H_mass_stack_7->SetBinError(12,0.24863);
   VbbHcc_both_H_mass_stack_7->SetBinError(15,0.2734067);
   VbbHcc_both_H_mass_stack_7->SetBinError(17,0.2333619);
   VbbHcc_both_H_mass_stack_7->SetBinError(18,0.3801933);
   VbbHcc_both_H_mass_stack_7->SetBinError(20,0.1680729);
   VbbHcc_both_H_mass_stack_7->SetBinError(22,0.2849003);
   VbbHcc_both_H_mass_stack_7->SetBinError(23,0.2711943);
   VbbHcc_both_H_mass_stack_7->SetBinError(24,0.3388179);
   VbbHcc_both_H_mass_stack_7->SetBinError(27,0.2275793);
   VbbHcc_both_H_mass_stack_7->SetBinError(28,0.2529144);
   VbbHcc_both_H_mass_stack_7->SetBinError(29,0.2557154);
   VbbHcc_both_H_mass_stack_7->SetBinError(37,0.3092329);
   VbbHcc_both_H_mass_stack_7->SetBinError(41,0.6899688);
   VbbHcc_both_H_mass_stack_7->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_mass_stack_7->SetFillColor(ci);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetRange(1,40);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_both_17->Modified();
   H_mass_both_17->cd();
   H_mass_both_17->SetSelected(H_mass_both_17);
}
