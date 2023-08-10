void Sphericity_algo_18_logY()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 10:42:28 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-1.033517,1.133333,1.656216);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLogy();
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_6 = new TH1D("VbbHcc_algo_Sphericity_stack_6","",25,0,1);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(1,12.87341);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(2,12.35784);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(3,7.240596);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(4,7.02285);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(5,1.178599);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(6,1.504893);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(8,0.3439428);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(1,3.280815);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(2,2.608689);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(3,1.974879);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(4,2.163978);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(5,0.6973578);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(6,0.8690189);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(8,0.3439428);
   VbbHcc_algo_Sphericity_stack_6->SetEntries(77);

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
