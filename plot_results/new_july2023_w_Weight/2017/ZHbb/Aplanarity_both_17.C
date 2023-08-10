void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug 10 12:25:08 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-4.034989,1.133333,36.3149);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,30.74277);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,9.363683);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,4.442454);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,2.662652);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.691383);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,0.9720357);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.6389835);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.4267264);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.3011676);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.1936319);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.1477862);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.08427049);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.05324458);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.0246394);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.02426782);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.009686653);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.01509429);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.005451246);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.002037323);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.2474951);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.1371133);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.09426994);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.07350518);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.05845537);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.04366163);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.03579517);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.02907189);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.02444226);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.01928566);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.01687545);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01280683);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.01054207);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.00683447);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.006671565);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.004413152);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.005385409);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.00322302);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.002037323);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(28446);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_stack_9->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->Draw("HIST");
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
