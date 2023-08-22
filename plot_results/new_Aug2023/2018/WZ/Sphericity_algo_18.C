void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Tue Aug 22 09:21:55 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-4.677921,1.133333,42.10128);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_7 = new TH1D("VbbHcc_algo_Sphericity_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,35.6413);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,24.61416);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,14.00158);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,10.36846);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,3.855367);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,3.281365);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,0.3524656);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(13,0.3455143);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,3.74665);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,3.167708);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,2.316287);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,2.059631);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,1.257615);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,1.068958);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.3524656);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(13,0.3455143);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(247);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity_stack_7->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
