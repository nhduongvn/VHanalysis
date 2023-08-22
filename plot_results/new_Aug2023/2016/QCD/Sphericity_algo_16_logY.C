void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Tue Aug 22 09:17:31 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-0.1350013,1.133333,6.883162);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,801303.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,768770.2);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,445033.8);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,254529.7);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,117369.5);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,48136.58);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,16705.9);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,3440.386);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,813.9854);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,942.9197);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,220.7227);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,90.1707);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,143.3444);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,86.09254);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,27.32279);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,35.95935);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,179.5198);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,43.97338);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,9.306673);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,7.376411);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,19889.22);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,21095.94);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,15939.18);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,14336.23);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,5321.725);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,3247.252);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,2401.962);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,658.1263);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,167.9576);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,346.0049);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,56.96325);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,35.7401);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,59.68036);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,33.5936);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,14.7684);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,16.56294);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,145.6846);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,21.82859);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,6.94927);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,5.334382);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(121336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->Draw("HIST");
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
