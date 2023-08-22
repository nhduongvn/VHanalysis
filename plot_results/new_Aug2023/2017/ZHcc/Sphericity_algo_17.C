void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Tue Aug 22 09:21:54 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-0.02766579,1.133333,0.2489921);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_11 = new TH1D("VbbHcc_algo_Sphericity_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.210787);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.1636163);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.09592276);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.06380776);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.03567707);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.01328791);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(7,0.004987805);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(9,0.001114742);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.01819443);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.01586688);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.01198673);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.009918727);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.007624838);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.004319605);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(7,0.002459846);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(9,0.001114742);
   VbbHcc_algo_Sphericity_stack_11->SetEntries(413);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_11->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->Draw("HIST");
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
