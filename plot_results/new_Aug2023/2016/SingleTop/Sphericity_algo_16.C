void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Tue Aug 22 09:21:53 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-697.6426,1.133333,6278.783);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,5315.372);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,5136.954);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,2873.773);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,1604.695);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,835.0141);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,392.3784);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,157.718);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,68.72339);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,33.07314);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,21.14966);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,11.24148);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,9.583045);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,5.983527);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,3.810998);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,1.954124);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,2.210682);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,1.823066);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,1.032072);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.3429384);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.03407476);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(22,0.01849631);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,25.74489);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,24.96119);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,18.91321);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,14.26292);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,10.32505);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,7.056575);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,4.451984);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,2.852485);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,1.973063);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,1.645081);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,1.17138);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.184209);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.8768313);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.6568681);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.441893);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.5161068);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.4963382);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.4301865);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.2523516);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.04332398);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(22,0.01849631);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(335691);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->Draw("HIST");
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
