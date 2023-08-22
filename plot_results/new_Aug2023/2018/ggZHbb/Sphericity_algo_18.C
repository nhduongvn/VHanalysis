void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Tue Aug 22 09:21:55 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-2.043488,1.133333,18.3914);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,15.56943);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,15.56517);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,8.769338);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,5.38322);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,3.072141);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,1.459601);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.4813479);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.1680139);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.05918215);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.0434064);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.0201232);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.01019803);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.01080891);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.004016799);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.003530636);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.002341416);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.003637509);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.0006064324);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.001612353);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.09265358);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.09209405);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.06928138);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.05443785);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.04118336);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.02848439);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.01627908);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.009565586);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.005615757);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.004832442);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.003260041);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.002268787);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.002389171);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.00136118);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.001221829);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.001014823);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.001386174);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0006064324);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.0008094291);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(94157);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->Draw("HIST");
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
