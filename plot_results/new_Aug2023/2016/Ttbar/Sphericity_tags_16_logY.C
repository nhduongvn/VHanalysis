void Sphericity_tags_16_logY()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Tue Aug 22 09:16:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-2.180776,1.133333,4.495543);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLogy();
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,3551.097);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,2967.961);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,1707.979);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,987.8117);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,583.14);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,339.4262);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,203.0285);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,125.491);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,81.54745);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,57.04797);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,41.05495);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,27.62852);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,20.76396);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,14.9202);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,11.54597);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,9.807109);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,6.79203);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,4.471186);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,1.736681);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,1.02929);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,0.3784084);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.06136011);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,13.77519);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,12.52843);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,9.530519);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,7.259537);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,5.605722);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,4.277149);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,3.294905);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,2.593873);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,2.082321);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,1.754974);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,1.501527);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,1.221894);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,1.059688);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,0.9009125);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,0.7934956);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,0.7250782);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,0.6069844);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.4943872);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.3045523);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.2352797);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.1471452);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.06136011);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(216002);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
