void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:28:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-136.1483,1.133333,1225.335);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,1037.32);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,825.8937);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,560.2);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,263.5029);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,165.4129);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,55.19041);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,17.72471);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,5.483291);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,3.042865);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,1.616234);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,1.877164);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,0.5218272);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.8114319);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(14,0.5428806);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.09281656);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.0116142);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.1763629);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(19,0.1763629);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,35.53332);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,31.66732);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,30.48048);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,15.22772);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,18.10871);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,5.229649);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,2.991167);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,1.510983);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,0.818469);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,1.185128);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,1.235609);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,0.2432366);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.3433335);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(14,0.3907707);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.08202873);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.0116142);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.1763629);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(19,0.1763629);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(17207);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
