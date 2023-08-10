void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug 10 12:25:08 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-23.84728,1.133333,214.6255);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,181.6935);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,50.48903);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,17.1055);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,10.0437);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,7.372084);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,3.719157);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,5.583477);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,1.558728);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.6564362);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,0.7341364);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.6743052);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,0.09984777);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,0.08003359);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.2485356);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.2090616);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,12.7421);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,5.601446);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,2.4831);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,2.129293);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,2.262404);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,1.039145);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,2.095157);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.5156921);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.286375);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.3123696);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.3171502);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,0.09984777);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,0.06793535);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.1448641);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.1478399);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(2376);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
