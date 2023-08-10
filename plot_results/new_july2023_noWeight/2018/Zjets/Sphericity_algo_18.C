void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 12:28:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-487.223,1.133333,4385.007);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,3712.175);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,3416.461);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,1942.898);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,1183.756);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,610.5247);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,266.3449);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,85.68585);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,27.19894);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,7.561046);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,3.347647);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,4.234062);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,5.908572);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,0.8140376);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.6550539);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,0.4034972);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,0.3109243);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.5820669);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,0.377335);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,45.67974);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,46.4369);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,33.0188);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,25.80794);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,18.65656);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,12.79059);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,6.382379);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,2.774299);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.454055);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,0.8603764);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,1.100403);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,4.065213);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.3102265);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.2704992);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,0.2037878);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,0.1815481);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.4981707);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,0.2178545);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(56536);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->Draw("HIST");
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
