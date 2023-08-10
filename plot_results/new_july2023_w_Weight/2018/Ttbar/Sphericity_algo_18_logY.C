void Sphericity_algo_18_logY()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 12:21:03 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-2.167892,1.133333,6.010708);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLogy();
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,81741.38);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,82280.9);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,44012.11);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,24382.81);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,13176.32);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,6300.121);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,2725.524);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,1192.933);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,589.4977);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,311.9428);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,184.726);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,112.7487);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,71.79355);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,50.98524);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,32.69968);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,26.02529);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,15.75296);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,11.25559);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,6.042739);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,3.292168);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,1.066174);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.3051818);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(23,0.08933013);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,89.80761);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,90.53128);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,65.44264);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,49.04601);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,35.82231);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,24.64134);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,15.70854);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,10.55582);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,7.239923);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,5.299892);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,3.97047);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,3.067501);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,2.447073);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,2.081002);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.638995);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,1.531882);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,1.139275);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.9543674);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.6991345);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.5690715);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.3172521);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.1626454);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(23,0.08933013);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(3228671);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->Draw("HIST");
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
