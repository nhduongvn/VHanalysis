void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 12:33:06 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-3.163237,1.133333,-0.9698992);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.03413643);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.02730914);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.01137881);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.02730914);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(5,0.0182061);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.01593033);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(7,0.01365457);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(8,0.004551524);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(9,0.009103048);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.009103048);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.006827286);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.004551524);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(18,0.002275762);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.008813988);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.00788347);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.005088758);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.00788347);
   VbbHcc_both_Sphericity_stack_11->SetBinError(5,0.006436827);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.0060211);
   VbbHcc_both_Sphericity_stack_11->SetBinError(7,0.005574455);
   VbbHcc_both_Sphericity_stack_11->SetBinError(8,0.003218413);
   VbbHcc_both_Sphericity_stack_11->SetBinError(9,0.004551524);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.004551524);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.003941735);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.003218413);
   VbbHcc_both_Sphericity_stack_11->SetBinError(16,0.002275762);
   VbbHcc_both_Sphericity_stack_11->SetBinError(17,0.003218413);
   VbbHcc_both_Sphericity_stack_11->SetBinError(18,0.002275762);
   VbbHcc_both_Sphericity_stack_11->SetEntries(84);

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
