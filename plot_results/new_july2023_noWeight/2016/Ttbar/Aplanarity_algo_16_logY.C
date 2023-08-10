void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug 10 12:32:17 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-2.548249,1.133333,6.732436);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,336371.1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,45621.87);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,9623.406);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,2727.537);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,918.7293);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,364.8968);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,163.6104);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,76.0373);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,40.6786);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,19.68703);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,12.03104);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,6.859491);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,5.32307);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,2.24832);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,1.459857);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.9106449);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.4487182);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.3705935);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.0479567);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(22,0.06964491);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,145.1089);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,53.28116);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,24.32576);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,12.86549);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,7.425426);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,4.647817);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,3.11209);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,2.112317);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.549236);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,1.068337);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.8411632);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.6285641);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.5679601);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.3623811);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.2859352);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.2321855);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.1614016);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1430337);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.0479567);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(22,0.06964491);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(6548404);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
