void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 12:32:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-1.278168,1.133333,2.352975);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_8 = new TH1D("VbbHcc_algo_Sphericity_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,51.55992);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,49.37105);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,28.94165);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,15.56526);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,10.45791);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,3.891314);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(7,0.9728286);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(8,0.2432072);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(10,0.4864143);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(11,0.2432072);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,3.54115);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,3.465169);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,2.653077);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,1.945657);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,1.594816);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,0.9728286);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(7,0.4864143);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(8,0.2432072);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(10,0.3439469);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(11,0.2432072);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(665);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_stack_8->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
