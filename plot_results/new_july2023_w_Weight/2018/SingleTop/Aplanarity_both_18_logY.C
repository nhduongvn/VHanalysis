void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug 10 10:43:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-2.154012,1.133333,3.813739);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,869.791);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,251.7938);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,124.7493);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,72.2312);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,40.52183);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,27.84993);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,19.30754);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,11.73437);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,8.488091);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,5.462913);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,3.085917);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,2.496945);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,2.176014);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,1.247279);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,1.083277);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.4623007);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.4087229);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.1375434);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.05543612);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,0.0782043);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,13.89878);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,7.488913);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,5.216247);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,3.956036);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,2.906493);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,2.448475);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.980143);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,1.529114);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,1.406095);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,1.108863);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.7262369);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.7775468);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.7614365);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.4928665);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.5355981);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.3986453);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.3139999);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.08256418);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.05543612);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,0.0782043);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(15109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
