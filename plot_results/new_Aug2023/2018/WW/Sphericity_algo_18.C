void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Tue Aug 22 09:21:55 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-1.763603,1.133333,15.87242);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_6 = new TH1D("VbbHcc_algo_Sphericity_stack_6","",25,0,1);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(1,13.43697);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(2,10.20939);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(3,7.189318);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(4,6.515833);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(5,0.7829594);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(6,1.156598);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(8,0.3970443);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(1,3.695047);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(2,2.592816);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(3,2.119748);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(4,2.33866);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(5,0.561677);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(6,0.818075);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(8,0.3970443);
   VbbHcc_algo_Sphericity_stack_6->SetEntries(60);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Sphericity_stack_6->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->Draw("HIST");
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
