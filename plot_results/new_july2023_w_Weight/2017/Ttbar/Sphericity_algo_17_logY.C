void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:21:03 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-2.379561,1.133333,5.948248);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,63944.12);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,68852.23);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,36829.83);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,19969.22);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,10481.36);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,5005.651);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,2178.315);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,949.6481);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,448.3475);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,240.1065);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,139.6054);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,82.6624);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,51.72158);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,34.00992);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,23.90383);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,14.96198);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,11.49397);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,6.281085);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,4.029966);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,1.3425);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,0.4448483);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.155056);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(23,0.06077489);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(24,0.05678712);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,68.89031);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,71.7817);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,52.44049);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,38.59);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,27.91392);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,19.17156);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,12.50617);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,8.128432);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,5.50216);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,3.971593);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,3.002426);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,2.27605);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,1.785533);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,1.407445);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.185625);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,0.9381104);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,0.8233403);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.6276728);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.4954882);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.2684795);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.1673659);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.09524612);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(23,0.04382983);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(24,0.05678712);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(3113082);

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
