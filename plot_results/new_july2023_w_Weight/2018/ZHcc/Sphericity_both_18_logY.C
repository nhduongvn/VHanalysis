void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 12:21:51 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-3.220259,1.133333,-1.018992);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.02958936);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.02656464);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.009081056);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.03043211);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(5,0.01030122);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.02095611);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(7,0.01728553);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(8,0.005680435);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(9,0.01071699);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.009274284);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.008713247);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.005558708);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(16,0.001999389);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(17,0.005550818);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(18,0.00283147);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.009055813);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.009054746);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.00526456);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.009704397);
   VbbHcc_both_Sphericity_stack_11->SetBinError(5,0.005193662);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.00798744);
   VbbHcc_both_Sphericity_stack_11->SetBinError(7,0.007082808);
   VbbHcc_both_Sphericity_stack_11->SetBinError(8,0.004017189);
   VbbHcc_both_Sphericity_stack_11->SetBinError(9,0.005576112);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.00547388);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.005034256);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.003941056);
   VbbHcc_both_Sphericity_stack_11->SetBinError(16,0.001999389);
   VbbHcc_both_Sphericity_stack_11->SetBinError(17,0.004075562);
   VbbHcc_both_Sphericity_stack_11->SetBinError(18,0.00283147);
   VbbHcc_both_Sphericity_stack_11->SetEntries(69);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_11->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
