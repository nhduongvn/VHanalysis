void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Tue Aug 22 09:21:54 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-10044.5,1.133333,90400.51);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,75769.93);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,76529.54);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,40909.41);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,22646.8);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,12187.2);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,5841.239);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,2513.835);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,1099.823);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,538.4027);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,288.0203);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,168.7129);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,103.858);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,68.11373);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,47.95447);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,30.87114);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,22.99184);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,15.3351);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,10.33155);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,5.797756);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,3.153321);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,0.8417777);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.3093142);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(23,0.06584265);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,80.67457);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,81.85519);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,59.08542);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,44.29548);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,32.10861);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,22.25936);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,13.91043);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,9.297902);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,6.332403);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,4.639735);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,3.40412);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,2.657448);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,2.137419);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,1.868788);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.441034);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,1.294191);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,1.318385);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.8173761);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.634828);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.4883411);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.2396229);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.1424491);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(23,0.06584265);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(3537992);

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
